//author : Shreya Jaiswal
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;//test case input
    for(int tm=0;tm<t;tm++)//To run each test cases
    {
        int n,x,y,k,b=0;
        cin>>n>>k>>x>>y;//taking the given inputs
        for(int j=0;j<n;j++)//this looping will help in producing cycle from 1 to n
        {
            x=(x+k)%n;// this operation is done to update new position of x that is covid current city
            if(x==y)// when x will become y that means that covid reached our city thus updated b=1 else if covid will never reach our city then  b=0
            {
                b=1;
                break;
            }
        }
        if(b==0)
        cout<<"NO"<<endl;
        if(b==1)
        cout<<"YES"<<endl;
    }
    return 0;
}
