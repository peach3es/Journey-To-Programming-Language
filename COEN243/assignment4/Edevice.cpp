/*
 * question3_assignment4.cpp
 *
 *  Created on: Dec 05, 2021
 *      Author: Peter
 */

#include <iostream>
#include <string>
#include "Edevice.h"

Edevice::Edevice(){

    model_num = 0;
    year_built = 0;
    price = 0.0;
    status = false;
    category = " ";
    color = " ";
}

int Edevice::get_model_num(){
    return model_num;
}
int Edevice::get_year_built(){
    return year_built;
}
double Edevice::get_price(){
    return price;
}
bool Edevice::get_status(){
    return status;
}
string Edevice::get_category(){
    return category;
}
string Edevice::get_color(){
    return color;
}

void Edevice::set_model_num(int model_num1){
    model_num = model_num1;
}
void Edevice::set_year_built(int year_built1){
    year_built = year_built1;
}
void Edevice::set_price(double price1){
    price = price1;
}
void Edevice::set_status(bool status1){
    status = status1;
}
void Edevice::set_category(string category1){
    category = category1;
}
void Edevice::set_color(string color1){
    color = color1;
}

// void Edevice::print_info(string category1){

//     cout << category << " device is " << color << " with " << price << " value is a " 
//         << status << " with the model number of " << model_num << " built in " << year_built << endl;
// }