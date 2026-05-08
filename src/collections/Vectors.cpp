#include <vector>
#include <iostream>
using namespace std;


// If you have studied arrays, then know that a vector was added to C++ as a 
// safer and more powerful form of arrays.
void VectorExample() {

    cout << std::endl << "~~~ Vectors ~~~" << endl;
    
    // Vector declaration syntax
    // vector<dataType> vectorName(numElements);
    vector<int> nums(4);

    // Vector elements are accessed with the .at() method
    nums.at(0) = 29;
    cout << "Vec 0: " << nums.at(0) << endl;
    cout << "Vec size: " << nums.size() << endl;

    // Initialize a vector with all values the same
    std::vector<float> multipliers(3, 0.1);
    for (int i = 0; i < multipliers.size(); ++i) {
        cout << "Multiplier at " << i << ": " << multipliers.at(i) << endl;
    }

    // Unlike arrays, vectors will throw a runtime error if you attempt to 
    // assign a value out of the vectors bounds
    // 
    // multipliers.at(4) = 0.2;  <- this line throws a runtime error

    // Initialize a vector with unique values at each index. Don't use 
    // parenthesis in the variable name
    vector<char> characters = {'d', 'a'};
    cout << "Chars 1: " << characters.at(1) << endl; 

    // Vectors can be declared with initial values using curly braces.
    vector<int> someValues = {1, 2, 3, 4};
    
    // Otherwise you can push values into a declared vector 
    vector<char> chars;
    chars.push_back('a');
    chars.push_back('b');

}

