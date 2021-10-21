#include<iostream>

using namespace std;
/* A brute force solution as asked in the question, making sure to use long long data typre instead of normal int*/

int main(){
    long long int t;
    
    cin>>t;
    
    while(t--){
    long long int n;
    cin>>n;
    long long int a= 4294967295-n;
    cout<<a<<endl;
}
}
