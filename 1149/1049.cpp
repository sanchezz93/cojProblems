//
//  1049.cpp
//  
//
//  Created by Alejandro Sanchez on 8/28/14.
//
//
#include <cmath>
#include <iostream>


using namespace std;

int main(){
    int n;
    cin >> n;
    if(n>=0)
        cout << (n*(n+1))/2;
    else
        cout << (((n*-1)*((n*-1)+1)/2)*-1)+1;
    cout << endl;
    return 0;
}