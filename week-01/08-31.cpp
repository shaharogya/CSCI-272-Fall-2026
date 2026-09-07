#include <iostream>
using namespace std;

// Function
double divide (double a, double b); 
//Can be declared at the top and defined at the bottom

int main(){

    double num1, num2;

    cout << "Enter your 1st number = ";
    cin >> num1;

    cout << "Enter your 2nd number = ";
    cin >> num2;

    if (num2 == 0){
        cout << "Cant be divided by 0" << endl;
        return 0.0;
    }
    
    else {
    /*double num1 = 10;
    double num2 = 5;

    double results = num1 / num2;*/

        cout << "Result1 = " << divide (num1, num2) << endl;
        //cout << "Result2 = " << divide (num1, num2) << endl;
    }
    return 0;
}

double divide (double a = 8, double b = 4){
    /*predefining the parameter 
    for cases when the parameter doesn't pass from the main()*/

    if (b == 0){
        cout << "Cant be 0!" << endl;
        return 0;
    }
    //double result = a / b;
    //return result;
    return a / b;
}
