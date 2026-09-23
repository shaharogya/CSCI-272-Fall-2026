#include <iostream>
#include <string>
using namespace std;

int main(){

    string firstName;
    string lastName;
    string quote;
    string word = "apple";

    cout << "Enter a quote : ";
    //getline (cin,quote);
    getline (cin >> ws,quote); // >> ws clears leading whitespaces to avoid errors
    //cin >> quote;

    cout << "Enter your First Name: ";
    cin >> firstName;
    cout << "Enter your Last Name: ";
    cin >> lastName;

    string fullName = firstName + " " + lastName;
    fullName += " The Great"; //appends the string with a string

    cout << "First Name: " << firstName << endl; 
    cout << "Last Name: " << lastName << endl; 
    cout << "Full Name: " << fullName << endl; 
    
    cout << "Hi, " + fullName + ", " + quote << endl;
    //length and size are the number of characters within the " " including whitespaces
    cout << "Length of Quote: " << quote.length()<< endl;
    cout << "Size of Quote: " << quote.size() << endl;

    //cout << lastName[0] << endl; //to only select the second letter
    //lastName[0] = 'Z'; //to replace the letter

    return 0;
}