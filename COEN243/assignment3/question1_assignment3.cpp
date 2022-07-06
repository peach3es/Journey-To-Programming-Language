/*
 * question1_assignment3.cpp
 *
 *  Created on: Nov 9, 2021
 *      Author: Peter
 */
#include <iostream>
#include <algorithm>
using namespace std;

int linearSearch (int A[], int size, int x) {

    for (int i = 0; i < size; i++){
        if (A[i] == x)
        return i;
    }
    return -1;
}
int binarySearch(int B[], int low, int high, int x) {

    while (low <= high){
        int between = low + (high - low)/2;

        if (B[between] == x){
            return between;
        }
        if (B[between] < x) {
            low = between + 1;
        }
        else {
            high = between - 1;
        }
    }
    return -1;
}

int main(){

    int A[10], B[10], x, y, C[20];
    
    cout << "Enter elements of the first array: " << endl; // linear search
        
    for(int i =0; i < 10; i++){
        cin >> A[i];
    }

    cout << "Enter elements of the second array: " << endl; // binary search, need to sort in order first

    for (int i = 0; i < 10; i++) {
        cin >> B[i];
    }

    //LINEAR SEARCH (1ST ARRAY)
    cout << "\n\nEnter element to be searched using Linear Search: ";
        cin >> x;
    int result1 = linearSearch(A, 10, x);
    cout << "\nElement is present at index: " << result1;

    //SORT ELEMENTS OF SECOND ARRAY
    int n = sizeof(B)/sizeof(B[0]);
    sort(B, B + n);
    cout << "\n\nThe sorted element for array 2 are: ";
    for (int const i: B){
        cout << i<< ", ";
    }
    //BINARY SEARCH (2ND ARRAY)
    cout << "\n\nEnter the element to be searched using Binary Search: ";
        cin >> y;
    int result2 = binarySearch(B, 0, n-1, y);
    cout << "\n\nElement is present at index: " << result2;

    //MERGE THE 2 ARRAYS
    int m = sizeof(A)/sizeof(A[0]);

    C[m + n];
    for (int i = 0; i < m + n; i++)
    {
        if (i < m) {
            C[i] = A[i];
        }
        else {
            C[i] = B[i - m];
        }
    }
    cout << "\n\nThe elements of the merged arrays are: ";
    for(int i = 0; i < m + n; i++){
        cout << C[i] << ", ";
    }
    return 0;
}