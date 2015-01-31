//
//  main.cpp
//  TopTec_3073
//
//  Created by Alejandro Sanchez on 1/30/15.
//  Copyright (c) 2015 Alejandro_Sanchez. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int lines;
    cin >> lines;
    for(int i=0;i<lines;i++){
        string word;
        cin >> word;
        if(word.length()>10){
            cout << word[0] << word.length()-2 << word[word.length()-1]<< endl;
        }else{
            cout <<word << endl;
        }
    }
    return 0;
}
