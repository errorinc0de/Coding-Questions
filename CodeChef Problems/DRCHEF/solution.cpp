//Author - Nitin Chauhan

#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long   int x,n;
        cin>>n>>x;
       long long  int a[n];
        for(long long int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
       long long int s=0, old=a[n-1];
       if(a[n-1]<=x)
        cout<<n<<"\n";
       else {
        while(a[n-1]>x)
        {
            for(long long int i=0;i<n-1;i++)
            {
                if(a[i]<=x && 2*a[i]>=x && a[i]!=0){
                    x=2*a[i];
                    a[i]=0;
                    s++;
                }
            }
            //cout<<x;
            if(x<a[n-1])
                s++;
            a[n-1]=min(2*(a[n-1]-x) , old);
            x=2*x;


        }
        
        
        for(long long int i=0;i<n-1;i++)
            if(a[i]!=0)
             s=s+1;
        s++;
        cout<<s<<"\n";
    }
}}