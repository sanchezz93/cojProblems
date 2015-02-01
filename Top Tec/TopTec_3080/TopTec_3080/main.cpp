//
//  main.cpp
//  TopTec_3080
//
//  Created by Alejandro Sanchez on 1/31/15.
//  Copyright (c) 2015 Alejandro_Sanchez. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int cases;
    cin>>cases;
    for(int i=0;i <cases;i++){
        double term1=0,term2=0,finalterm, total = 0;
        string operate, equal;
        cin >> term1;
        cin >> operate;
        cin >> term2;
        if(operate == "+"){
            total =term1 + term2;
        }else if(operate =="-"){
            total =term1 - term2;
        }else if(operate == "/"){
            total =term1 / term2;
        }else if(operate == "*"){
            total =term1 * term2;
        }
        cin >> equal;
        cin >> finalterm;
        if(total ==finalterm){
            cout << "Yes" << endl;
        }else{
            cout <<"No" <<endl;
        }
    }
    return 0;
}
