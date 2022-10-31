//author : Harsh Gupta

#include<bits/stdc++.h>
using namespace std;
#define OPTIMIZE() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define MAX 100000
#define ll long long
#define PB push_back
#define F first
#define S second
#define MP make_pair
const int  mod  = 1000000007;

#include <bits/stdc++.h>
using namespace std;

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
		int n, ans = 0;
		cin >> n;
		int a[n], b[n];

		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
			a[i] = i + 1;
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] % b[i] != 0)
			{
				ans++;
				break;
			}
		}
		if (ans)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}