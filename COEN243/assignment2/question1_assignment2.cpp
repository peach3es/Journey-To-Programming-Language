/*
 * question1_assignment2.cpp
 *
 *  Created on: Oct 18, 2021
 *      Author: Peter
 */
#include <iostream>
using namespace std;

int main(){

    int n, i;

    cout << "Enter a number of row: ";
        cin >> n;

    for (int i = n; i >= 1; i--){
        for (int j = i; j > 0; j--){
            cout << "*";
        }
        for (int k = n - i; k > 0; k--){
            cout << "  ";
        }
        for (int j = i; j > 0; j--){
            cout << "*";
        }
        cout << "\n"; 
    }

     for (int i = 1; i <= n; i++){
        for (int j = 1; j<= i ;  j++){
            cout << "*";
        }
        for(int k = n - i; k > 0; k--){
            cout << "  ";
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}