#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCases;
	int N;
	cin >> testCases;
	while(testCases--) {
	    cin >> N;
	    int A[N];
	    set<int> ballons;
	    for (int i=1; i<=N; i++)
	        cin >> A[i];
	    for (int i=1; i<=N ;i++){
	        if(A[i]<8)
	            ballons.insert(A[i]);
	        if(i>5)
	            if(ballons.size()==7){
	                cout << i << endl;
	                break;
	            }
	    }
	}
	return 0;
}
