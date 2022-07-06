/*
 * question1_assignment4.cpp
 *
 *  Created on: Nov 29, 2021
 *      Author: Peter
 */
#include <iostream>
#include <array>

using namespace std;

void mergeArray(int X[],int M,int Y[],int N,int Z[]);

int main(){

    int M, N;
    int X[M], Y[N], Z[M+N];

    cout << "Enter the number of element for the first array: ";
        cin >> M;

    cout << "\nEnter the number of element for the second array: ";
        cin >> N;
    
    cout << "\nEnter " << M << " numbers for the 1st array in descending order: " << endl;
    for (int i = 0; i < M; i++) {
        cin >> X[i];
    }

    cout << "\nEnter " << N << " numbers for the 2nd array in descending order: " << endl;
    for (int j = 0; j < N; j++) {
        cin >> Y[j];
    }

    mergeArray(X,M,Y,N,Z);
    cout << "The merged array is: ";

    for (int k = 0; k < (M+N); k++){
        cout << Z[k] << " ";
    }

    return 0;
}

void mergeArray(int X[],int M,int Y[],int N,int Z[]) { 
    
    int i = 0, j = 0, k = 0;

    while (i < M && j < N)
    {
        if (X[i] > Y[j])
            Z[k++] = X[i++];
        else
            Z[k++] = Y[j++];
    }
    while (i < M)
        Z[k++] = X[i++];

    while (j < N)
        Z[k++] = Y[j++];
}