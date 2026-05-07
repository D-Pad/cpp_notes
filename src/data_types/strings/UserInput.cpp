#include <iostream>
#include <limits>
using namespace std;


void InputExample() {
    
    string name;

    // Single input
    cout << "\nEnter your name: " << flush;
    cin >> name;
    cout << "Hello " << name << "!" << endl << endl;

    // Multi variables from single input.
    // Using 'cin' splits tokens by whitespace.
    string first;
    string last;
   
    cout << "~~ Double cin example ~~" << endl;
    cout << "Type 2 strings separated by whitespace:" << endl << ">>> ";
    cin >> first;
    cin >> last;
    cout << "First: " << first << endl << "Last: " << last << endl << endl;

    string userInput;
    cout << "~~ 'getline()' example ~~" << endl;
    cout << "Type whatever you want, with or without whitespace" << endl;
    
    // At this point, there is still a newline character leftover in the input
    // buffer from pressing enter on the last 'cin' statement. Clear the input
    // buffer to prevent unintended behavior.
   
    // Clear error flags
    cin.clear();

    // Clear newline from input buffer
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, userInput);
    cout << "\nYou typed: " << userInput << endl;

}

