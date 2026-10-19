#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
//error message handling

int main(){
    int age{0}; //bound checking

    //cout send formatted output to the screen
    cout << "Enter your age: ";

    // cin
    // >>
    if (!(cin >> age)){
    //cerr is used for error message/ handles input or logic errors not compile error
        cerr << "Error: Please enter a number. \n";
        return 1;
    }

    if (age < 0 || age > 125){
        cerr << "Error: You do not exist!\n";
        return 1;
    }

    cout << "Your age is: " << age << endl;

    //clog - intended for diagnostics/log messages
    //cerr and clog - both are normally use standard Error
    clog << "[LOG] Age processed successfully. \n";
}
*/

//text manipulation

int main(){

    string name = "Alice Johnson";
    int age = 25;
    double GPA = 3.8755643421;
    double pi = 3.14159265359;

    // ================================
    // Part 1: Floating point precision
    // ================================

    cout << "=== Precision Example === \n";

    //without fixed, precision means approx. 2 significant digits
    cout << "Pi (precision 2): " << setprecision(2) << pi << endl; //=3.1

    //fixed makes percision represent the number of decimal points
    cout << "Pi (fixed, 2 decimals): " << fixed << setprecision(2) << pi << endl; // = 3.14

    //restore general floating points format
    cout << defaultfloat << setprecision(6);

    // === Part 2: Column width and alignment ===
    cout << "\n=== STUDENT RECORD === \n";

    //setfill('-') use dashes for padding
    //setw(35) reserves space for 35 characters

    cout << setfill('-') << setw(35) << "" << endl;

    //restore normal spacing
    cout << setfill(' ');

    //print table column heading
    cout << left << setw(17) << "Name"
        << right << setw(6) << "Age"
        << setw(12) << "GPA"
        << endl;
    //17+6+12 = 35; 35 dashed on the line above
    
    cout << left << setfill('-') << setw(17) << name
        << right << setfill('-') << setw(6) << age
        << fixed << setfill('-') << setprecision(2) 
        << setw(12) << GPA
        << endl;

    int number = 255;
    cout << setfill(' ');

    //dec:
    cout << dec << "\nDecimal: " << number << endl;

    //Hex:
    cout << hex << "Hexadecimal: " << number << endl;

    //Oct:
    cout << oct << "Octal: " << number << endl;
}
    // //==================================
    // //Project development

    // string studentname = "Captain X";
    // string c = "ENG 101";
    // int r = 3;
    // double gp = 4.0;
    // double tp = gp * r;

    // cout << "\n================= Student Grade Report =================" << endl;
    // cout << "Student:  " << studentname << "\n";
    // cout << "\n";

    // cout << setw(26) << left << "Course"
    //      << setw(10) << right << "Credits"
    //      << setw(10) << right << "GradePts"
    //      << setw(10) << right << "TotalPts\n";
    
         
    // cout << setfill(' ');
    
    // cout << setw(26) << left << c
    //      << setw(10) << right << r
    //      << setw(10) << right << gp
    //      << setw(10) << right << tp;
    // cout << setfill(' ');

    // cout << setfill('-') << setw(56) << "" << endl;
    // cout << setw(26) << left << "Total Credits: ";


 