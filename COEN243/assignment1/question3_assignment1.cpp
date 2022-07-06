/*
 * question3_assignment1.cpp
 *
 *  Created on: Sep 27, 2021
 *      Author: Peter
 */
#include <iostream>
using namespace std;

int main() {

	int m, sum;
	sum = 0;

	cout << "Enter a positive integer: ";
		cin >> m;

	for (int starting_number = 1; starting_number <= m; starting_number++){
		if (starting_number%8 == 0){
			sum+=starting_number;
		}
	}

	cout << "Result is: " << sum << endl;

	return 0;
}



