//
//  main.cpp
//  TopTec_3072
//
//  Created by Alejandro Sanchez on 1/30/15.
//  Copyright (c) 2015 Alejandro_Sanchez. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int weight;
    cin >> weight;
    if(weight <= 2){
        cout << "NO" << endl;
    }
    else if(weight%2 == 0){
        cout << "YES" << endl;
    }else{
        cout <<"NO" <<endl;
    }
    
    return 0;
}
