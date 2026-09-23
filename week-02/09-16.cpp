#include <iostream>
#include <vector>
#include <algorithm> // for sort and other functions

using namespace std;
/*
int main(){

    vector<int> numbers = {1,2,3,4,5};

    // Index based loop
    for(size_t i = 0; i < numbers.size(); i++){ 
        //size_t(unasigned) != int(assigned)
        cout << numbers[i] << " ";
    }

    for (int num : numbers){
        cout << num << " ";
    }

    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); i++) {
        cout << *it << " ";
    }

    return 0;
}
    
int main() {
// Declare and initialize a vector with two strings: "Apple" and "Banana".
    std::vector<std::string> fruits = {"Apple", "Banana"};
// Add the string "Orange" to the end of the 'fruits' vector.
    fruits.push_back("Orange");
// Insert the string "Grapes" at the position (index 1)
    fruits.insert(fruits.begin() + 1, "Grapes");
// Construct and add the string "Mango" to the end of the vector directly.
    fruits.emplace_back("Mango");
    return 0;
}

int main(){
    std::vector<int> numbers = {10, 20, 30, 40, 50};
// Modify elements of the vector
    numbers[1] = 35;
    numbers.at(2) = 35;
    numbers.front() = 5;
    numbers.back() = 5;
    // Display values to the user
    std::cout<<"firstElement: "<< numbers.front()<<std::endl; // Outputs 5
    std::cout<<"secondElement: "<< numbers[1]<<std::endl; // Outputs 35
    std::cout<<"secondElement: "<< numbers.at(2)<<std::endl; // Outputs 35
    std::cout<<"lastElement: "<< numbers.back()<<std::endl; // Outputs 5
    return 0;
}

int main() {
    std::vector<int> numbers = {5, 2, 8, 3, 1};
    // Get the total number of elements in the 'numbers' vector.
    int totalElements = numbers.size();
    // Check if the 'numbers' vector is empty or not.
    bool isEmpty = numbers.empty();
    // Remove all elements from the 'numbers' vector.
    numbers.clear();
    // Sort the elements in ascending order using the std::sort algorithm.
    std::sort(numbers.begin(), numbers.end());
    // Reverse the order of elements using the std::reverse algorithm.
    std::reverse(numbers.begin(), numbers.end());
    cout << totalElements << endl;

    return 0;
}

*/

int main() {
    std::vector<int> numbers;
    numbers.reserve(5); //its the allocation of seats
    cout << "size: " << numbers.size() << endl; //its the total number of elements present
    cout << "capacity= " << numbers.capacity() << endl; //its the total number of allocated seats
    
    cout << "After adding: " << endl;

    for (int i = 1; i <= 6; i++){ 
        //"vector automatic capacity growth": if the number of elements extends the allocated block, the vector automatically  allocates the same number of seats again (ie, capacity = 5+5)
        
        numbers.push_back(i * 10);

        cout << "\nAdded: " << i * 10 << endl;
        cout << "Size: " << numbers.size() << endl;
        cout << "Capacity: " << numbers.capacity() << endl;
    }
    numbers.shrink_to_fit();
    cout << "\nCapacity after shirnk: " << numbers.capacity() << endl; 
    
    return 0;
}