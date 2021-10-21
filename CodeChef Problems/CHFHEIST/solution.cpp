#include <iostream>
using namespace std;

int main(){
    long int testCases, D, d, P, Q, money, multiplier;
    cin >> testCases;
    while(testCases--){
        cin >> D >> d >> P >> Q;
        multiplier = D/d;
        money = (D * P) + ((d * Q * (multiplier - 1) * (multiplier))/2) +  ((D % d) * multiplier * Q);
        cout << money << endl;
    }
    return 0;
}
