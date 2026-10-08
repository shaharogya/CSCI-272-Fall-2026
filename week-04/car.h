//declaration file

#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car{
    private:
        string brand;
        string model;
        int year;
    
    public:
    //default constructors
        Car();

    //parameterized constructor
        Car(string b, string m, int y);

        Car(const Car& other);

    //member function
        void showInfo();

    };

#endif