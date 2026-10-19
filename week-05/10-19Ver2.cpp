#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    double pi = 3.141593265359;
    char ch = 'X';
    int a = 10;

    //by default for double cout only prints 5 floating points (numbers after decimal)
    cout << "Formatted double: " << pi << endl; 

     //by default for string cout only prints 6 floating points (numbers after decimal)
    string strValue = to_string(pi);
    cout << "Converted string: " << strValue << endl;
    
    //c_str() returns a pointer to the character data
    const char* charPtr = strValue.c_str();

    cout << "First 10 characters: ";
    cout.write(charPtr, 10); //prints first 10 digits, if not available it ends in 'e'
    cout << endl;

    //only prints a single character
    cout.put(ch);
    cout.put('!').put('\n');

    cout << scientific << setprecision(4); //prints 3.1416e+00 scientific notation and rounds up
    //scientific notation
    cout << "scientific pi: " << pi << endl;

    cout << fixed << setprecision(4); //rounds up and displays only the specified number of floating points
    cout << "Fixed pi: " << pi << endl;

    //
}