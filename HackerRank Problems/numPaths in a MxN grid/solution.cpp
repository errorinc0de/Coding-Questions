//numPaths in a MxN grid
//Author: sharmila

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int pathCalculate(int m, int n){
    if(m == 1 || n == 1){
        return 1;
    }
    return pathCalculate(m-1, n) + pathCalculate(m, n-1);
}

int main() { 
    int m, n;
    cin >> m;
    cin >> n;
    if(m == 0|| n == 0){
        cout<<0<<endl;
    }
    else{
        cout << pathCalculate(m, n) << endl;
    }
    
    return 0;
}