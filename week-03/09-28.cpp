#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

// int main(){
//     string email;

//     cout << "Enter your email address: ";
//     getline(cin, email);

//     //search for the @
//     size_t atPosition = email.find('@');

//     // find() returns the string::npos (No Position)
//     //if the text was not found
//     if (atPosition != string::npos){
//         //extract before @
//         string username = email.substr(0,atPosition);

//         //everthing after @
//         string domain = email.substr(atPosition + 1);

//         cout << " \n  --- Email analysis --- " << endl;
//         cout << "Email: " << email << endl;
//         cout << "username: " << username << endl;
//         cout << "Domain: " << domain << endl;

//         cout << "@ found at index: " << atPosition << endl;
//     } else {
//         cout << "Invalid email: @ was not found." << endl;
//     }

//     return 0;
// }

// Example 2
// constant --avoid unessessary copies
// functions should not modify the original strings

// bool equalsIgnoreCase(const string& first, const string& second){
//     if(first.length() != second.length()){
//         return false;
//     }

//     // compare each character
//     for (size_t i = 0; i < first.length(); i++){
//         char firstchar = tolower(first[i]);
//         char secondchar = tolower(second[i]);

//         if(firstchar != secondchar);
//             return false;
//     }

//     return true;
// }

// int main(){
//     string password1 = "Hello";
//     string password2 = "HELLO";

//     cout << "Normal comparision: " << endl;

//     if(password1 == password2){
//         cout << "Same" << endl;
//     } else {
//         cout << "Different" << endl;
//     }

//     cout << "\nCase-Insensitive comparision: " << endl;

//     if(equalsIgnoreCase(password1, password2)){
//         cout << "Same" << endl;

//     } else { 
//         cout << "Different" << endl;
//     }
// }

// Example 3

// int main(){
//     string message = "Hello, World!";

//     cout << "Original: " << message << endl;

//     //change characters
//     for (char& c : message){ //range based loop; all characters in message
//         c = toupper(c);
//     }

//     cout << "Uppercase: " << message << endl;

//     // World starts at index 7, 5 chars
//     message.replace(7, 5, "C++");

//     cout << "After replace: " << message << endl;

//     //insert text

//     message.insert(7, "AWESOME ");

//     cout << "After insert: " << message << endl;
// }

// Example 4

// int main(){
//     string ageText = "25";
//     string gpaText = "3.75";

//     //convert string to int
//     int age = stoi(ageText);

//     //convert string to double
//     double gpa = stod(gpaText);

//     cout << "Age: " << age << endl;
//     cout << "GPA: " << gpa << endl;

//     cout << "Age next year: " << age + 1 << endl;
//     cout << "GPA + .25: " << gpa + 0.25 << endl;

//     cout << "Trial: "  << stod(ageText) + 1 << endl;
// }

// Example 5

// int main(){
//      string sentence = "The quick brown fox jumps over the lazy dog.";

//      string vowels = "aeiou";

//      size_t foundFirst = sentence.find_first_of(vowels); //returns the index of the element

//      if(foundFirst != string::npos) {
//         cout << foundFirst <<endl;
//      }

//      size_t foundLast = sentence.find_last_of(vowels);

//      if(foundLast != string::npos){
//         cout << foundLast << endl;
//      } else {
//         cout << "No vowels found in the sentence." << endl;
//      }

//      cout << sentence.length() << endl;
// }

// Example 6

