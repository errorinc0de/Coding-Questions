#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;            //Declaration of integet vector

    int size=v.size();        //initialise the vector size
    int x,i,n,p,a,b;

    cin>>n;                  //input the number of integers

    for(i=0; i<n;i++){
        cin>>p;
        v.push_back(p);      //input the element to vector
        size++;
    }

    cin>>x;                     //input the position
    v.erase(v.begin()+(x-1));   //to erase the element from that position

    n=n-1;                      //decreament the size


    cin>>a;                     // enter range of position a and b
    cin>>b;

    v.erase(v.begin()+(a-1),v.begin()+(b-1));   //to erase element from position a to b-1
    n=n-(b-a);                  // decreament the size
    cout<<n<<endl;

    for(i=0;i<n;i++){
        cout<<v[i]<<" ";        //To print the output
    }

}
