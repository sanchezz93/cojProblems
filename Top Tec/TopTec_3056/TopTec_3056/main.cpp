//
//  main.cpp
//  TopTec_3056
//
//  Created by Alejandro Sanchez on 1/30/15.
//  Copyright (c) 2015 Alejandro_Sanchez. All rights reserved.
//

#include <iostream>

using namespace std;

bool Validate(int c1[],int c2[]){
    
    for(int i=0;i<5;i++){
        if(c1[i] == c2[i]){
            //cout << c1[i] << c2[i] << endl;
            return false;
        }
    }
    return true;
}


int main() {
    
    //0 outlet/ 1 plug
    int conect1[5], conect2[5];
    for(int i = 0; i<5; i++){
        cin>> conect1[i];
    }
    for(int j = 0; j<5; j++){
        cin>> conect2[j];
    }
    
    bool check;
    check = Validate(conect1, conect2);
    
    if(check){
        cout << "Y"<<endl;
    }else{
        cout <<"N"<<endl;
    }
    
    
    return 0;
}
