#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //check if the number can be formed by only 3 or 5 or 7
        if(n%3==0){
            cout<<n/3<<" "<<0<<" "<<0<<endl;
            continue;
        }
        if(n%5==0){
            cout<<0<<" "<<n/5<<" "<<0<<endl;
            continue;
        }
        if(n%7==0){
            cout<<0<<" "<<0<<" "<<n/7<<endl;
            continue;
        }
        // for 1,2,4
        if(n<8){
            cout<<-1<<endl;
            continue;
        }

        //number can be expressed as 3x+5 or 3x+7
        // to check we have to find the nearest as possible as multiple of 3
        // and then check wether adding 5*1 and 7*1 can give us the given number.
        // the reason for -1 and -2 below is so that we can add 5 and 7 respectivley to check.
        int five = (n/3 - 1)*3;
        int seven = (n/3 - 2)*3;

        if(five + 5 == n){
            cout<<n/3 - 1<<" "<<1<<" "<<0<<endl;
        }else if(seven + 7 == n){
            cout<<n/3 - 2<<" "<<0<<" "<<1<<endl;
        }else{
            //if no number
            cout<<-1<<endl;
        }
        
       
    }
    
    return 0;
}


