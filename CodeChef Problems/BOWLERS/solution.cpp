//author : Harsh Gupta


#include<bits/stdc++.h>
using namespace std;
#define OPTIMIZE() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define MAX 100000000
#define ll long long
#define pb push_back
#define ff first
#define ss second
const int  mod  = 1000000007;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//OPTIMIZE()
	int t;
	cin >> t;
	while (t--)
	{
		int n, l, k;
		cin >> n >> k >> l;
		vector<int> v;
		while (l)
		{
			for (int i = 1; i <= k; i++)
			{

				v.pb(i);
			}
			l--;
			if (v.size() >= n)
				break;
		}
		if (k == 1)
		{
			if (n > 1)
				cout << -1 << endl;
			else
				cout << 1 << endl;
		}
		else if (v.size() >= n)
		{
			for (int i = 0; i < n; i++)
				cout << v[i] << " ";
			cout << endl;
		}
		else
			cout << -1 << endl;
	}
}