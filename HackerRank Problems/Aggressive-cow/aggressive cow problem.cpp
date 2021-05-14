/*

Link : https://www.spoj.com/problems/AGGRCOW/
*/

#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

bool canPlaceCows(int stall[],int n,int c,int min_sep){

    int last_cow=stall[0];
    //place 1st cow in 1st stall
    int cnt=1;
    for(int i=1;i<n;i++){
        if(stall[i]-last_cow>=min_sep){
            last_cow=stall[i];
            cnt++;
            if(cnt==c){
                return true;
            }
        }
    }
    return false;
    }

int main()
{

    int stall[]={1,2,4,8,9};
    int n=5;

    int cows=3;

    //binary search
    int s=0;
    int e=stall[n-1]-stall[0];

    int ans=0;
    while(s<=e){
        int mid=(s+e)/2; //min sepa

        bool cowsRakPaye = canPlaceCows(stall,n,cows,mid);
        if(cowsRakPaye){ //if true s=m+1
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans;
    return 0;
}
