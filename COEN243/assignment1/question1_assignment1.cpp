/*
 * question1_assignment1.cpp
 *
 *  Created on: Sep 27, 2021
 *      Author: Peter
 */

#include <iostream>
using namespace std;

int main()
{

	double weight_kg, height_cm, weight_lbs, height_ft;

	cout << "Enter your weight in kg: ";
		cin >> weight_kg;

	cout << "Enter your height in cm: ";
		cin >> height_cm;

		weight_lbs = weight_kg*2.205;
		height_ft = height_cm/30.48;

	cout << "Your weight is " << weight_lbs << "lbs and your height is "
			<< height_ft << "ft." << endl;

	return 0;

}




