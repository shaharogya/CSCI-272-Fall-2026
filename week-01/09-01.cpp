#include <iostream>
using namespace std;


//pass by value: cannot change the value of the variable in main 
//void increment(int number){
//    number++;
//} 

//Pass by reference: Can change the value of the variable. *Risky..
/*
void increment(int& number){
    number++;
} 

void swapNumber(int& a, int& b){
    //Swap a and b
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int x = 5;
    cout << "Before: " << x << endl;

    increment(x);

    cout << "After: " << x << endl;

    int p  = 10;
    int q = 20;
    swapNumber(p,q);

    cout << p << " " << q <<endl;
    
    return 0;
}
*/

//-------------------

// Array

/*
void printArray(const int number[], int size){
    for ( int i = 0; i < size; i++){
        cout << "index: " << i << ": " << number[i] << endl;
    }
}

int main(){
    int number[6] = {19,10,8,17,9,15};

    cout << number[1] << endl; //in the bounds
    //cout << number[6] << endl; //out of bound value

    printArray(number, 6);

    return 0;
} 
*/

//---------------

int main(){
    int number = 15;

    int *p = &number;

    cout << "number: " << number << endl;
    cout << "& number: " << &number << endl;

    cout << "p= " << p << endl;
    cout << "*p= " << *p << endl;
    cout << "&p= " << &p << endl;

    return 0;
}
