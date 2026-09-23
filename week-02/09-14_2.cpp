//vectors
#include <iostream>
#include <vector>

using namespace std;

/*
int main(){
    //regular array
    int oldnum[3] = {10,20,30};

    //vector
    vector<int> num = {10,20,30};

    cout << "Initial vector: " << endl;
    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;

    num.push_back(40);
    num[1] = 25;
    num[6] = 50;

    cout << "New Vector: " << endl;
    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;
    cout << num[3] << endl;
    cout << num[4] << endl;
    cout << num[5] << endl;
    cout << num[6] << endl;

}
*/

void printVector(const vector<int>& values){
    for (int value : values){ //For value in values
        cout << value << " ";
    } 
    cout << endl;
}   

int main(){
//empty vector
    vector<int> emptyVector;

    cout << "emptyVector: ";
    printVector(emptyVector);

    // vector with values
    vector<int> num = {10,20,30,40,50};

    cout << "Num: ";
    printVector(num);

    // 5 elements, default values
    vector<int> zeros(5,0);

    cout << "Zeros: ";
    printVector(zeros);

    // *** copy vectors ***
    vector<int> copyVector(num); //imp for exam

    cout << "copyVector: ";
    printVector(copyVector);

    // *** copy part of another vector ***
    vector<int> firstThree(num.begin(),num.begin() + 3);//begin function
    // starts from the first item and counts the first three items

    cout << "First Three: ";
    printVector(firstThree);


}