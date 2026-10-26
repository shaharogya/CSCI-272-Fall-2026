#include <iostream>
#include <sstream>
#include <string>
#include <limits>

using namespace std;

// class Person {
//     public:
//         string name;
//         int age;
// };

// int main() {
//     string inputString = "Alice 30 10";

//     //I String Stream
//     istringstream input(inputString);
    
//     //create an object
//     Person person1;

//     if (input >> person1.name >> person1.age){
//         cout << "Name: " << person1.name << endl;
//         cout << "Age: " << person1.age << endl;
//     } else {
//         cerr << "Error: Invalid person data.\n";
//     }

// }

// int main(){
//     //reading one char
//     char ch;
//     cout << "Enter a character: ";

//     //cin 
//     // get() - to read the next character
//     if (!cin.get(ch)){
//         cerr << "Error: Unable to read a character. \n";
//         return 1;
//     }

//     cout << "You entered: [" << ch << "]" << endl;

//     //prove the leftover input remains in the buffer
//     string test1;
//     cout << "This is a test before cin.ignore() " << endl;
//     cin >> test1;
//     cout << "Test output: " << test1 << endl;

//     //clearing the leftover input
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     // string test2;
//     // cout << "This is a test after cin.ignore() " << endl;
//     // cin >> test2;
//     // cout << "Test output: " << test2 << endl;

//     // cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     //full line
//     string fullname;
//     cout << "Enter your full name: ";
//     getline(cin, fullname);

//     cout << "Hello, " << fullname << "!\n";
// }


//read(), write(), gcount()
//EOL = End Of Line
// int main(){
//     //write("...", n) n=number of characters
//     cout << "First 10 letters: ";
//     cout.write("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 10);   
//     cout << endl;

//     //read()
//     const int SIZE = 80;
//     //char array holds the extracted bytes
//     char buffer[SIZE];

//     //data is variable name
//     istringstream data("ABCDEFGHIJKLMNOPQRSTUVWXYZ"); 
    
//     //we want to read the next 20 chars
//     data.read(buffer, 20);

//     //how many chars were extracted
//     streamsize count = data.gcount();

//     cout << "\nFirst read: \n";

//     //output only the characters read
//     cout.write(buffer, count);
//     cout << "\nCharacters read: " << count << endl;

//     // reading past available data
//     data.read(buffer, 20);
//     count = data.gcount();
//     cout << "\nSecond read: \n";

//     cout.write(buffer,count);
//     cout << "\nCharacters read: " << count;
//     cout << endl;

//     //we requested 20 bytes, but 20 bytes were not all available.
//     //so, the read fail
//     cout << boolalpha; //returns true/false instead of 1/0.
//     cout << "End of file? " << data.eof() << endl;
//     cout << "Read failed? " << data.fail() << endl;

// }

void displayCinFlags(){
    cout << boolalpha;

    cout << "\n==Stream State==\n";
    //rdstate() returns the state-bit value
    cout << "cin.rdstate(): " << cin.state() << endl; 

    //true if end-of-file reached
    cout << "cin.eof(): " < cin.eof() << endl;
    
    //true if faliure occured
    cout << "cin.fail(): " < cin.fail() << endl;

    //if any serious I/O error
    cout << "cin.bad(): " < cin.bad() << endl;
}

void recoverFromInvalidInput(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
int main() {
    int age = 0;

    cout << "before Input: " << endl;
    displayCinFlags();

    while(true){
        cout << "Enter your age: ";
        if (cin >> age) {
            cout << "\n Invalid int received." << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            break;
        }

        cerr << "\nError: Expected an int." << endl;

        cout << "\n After failed inputs: " << endl;
        displayCinFlags();

        if(cin.eof()){
            cerr << "No more Inputs";
            return 1;
        }

        cout << "Recovering ";
    }



}