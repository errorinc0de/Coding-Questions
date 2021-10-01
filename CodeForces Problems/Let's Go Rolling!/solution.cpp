#include<bits/stdc++.h>
using namespace std;
#define mod 998244353 
#define MAX 2000000000
#define inf 2000000000
#define ll long long int

ll recurse(ll i,ll n,vector<pair<ll,ll>>&v,vector<vector<ll>>&dp,ll pinDown){
   if(i>=n)
        return 0;
    if(dp[i][pinDown]!=-1)
        return dp[i][pinDown]; 

    //pin down
    ll op1=v[i].second+recurse(i+1,n,v,dp,i);

    //not pin down
    ll op2=v[i].first-v[pinDown].first+recurse(i+1,n,v,dp,pinDown);

    return dp[i][pinDown]=min(op1,op2);
}

void solve(){
    ll n;
    cin>>n;

    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        ll x,c;
        cin>>x>>c;
        v.push_back(make_pair(x,c));
    }

    sort(v.begin(), v.end());

    vector<vector<ll>>dp(n,vector<ll>(n,-1));

    cout<<v[0].second+recurse(1,n,v,dp,0)<<'\n';
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r" ,stdin);
    freopen("output.txt", "w" ,stdout);
    #endif


    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t=1;
    while(t--){
        solve();
    }
    return 0;
}
