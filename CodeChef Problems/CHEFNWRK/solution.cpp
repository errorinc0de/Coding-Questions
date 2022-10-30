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
		int n, k, ans = 0, sum = 0;
		cin >> n >> k;
		int w[n];
		for (int i = 0; i < n; i++)
		{
			cin >> w[i];
			if (w[i] > k)
			{
				ans = -1;
			}
		}
		if (ans == 0)
		{
			sum = 0;
			ans++;
			for (int i = 0; i < n; i++)
			{
				sum += w[i];
				if (sum > k)
				{
					sum = 0;
					i--;
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
}