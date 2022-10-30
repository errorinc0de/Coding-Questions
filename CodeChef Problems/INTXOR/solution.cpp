// Author - Nitin Chauhan

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,a[100000],x,y,z,a1_a4,i,j,top,ap,test;
        cin>>n;
        top=n;
        cout<<"1 1 2 3\n";
        cin>>x;
        cout<<"1 2 3 4\n";
        cin>>y;
        a1_a4=x^y;
        cout<<"1 1 4 "<<n<<"\n";
        cin>>z;
        a[top]=z^a1_a4;top--;
        cout<<"1 1 4 "<<n-1<<"\n";
        cin>>z;
        a[top]=z^a1_a4;top--;
        for(i=n;i-2>4;i--)
        {
            cout<<"1 "<<i<<" "<<i-1<<" "<<i-2<<"\n";
            cin>>z;
            if(z==-1)
                break;
            else{
                    ap=a[i]^a[i-1];
            a[top]=ap^z;top--;}
        }
        cout<<"1 3 5 6\n";
        cin>>z;
        ap=a[5]^a[6];
        a[3]=ap^z;;
        cout<<"1 2 5 "<<n<<"\n";cin>>z;
        ap=a[n]^a[5];
        a[2]=z^ap;
        ap=a[2]^a[3];
        a[4]=y^ap;
        a[1]=x^ap;
        cout<<"2 ";
        for(int j=1;j<=n;j++)
            cout<<a[j]<<" ";
            cout<<"\n";
            cin>>test;
            if(test==-1)
                break;

    }
    return 0;
}