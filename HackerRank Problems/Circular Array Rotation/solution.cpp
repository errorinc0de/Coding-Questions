#include<iostream>

using namespace std;

/* Using the concept of auxiliary array to solve the given problem  within the time constraints*/

int main(){
    long long int n,k,q;
    cin>>n>>k>>q;
    long long int a[n],b[q];
    for(long long int i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long int i=0;i<q;i++){
        cin>>b[i];
    }
    if(k>=n){
        k=k%n;
    }
    
    long long int x[k];
    
    for(long long int i=n-k;i<n;i++){
        x[i-n+k]=a[i];
    }
    for(long long int i=n-k-1;i>=0;i--){
        a[i+k]=a[i];
    }
    for(long long int i=0;i<k;i++){
        a[i]=x[i];
    }
    
    for(long long int i=0;i<q;i++){
        cout<<a[b[i]]<<endl;
    }
}
