/*
 * question2_assignment4.cpp
 *
 *  Created on: Dec 01, 2021
 *      Author: Peter
 */
#include <iostream>
#include <array>

using namespace std;

void accept_element(int A[], int array_size){

    for (int i = 0; i < array_size; i++) {
        cout << "Enter the element " << i+1 << ": ";
        cin >> A[i];
    }

}
void display_element(int A[], int array_size){

    cout << "Currently, your array is: ";
    for (int i = 0; i < array_size; i++){

        cout << A[i] << " ";
    }
    cout << endl;
}
void insertion_method(int A[], int array_size){

    for (int i = 1; i < array_size; i++) {
        int key = A[i];
        int j = i - 1;

        while (key < A[j] && j >= 0) {
            A[j + 1] = A[j];
            --j;
        }
        A[j + 1] = key;
    }

    for (int k = 0; k < array_size; k++) {
        cout << A[k] << " ";
    }
    cout << endl;
}
void selection_method(int A[], int array_size){

    for (int i = 0; i < array_size - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < array_size; j++) {
            if (A[j] > A[min_idx])
            min_idx = j;
    }

        int tmp = A[min_idx];
        A[min_idx] = A[i];
        A[i] = tmp;
    }
    for (int k = 0; k < array_size; k++) {
        cout << A[k] << " ";
    }
    cout << endl;
}
void bubble_method(int A[], int array_size){

    for (int i = 0; i < (array_size-1); i++) {
        
        for (int j = 0; j < array_size - (i-1); j++) {
            if (A[j] > A[j + 1]) {
                int tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }
    for (int k = 0; k < array_size; k++) {
        cout << A[k] << " ";
    }
    cout << endl;
}

int main(){

    int case_num = 1, array_size, A[array_size];

    cout << "Enter the size of the array: ";
        cin >> array_size;

    cout << "MENU" << endl;
    cout << "1. Accept elements of array" << endl;
    cout << "2. Display elements of array" << endl;
    cout << "3. Sort array using insertion method" << endl;
    cout << "4. Sort array using selection method" << endl;
    cout << "5. Sort the array using bubble sort method" << endl;
    cout << "6. Exit" << endl;
    
    while (case_num > 0) {

        cout << "Enter your choice 1-6: ";
        cin >> case_num;

        switch (case_num) {
            case 1:
                accept_element(A, array_size);
                break;
            case 2:
                display_element(A, array_size);
                break;
            case 3:
                insertion_method(A, array_size);
                break;
            case 4:
                selection_method(A, array_size);
                break;
            case 5:
                bubble_method(A,array_size);
                break;
            case 6:
                return 0;
        }
    }
    return 0;
}