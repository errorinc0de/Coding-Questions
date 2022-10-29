//author : Harsh Gupta

#include<bits/stdc++.h>
using namespace std;

int main()
{
      const unsigned int M = 1000000007;
      int t;
      cin>>t;
      while(t--)
      {
            int n;
            cin>>n;
            long long int a[n],pr=0;
            for(int i=0;i<n;i++)
            cin>>a[i];
            sort(a, a+n, greater<int>());
            pr=(pr+a[0]%M)%M;
            for(int i=1;i<n;i++)
            {
                  if((a[i]-i)>0)
                  pr=(pr%M+(a[i]-i)%M)%M;
            }
            cout<<pr%M<<endl;
      }
}