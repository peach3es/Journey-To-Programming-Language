/*
 * question6_assignment1.cpp
 *
 *  Created on: Sep 27, 2021
 *      Author: Peter
 */
#include <iostream>
using namespace std;

int main(){

	int phys_grade, chem_grade, math_grade, final_grade;

	cout << "Enter your Physics grade: ";
		cin >> phys_grade;

	cout << "Enter your Chemistry grade: ";
		cin >> chem_grade;

	cout << "Enter your Mathematics grade: ";
		cin >> math_grade;

		final_grade = phys_grade+chem_grade+math_grade;

	if (phys_grade>=75 && chem_grade>=65 && math_grade>=70){
		cout << "Congratulations, with a Physics grade of " << phys_grade << ", a Math grade of "
				<< math_grade << ", and a Chemistry grade of " << chem_grade << " you have scored "
				<< final_grade << "/300 and is eligible for admission on our engineering course!" << endl;
	}
	else
		cout << "Sorry, you are not eligible to our course." << endl;

	return 0;
}



