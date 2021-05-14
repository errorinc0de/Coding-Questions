/* question link
https://hack.codingblocks.com/app/practice/1/1365/problem
*/


#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

bool isPossible(int a[],int n,int m,int curr_min){
    int su=1;
    int page=0;

    for(int i=0;i<n;i++){

        if(page+a[i]>curr_min){
        su++;

        page=a[i];
        if(su>m){
            return false;
        }
    }
    else{
        page+=a[i];
    }
    }
    return true;
}

int findPage(int a[],int n,int m)
{
    long long sum=0;
    if(n<m)
        return -1;

    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }

    int s=a[n-1];
    int e=sum;

    int ans;

    while(s<e)
    {
        int mid=(s+e)/2;
         if(isPossible(a,n,m,mid))
    {
        ans=mid;
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    }
    return ans;
}

int main()
{
    int a[1000];
    int t;
    cin>>t;
     int n,m;
    for(int i=0;i<t;i++)
    {

        cin>>n>>m;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
    }
    cout<<findPage(a,n,m);

    return 0;
}
