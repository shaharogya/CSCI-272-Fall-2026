
#include <iostream>
//#include <limits>

using namespace std;

// Slide 18
// int main(){
//     //using get() to read individual characters
//     cout << "Enter a character: ";

//     //read a character
//     char ch = cin.get();

//     //clear the newline from the input buffer
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');
//     cout << "You entered: " << ch << endl;

//     //using getline() to read a line of text
//     cout << "Enter your full name: ";
//     string fullName;

//     //read a line of text
//     getline(cin, fullName);
//     cout << "Hello, " << fullName << "!" << endl;

//     return 0;
// }

// Slide 20
// //unformatted i/o using read, gcount and write
// int main(){
//     const int SIZE = 80;
//     char buffer[SIZE];

//     //use function read to the number of characters specified 
//     //input characters into buffer
//     cout << "Enter a sentence: \n";
//     cin.read(buffer, 2); //only reads the first 2 characters entered

//     //use finctions write and gcount to display buffer characters
//     cout << "\nThe sentence entered was: \n";
//     cout.write(buffer, cin.gcount());
//     cout << endl;

//     return 0;
// }

// slide 24
//function to display the state of cin flag
void displayCinFlags(){
    cout << "\n cin.rdstate(): " << cin.rdstate()
    << "\n cin.eof(): " << cin.eof()
    << "\n cin.fail(): " <<cin.fail()
    << "\n cin.bad(): " << cin.bad()
    << "\n cin.good(): " << cin.good(); 
}

//Function to clear cin's error state and display the results
void clearCinError(){
    cin.clear();
    cout << "\n\nAfter cin.clear(): "
    << "\n cin.fail(): " << cin.fail()
    << "\n cin.good(): " << cin.good()
    << endl;
}

//testing error state
int main(){
    int integerValue;
    cout << "Before a bad input operation: ";
    displayCinFlags();

    cout << "\n\nExpects an integer, but enter a character: ";
    cin >> integerValue; //enter a character value

    cout << "\nAfter a bad input operation: ";
    displayCinFlags(); //display flags after bad input

    clearCinError(); //clear the error state and display flags

    return 0;
}


