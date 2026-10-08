//execution file

#include <iostream>
#include <string>
#include "car.h"

using namespace std;

// class Car {

//     private:
// //variables
//     string brand;
//     string model;
//     int year;

//     public:
// //function which can access the private data
// //function needs to 
//     void setInfo(string b, string m, int y){
//         brand = b;
//         model = m;
//         year = y;
//     }

//     void showInfo(){
//         cout << "Brand: " << brand << endl;
//         cout << "Model: " << model << endl;
//         cout << "Year: " << year << endl;
//     }

//     void startEngine(){
//         // the variable needs be from the class variable and not the funtion parameter
//         cout << brand << "'s Engine started." << endl;
//     }
// };

int main(){
    //create an object
    Car car1;

    cout << "After creating Car 1.\n";
    car1.showInfo();

    Car car2("BMW", "M3", 1991);
    car2.showInfo();

    Car car3(car2);
//call a member function
    car3.showInfo();

    return 0;
}