#include<iostream>

using namespace std;

/* followed an optimization technique in order to obtain the solution*/

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int i,j,s=0;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(a[i]+a[j]==m){
                    s=1;
                    break;
                }
                else {
                continue;
                }
                
            }
            if(s==1){
                break;
            }
            else {
            continue;
            }
        }
        cout<<i+1<<" "<<j+1<<endl;
    }
}
