#include <iostream>
#include <string>

using namespace std;

//class starts with class
//class name starts with upper case

class Car{

    //Access type
    //public, private, protected
    public:

    string color; //data-type variable-name
    string brand;
    string model;
    int year;

    //member function
    void startEngine(){
        cout << "Engine started" << endl;
    }
    void stopEngine(){
        cout << "Engine stopped" << endl;
    }

    void showInfo(){
        cout << "Brand: " << brand << endl;
        cout << " Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "Model: " << model << endl;
    }

}; //semicolon after the class cutly bracket

int main(){

    Car  car1;

    car1.brand = "BMW";
    car1.model = "X5";
    car1.color = "Orange";
    car1.year = 2024;

    Car car2;

    car2.brand = "Toyota";
    car2.model = "4Runner";
    car2.color = "Black";
    car2.year = 2026;

    cout << "---Car 1---" << endl;
    car1.startEngine();
    car2.startEngine();

    Car showInfo();
}