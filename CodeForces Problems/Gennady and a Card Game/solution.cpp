#include<bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	//For fast input
	ios::sync_with_stdio(false);
	cin.tie(0);
	//Basic Implementation for programme
	int card = 0;
	string table;
	string mycards[5];
	cin >> table;
	cin >> mycards[0] >> mycards[1] >> mycards[2] >> mycards[3] >> mycards[4];
	for (int i = 0; i < 5; ++i)
	{
		//Logic to know if it's required card rank or suit and
		//Responsed acordingly
		if (mycards[i][0] == table[0] || mycards[i][1] == table[1])
		{
			cout << "YES";
			card++;
			break;
		}

	}
	if (card == 0)
	{
		cout << "NO";
	}

	return 0;
}
