//author : Harsh Gupta
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k=0;
	    cin>>n>>m;
	    int a[n][m];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        cin>>a[i][j];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            int x=0,y=0;
	            while((a[i-x][j]==a[i+x][j])&&(a[i][j-y]==a[i][j+y]))
	            {
	                if(i-x<0||j-y<0||i+x>=n||j+y>=m)
	                break;
	                k++;
	                x++;
	                y++;
	                if(i-x<0||j-y<0||i+x>=n||j+y>=m)
	                break;
	            }
	        }
	    }
	    cout<<k<<endl;
	}
	return 0;