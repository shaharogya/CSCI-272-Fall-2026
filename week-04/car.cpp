//implementation file

#include <iostream>
#include <string>
#include "car.h"

using namespace std;

//default construcators
//First car = class name
//Second car = constructor name


Car::Car(){
    cout << "Default Constructor called\n";
    brand = "Unknown";
    model = "Unknown";
    year = 0;
}

Car::Car(string b, string m, int y){
    cout << "\nParameterized constructor called." << endl;

    brand = b;
    model = m;
    year = y;
}

//copy constructor
Car::Car(const Car& other){
    cout << "\nCopy constructor called" << endl;
    brand = other.brand;
    model = other.model;
    year = other.year;
}


void Car::showInfo(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
}
