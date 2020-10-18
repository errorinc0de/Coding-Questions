#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;             //Declaration integer vector

    int size=v.size();         //initializes the size of vector
    int x,i,n;

    cin>>n;                    //input the number of integers

    for(i=0; i<n;i++){
        cin>>x;
        v.push_back(x);        //input the integers in vector
        size++;
    }

    sort(v.begin(),v.end());  //sort the vector

    for(i=0;i<n;i++){
        cout<<v[i]<<" ";      //To print the vector
    }
    return 0;
}
