#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<0<<endl;
        }
        else if(x < y){
            int d = y-x;
            if(d % 2 == 0){
                cout<<d/2<<endl;
            }else
            {
                cout<<(d/2)+ 2<<endl;
            }
        }
        else
        {
            int d = x-y;
            cout<<d<<endl;
        }
    }
    return 0;
}
