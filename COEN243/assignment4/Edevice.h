/*
 * question3_assignment4.cpp
 *
 *  Created on: Dec 05, 2021
 *      Author: Peter
 */
#define EDEVICE_H
#include <iostream>
#include <string>
// #ifndef EDEVICE_H

using namespace std;

class Edevice{
private:
    int model_num, year_built;
    double price;
    bool status;
    string category, color;
public:
    Edevice();

    int get_model_num();
    int get_year_built();
    double get_price();
    bool get_status();
    string get_category();
    string get_color();

    void set_model_num(int model_num1);
    void set_year_built(int year_built1);
    void set_price(double price1);
    void set_status(bool status1);
    void set_category(string category1);
    void set_color(string color1);

    // void print_info(string category);
};