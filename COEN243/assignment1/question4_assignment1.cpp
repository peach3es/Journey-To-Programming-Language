/*
 * question4_assignment1.cpp
 *
 *  Created on: Sep 27, 2021
 *      Author: Peter
 */
#include <iostream>
using namespace std;

int main(){

	int multiplier, product;

	cout << "Here is the multiplication table from 1 to 10:" << endl;

	for (int  multiplier = 1; multiplier <= 10; multiplier++){
		cout << "Table of " << multiplier << ": ";

		for (int multiplicand = 1; multiplicand <= 10; multiplicand++){
			product = multiplier * multiplicand;
			cout << multiplier << " * " << multiplicand << " = " << product << "   ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}



