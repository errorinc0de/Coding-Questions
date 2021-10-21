#include<iostream>

using namespace std;

/*Used Hashing technique to count the frequency of the array elements, then brute force to count the number of deletions*/

int main(){
    int n;
    cin>>n;
    int a[101]={0};
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a[temp]++;
    }
    int max=0;
    for(int i=0;i<101;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int count=0,d=0;
    for(int i=0;i<101;i++){
        if(a[i]!=max){
            count+=a[i];
        }
        else if (a[i]==max) {
            d++;
        }
    }
    cout<<count+(d-1)*max;
}
