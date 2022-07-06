/*
 * question2_assignment3.cpp
 *
 *  Created on: Nov 15, 2021
 *      Author: Peter
 */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class House{

    int age, rooms;
    double cost;
    string type;
public:

    int get_age() {return age;}
    int get_rooms() {return rooms;}
    double get_cost() {return cost;}
    string get_type() {return type;}

    void set_age (int a) {age = a;}
    void set_rooms (int r) {rooms = r;}
    void set_cost (double c) {cost = c;}
    void set_type (string str_t) {type = str_t;}

    double estimatePrice(int yr) {

        double rate1, rate2;

        if (type == "attached"){
            cost = 100000;
            rate1 = 1.01;
            rate2 = 1.02;
        }

        else if (type == "semi-detached"){
            cost = 150000;
            rate1 = 1.02;
            rate2 = 1.03;     
        }

        else if (type == "detached"){
            cost = 200000;
            rate1 = 1.02;
            rate2 = 1.02;
        }
        
        if (yr <= 5){
            cost = cost * pow(rate1, yr);
        }
        else {
            cost = cost * pow(rate2, yr);
        }
        

        return (double) cost;
    }

    ~House () {;}
};

int main(){

    int d;
    string b;

    House house_1;
    House house_2;

    cout << "Enter the type of your first House(detached, semi-detached, attached): ";
        cin >> b;
    
    house_1.set_type(b);
    cout << "\nEnter the age of your first House: ";
        cin >> d;
    house_1.set_age(d);

    cout << "\nEnter the years from " << d << ": ";
        cin >> d;

    cout << "Your estimated price is: " << house_1.estimatePrice(d) << "$" << endl;

    cout << "Enter the type of your second House(detached, semi-detached, attached): ";
        cin >> b;
    
    house_2.set_type(b);
    cout << "\nEnter the age of your second House: ";
        cin >> d;
    house_2.set_age(d);

    cout << "\nEnter the years from " << d << ": ";
        cin >> d;

    cout << "Your estimated price is: " << house_2.estimatePrice(d) << "$" << endl;

    return 0;
}