/*
 * question2_assignment3.cpp
 *
 *  Created on: Nov 14, 2021
 *      Author: Peter
 */
#include <iostream>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void strcmp_2(string string1, string string2){

    if (string1 == string2) {
        cout << "Strings are Equal";
    }
    else
        cout << "Strings are not Equal";
}

int vowel_check(char ch){
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u')
        return 1;
    else
        return 0;
}

void rmvVowl(string string3) {
    int j = 0;
    char tmp[30];

    char arr3[string3.length() + 1];
    strcpy(arr3, string3.c_str());

    for (int i = 0; arr3[i] != '\0'; i++){
        if(vowel_check(arr3[i]) == 0){
            tmp[j] = arr3[i];
            j++;
        }
        
    }
    tmp[j] = '\0';
    strcpy(arr3, tmp);
    cout << "\nString without vowels is: " << arr3;

}

void rmvChar(string string4) {
    char delete_char;

    cout << "Enter the desired character to be deleted: ";
        cin >> delete_char;
    string4.erase(  remove(string4.begin(), string4.end(), delete_char), string4.end());

    cout << "String without '" << delete_char << "': " << string4;

}

void sortStr(string string5) {

    char arr4[string5.length() + 1], tmp;
    strcpy(arr4, string5.c_str());

    int length;

    length = strlen(arr4);
    for(int i = 0; i < length; i++){
        for (int j = 0; j < (length - 1); j++){
            if (arr4[j] > arr4[j+1]){
                tmp = arr4[j];
                arr4[j] = arr4[j + 1];
                arr4[j + 1] = tmp;

            }

        }
    }

    cout << "\nThe sorted string is: " << arr4;

}

int main (){


    string string1, string2, string3, string4, string5;

    cout << "Enter the First String: ";
        cin >> string1;
    cout << "Enter the Second String: ";
        cin >> string2;

    char arr1[string1.length() + 1]; //converts string to const char
    char arr2[string2.length() + 1];
    strcpy(arr1, string1.c_str());
    strcpy(arr2, string2.c_str());

    cout << "\nUsing strcmp method:" <<  endl;
    int result = strcmp(arr1, arr2);
    if (result == 0)
        cout << "Strings are Equal" << endl;
    else
        cout << "Strings are not Equal"<< endl;
    
    cout << "\nWithout using the strcmp method:" << endl;
    strcmp_2(string1, string2);

    cout << "\n\nEnter a string and remove all of its vowels: ";
        cin >> string3;
    rmvVowl(string3);

    cout << "\n\nEnter a String and remove a desired character from it: ";
        cin >> string4;
    rmvChar(string4);

    cout << "\n\nEnter a String to be sorted: ";
        cin >> string5;
    sortStr(string5);

    return 0;
}