/*
 * question5_assignment2.cpp
 *
 *  Created on: Oct 22, 2021
 *      Author: Peter
 */
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int function1 (int lower, int upper){

    int i = lower;
    cout << "List of numbers in this interval which are multiple of both 2 and 7: ";
    while ( i <= upper) {
        if(i % 2 == 0 && i % 7 ==0){
            cout << i << " ";
        }
        i++;
    }
    return lower, upper;
}
void function2 (int lower, int upper){

    int result;
    result = upper - lower;
    cout << result;
}
double function3 (int lower, int upper){

    double sum;
    for (int i = lower; i <= upper; i++){
        sum += (1/ (double (i)));
    }
    cout << setprecision(3) << sum; //sets the decimal point to 3
    return sum;
}

int main () {

    int upper, lower;
    string character;

    cout << "Please enter two positive integer numbers: (Lower bound/ Upper bound): ";
        cin >> lower >> upper;

    if (lower > upper){
        int tmp;

        tmp = lower;
        lower = upper;
        upper = tmp;
    } 
    cout << "Please enter a character (a, b or c): ";
        cin >> character;

    if (character == "a"){
        function1(lower, upper);

    }
    else if (character == "b"){
        function2(lower, upper);

    }
    else if (character == "c"){
        function3(lower, upper);

    }
    else
        cout << "Invalid input";

    return 0;
}