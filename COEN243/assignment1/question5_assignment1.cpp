/*
 * question5_assignment1.cpp
 *
 *  Created on: Sep 27, 2021
 *      Author: Peter
 */
#include <iostream>
using namespace std;

int main(){

	char input;

	cout << "Enter a character: ";
		cin >> input;

	if(isalpha(input)){
		cout << "You have entered an alphabet letter." << endl;
	}
	else if(isdigit(input)){
		cout << "You have entered a number." << endl;
	}
	else {
		cout << "You have entered a special character." << endl;
	}
	return 0;
}



