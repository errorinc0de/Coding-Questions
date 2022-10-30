//author : Harsh Gupta


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,c,sum=0,i;
	    cin>>n>>c;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    {
	    cin>>a[i];
	    sum=sum+a[i];
	    }
        if(sum<=c)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
	}
	return 0;
}
