//
//  1023.cpp
//  
//
//  Created by Alejandro Sanchez on 8/28/14.
//
//

#include <iostream>

using namespace std;

int main(){
    double total;
    for(int i; i<12;i++){
        double n;
        cin >> n;
        total += n;
    }
    cout << "$" << total/12;
    cout <<endl;
}
