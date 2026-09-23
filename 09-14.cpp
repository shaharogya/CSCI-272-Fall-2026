//Template
#include <iostream>
using namespace std;

//Template can work all types of data type without the need for overloading the function
template <typename T> //template doent need data type specified
T largerof(T first, T second){ //T in place of data type
    return (first > second) ? first : second;
}

int main(){
    //T becomes int
    int a = 10;
    int b = 20;

    cout << "Larger interger is: " << largerof(a,b) << endl;

    //T becomes double
    double p = 10.2;
    double q = 10.9;

    cout << "Larger double is: " << largerof(p,q) << endl;

    //T becomes string
    string x = "apple";
    string y = "Apple"; //if the characters are greater eg. banana then banana is greater; else which ever ASCII is greater.

    cout << "Larger interger is: " << largerof(x,y) << endl;
}