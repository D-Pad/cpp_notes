#include <iostream>
using namespace std;


void ArrayExample() {

    cout << std::endl << "~~~ Arrays ~~~" << std::endl;
    
    // Initialize array without initial values
    int nums[5];

    // Initialize array with initial values, while inferring the size
    int scores[] = {100, 200, 300};

    // Initialize an array with size and initial values
    int grades[4] = {85, 92, 101, 98};

    // The line below this comment will not create a compiler or run time error.
    // instead, it will write the value to another values memory address, which
    // could cause other problems later on. Like data corruption
    grades[5] = 102; // <- 4 is not a valid index of an array of size 4.

    // Two dimensional arrays
    char matrix[2][3] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'}
    };

    // Display values
    cout 
        << "Grades: [" 
        << grades[0] 
        << ", " 
        << grades[1]
        << ", "
        << grades[2]
        << ","
        << grades[3]
        << "]" 
        << endl
        << "Scores: ["
        << scores[0]
        << ", "
        << scores[1]
        << ", "
        << scores[2]
        << "]"
        << endl 
        << "Nums: ["
        << nums[0]
        << ", "
        << nums[1]
        << ", "
        << nums[2]
        << ", "
        << nums[3]
        << ", "
        << nums[4]
        << "]"
        << endl
        << "2x3 Character Matrix: "
        << endl
        << " at [0][0]: " 
        << matrix[0][0]
        << endl 
        << " at [1][2]: " 
        << matrix[1][2]
        << endl;
}

