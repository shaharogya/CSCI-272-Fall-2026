#include <iostream>
#include <string>
using namespace std;

/*
int main(){
    int numbers[] = {10,20,30,40,50};
    cout << numbers[0] << endl; //10
    cout << *numbers << endl; 
    cout << *numbers+1 << endl; //arthematic addition to the first element

    for(int i = 0; i< 5; i++){
        cout << "numbers[" << i << "] = " 
        << numbers[i] << ", address = " << &numbers[i] << endl;
    }

    return 0;
}


int main(){
    int* p = new int; //allocating space for int
    *p = 25;  //contains

    cout << p << endl; //the address

    cout << *p << endl; //calling the pointer to show its content

    delete p; //releasing the pointer

    cout << p << endl;

    p = nullptr; //deletes the content

    cout << p << endl; //
}

int main(){
    int size;
    
    cout << "No. of Nums?" ;
    cin >> size;

    int* nums = new int[size];

    for (int i = 0; i < size; i++){
        nums[i] = (i + 1) * 10;
    }

    for (int i = 0; i < size; i++){
        cout << nums[i] << " ";
    }

    cout << endl;

    delete[] numbers;

    nums = nullptr;

    for( int i = 0; i < size; i++){
        cout << nums[i] << " ";
    }
}

void great(string name = "Student"){
    cout << "Hello, " << name << "!" << endl;
}

int main(){
    great();
    great("Shah");
}

void test (int* p){
    *p = 77;
}

int main{
    int var = 15;
    int *p_to_var = &var; //referencing to the address; replaces the content of the address

    cout << "before: " << var << endl;

    test(p_to_var);
    cout << "after:  " << var << endl;

    return 0;
}

void test (int* p){
    *p = 77;
}
*/ 

int global_var;

void changepointer (int** p){  //for definition int* (*p)
   //(*) represents the original pointer
   //changed so that it points to global_var 
    *p = &global_var = 77;
}

int main{
    int local_var = 15;
    int *p_to_var = &local_var; 

    cout << "before function is called: " << endl;
    cout << "local_var:  " << local_var << endl;
    cout << "p_t0_var:  " << *p_to_var << endl;
    cout << "*p_to_var:  " << p_to_var << endl;

    //pass the address of the pointer
    changePointer(&p_to_var);

     cout << "After function is called: " << endl;
    cout << "local_var:  " << local_var << endl;
    cout << "p_t0_var:  " << *p_to_var << endl;
    cout << "*p_to_var:  " << p_to_var << endl;

    return 0;

}
