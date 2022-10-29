//Author - Nitin Chauhan

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n ;
        cin>>n;
        ll a[n] , b[n] ;
        ll rox=0;
        map<ll ,ll> m1,m2;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            rox=rox^a[i];
            m1[a[i]]++;
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
            rox=rox^b[i];
            m2[b[i]]++;
        }
        if(rox!=0)
            cout<<-1<<endl;
        else{
                vector<ll> v1,v2;

            for(auto it = m1.begin() ;it!=m1.end() ; it++)
            {
                if(m2.find(it->first) == m2.end())
                  for(ll i=0;i<it->second/2 ;i++)
                    v2.push_back(it->first);

                else if(it->second > m2[it->first] )
                  for(ll i=0 ;  i<(it->second - m2[it->first])/2 ; i++)
                    v2.push_back(it->first);

                else if(it->second< m2[it->first])
                    for(ll i=0;i<(m2[it->first] - it->second)/2 ;i++)
                     v1.push_back(it->first);

            }

           for(auto it=m2.begin() ; it!=m2.end() ;it++)
           {
               if(m1.find(it->first) == m1.end())
                for(ll i=0 ; i<it->second/2 ;i++)
                  v1.push_back(it->first);


           }

           /*for(int x : v1)
            cout<<x<<" ";
           cout<<endl;
           for(int y: v2)
             cout<<y<<" ";
           cout<<endl;
*/         sort(v1.begin() , v1.end());
           sort(v2.begin() , v2.end() , greater<ll>());

           //finding the minimum element
          ll m;

          m = min(m1.begin()->first , m2.begin()->first);
      //cout<<m<<" ";
           //for doubling the minimum element           m=2*m;

          m=2*m;
           ll ans=0;
           for(ll i=0 ; i<v1.size();i++)
               ans+=min(min(v1[i],v2[i]), m);

           cout<<ans<<endl;

        }
    }
}

