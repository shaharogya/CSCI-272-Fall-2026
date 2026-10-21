#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Person {
    public:
        string name;
        int age;
};

int main() {
    string inputString = "Alice 30 10";

    //I String Stream
    istringstream input(inputString);
    
    //create an object
    Person person1;

    if (input >> person1.name >> person1.age){
        cout << "Name: " << person1.name << endl;
        cout << "Age: " << person1.age << endl;
    } else {
        cerr << "Error: Invalid person data.\n";
    }

}