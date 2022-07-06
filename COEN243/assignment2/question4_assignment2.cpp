/*
 * question4_assignment2.cpp
 *
 *  Created on: Oct 21, 2021
 *      Author: Peter
 */
#include <iostream>
#include <string>
using namespace std;

void banner(){

    cout << "-----------------------------------------------------------" << endl;
    cout << "\t\tHouse Drawing Program" <<  endl;
    cout << "-----------------------------------------------------------";
}

int main(){

    banner();

    int counter;
    string y_n, name;

    cout << "\n\nWhat is your name? "; //prompt user name
        cin >> name;
    cout << "\nHi " << name << ", welcome to the house drawing program.";

    cout << "\nDo you want me to draw a simple house for you? (yes/no) ";
        cin >> y_n;

    while (y_n == "yes"){ //start building program

        int height, width, tries;

        cout << "\nEnter the height of your house: "; //input height
            cin >> height;

        cout << "Please enter an even number for the width of the house (must be even numbers and bigger than 1): ";
            cin >> width;

        tries = 1;
        while (width % 2 != 0){ // if height is odd

            if (tries < 3) {
                cout << "You entered " << width << " for the width. Not an even number!" << endl;
                cout << "\nPlease enter an even number for the width of the house (must be even numbers and bigger than 1): ";
                    cin >> width;
            }

            else if (tries == 3) {
                cout << "Seems like you are having troubles entering even numbers. Program ends now.";
                exit;
            }
            tries ++;
        }
        tries = 0;
        
        width /= 2;
        for (int i = 1; i <= (width); i++){ // roof
            for (int k = 1; k <= ((width-i) + 1); k++)
                cout << " ";              
            for (int j = 1; j <= (2*i); j++) {
                cout << "*";
            }
            cout << "\n\n";
        }

        for (int i = 1; i <= height; i++){ //walls
            cout << "|";
            for (int k = 0; k < (width*2); k++){
                cout << " ";
            }
            cout << "|" << endl;
        }

        cout << " "; // floor
        for (int j = 1; j <= (width*2); j++){
            cout << "_";
        }

        cout << "\n\nDo you want me to draw a simple house for you? (yes/no) "; // Ask user again
        cin >> y_n;

        counter++;
    }

    while (y_n == "no"){
        cout << "Okay, enjoy your " << counter << " houses!";
        break;
        exit;
    }
    return 0;
}
