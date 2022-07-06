/*
 * question3_assignment4.cpp
 *
 *  Created on: Dec 05, 2021
 *      Author: Peter
 */

#include <iostream>
#include <string>
#include "Edevice.h"

using namespace std;

int main(){

    Edevice device1;
    Edevice device2;

    int model_num1, year_built1;
    double price1;
    bool status1;
    string category1, color1, status01;

    cout << "What kind of E-device do you have for device 1: ";
        cin >> category1;
    device1.set_category(category1);

    cout << "\nWhat year was it built: ";
        cin >> year_built1;
    device1.set_year_built(year_built1);

    cout << "\nWhat is the model number: ";
        cin >> model_num1;
    device1.set_model_num(model_num1);

    cout << "\nWhat is the status of the device? (Enter true for new and false for used): ";
        cin >> status1;
    device1.set_status(status1);
    if (status1 == false)
        status01 = "used";
    else 
        status01 = "new";

    cout << "\nWhat is the price: ";
        cin >> price1;
    device1.set_price(price1);

    cout << "\nWhat is the color of your device: ";
        cin >> color1;
    device1.set_color(color1);

    cout << category1 << " device is " << color1 << " with " << price1 << " value is a " 
        << status01 << " with the model number of " << model_num1 << " built in " << year_built1 << endl;

    cout << "What kind of E-device do you have for device 2: ";
        cin >> category1;
    device2.set_category(category1);

    cout << "\nWhat year was it built: ";
        cin >> year_built1;
    device2.set_year_built(year_built1);

    cout << "\nWhat is the model number: ";
        cin >> model_num1;
    device2.set_model_num(model_num1);

    cout << "\nWhat is the status of the device? (Enter true for new and false for used): ";
        cin >> status1;
    device2.set_status(status1);
    if (status1 == false)
        status01 = "used";
    else 
        status01 = "new";

    cout << "\nWhat is the price: ";
        cin >> price1;
    device2.set_price(price1);

    cout << "\nWhat is the color of your device: ";
        cin >> color1;
    device2.set_color(color1);

    cout << category1 << " device is " << color1 << " with " << price1 << " value is a " 
        << status01 << " with the model number of " << model_num1 << " built in " << year_built1 << endl;

    
    return 0;
}