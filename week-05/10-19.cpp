//Alias

#include <iostream>
#include <string>

typedef int integer;

using namespace std;
class Card {
    public:
        integer cardNumber; //alias applied
        string cardHolder;
};

//CardPtr is another name for card* (alias)
typedef Card* CardPtr;
typedef ostream outputStream;

int main() {
    outputStream& cprint = cout; //assigning alias of cout from its library
    istream& cinput = cin;

    Card myCard;
    myCard.cardNumber = 123456;
    myCard.cardHolder = "Alice";

    // &myCard gives the object's address, using an alias
    CardPtr ptrToCard = &myCard;

    cprint << "Enter your ID number: ";
    cinput >> myCard.cardNumber;
    cout << myCard.cardHolder << endl;

    cprint << "Using pointers\n";
    cout << ptrToCard->cardNumber << endl;
    cout << ptrToCard->cardHolder << endl;
}