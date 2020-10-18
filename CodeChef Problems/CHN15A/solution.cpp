//author : Arpit Kumar Jaiswal
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;//taking test case input
    for(int tm=0;tm<t;tm++)// To run each test cases
    {
        int n,k,c=0;
        cin>> n >>k;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if((a[i]+k)%7==0)//Since Gru knows that if the new characteristic value of a minion is divisible by 7, then it will have Wolverine-like mutations, thus increases c.
            c++;
        }
        cout<<c<<endl;//Here c will give total no. of Wolverine-like mutations.
    }
	return 0;
}
