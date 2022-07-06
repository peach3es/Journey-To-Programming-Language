/*
 * question3_assignment2.cpp
 *
 *  Created on: Oct 20, 2021
 *      Author: Peter
 */
#include <iostream>
#include <array>
using namespace std;

int findMax(int A[], int array_size){
    if(array_size == 0)
        return A[0];
    return max(A[array_size-1], findMax(A, array_size-1));
}

int findMin(int A[], int array_size){
    if(array_size == 0)
        return A[0];
    return min(A[array_size-1], findMin(A, array_size-1));
}

void printArray(int A[], int array_size, int i){

    if (i>=array_size)
        return;
    cout << A[i] << "\t";
    printArray(A, array_size, i+1);
}

void reverseArray(int A[], int size){
    for (int i = size-1; i >= 0; i--){
       cout << A[i] << "\t";
    }
}

int main(){

    int array_size;
    int A[array_size];

    do{
        cout << "\nEnter the number of element(10 & lower): ";
            cin >> array_size;
    }
    while (array_size > 10);
    
    
    cout << "Enter " << array_size << " numbers: " << endl;
        
    for (int i = 0; i < array_size; i++){    
        cin >> A[i];
    }
    cout << "\nArray in Reverse: ";
    reverseArray(A, array_size);

    cout << "\nArray element using recursion: ";
    printArray(A, array_size, 0);

    cout << "\nThe maximum number is: " << findMax(A, array_size);

    cout << "\nThe minimum number is: " << findMin(A, array_size);
    return 0;
}