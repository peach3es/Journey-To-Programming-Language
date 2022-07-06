/*
 * question2_assignment2.cpp
 *
 *  Created on: Oct 19, 2021
 *      Author: Peter
 */
#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int num){

    if (num==0 || num ==1){
        cout << num << " is not a prime number" << endl;
    }
    else {
        for (int i = 2; i <= num/2; i++){
            if (num%i == 0){
                cout << num << " is not a prime number" << endl;
                break;
            }
            else{
                cout << num << " is a prime number" << endl;
                break;
            }
        }
    }
    return num;
}

int isArmstrong(int num){
    int remainder, result = 0, counter = 0, power, a;

    a = num;
    while(a != 0){
        a /= 10;
        counter++;
    }
    
    a = num;
    while (a != 0){
        remainder = a%10;

        power = pow(remainder, counter);
        result += power;
        a /= 10;   
    }
    if (result == num){
        cout << num << " is an Armstrong number" << endl;
    }
    else
        cout << num << " is not an Armstrong number" << endl;

    return num;
}

int isPerfect(int num){
    int divisors, sum = 0;
    for (int i = 1; i < num; i++){
        divisors = num % i;
        if (divisors == 0){
            sum += i;
        }
    }
    if (sum == num){
        cout << num << " is a perfect number";
    }
    else {
        cout << num << " is not a perfect number";
    }


    return num;
}

int main(){

    int num;
    cout << "Enter a number: ";
        cin >> num;

        isPrime(num);
        isArmstrong(num);
        isPerfect(num);

    return 0;
}