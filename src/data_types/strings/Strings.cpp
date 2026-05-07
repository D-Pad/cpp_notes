#include "Strings.h"
#include <iostream>
using namespace std;


// ------------------------------- STRINGS --------------------------------- //
void StringExample() {
    
    string name = "D-Pad";
    cout << name << endl;

    if (name == "D-Pad") {
        cout << "TRUE, BROTHER" << endl;
    }

    if ('A' < 'B') {
        cout << "A < B" << endl;
    }

    char dash = name[1];
    char capP = name.at(2);
    cout << "name[1] = '" << dash << "'" << endl;
    cout << "name.at(2) = '" << capP << "'" << endl;

    name.append(" LLC");  // .append() mutates the calling string
    cout << "My company name is " << name << endl;

    // Common functions
    int firstL = name.find('L');
    cout << "First L in '" << name << "' occurs at index " << firstL << endl;
   
    // The substr function takes 2 arguments. One for the starting index, and 
    // another for the full length of the substring.
    string padText = name.substr(2, 3);
    cout << "'" << name << "' .substr(2, 3) = " << padText << endl;

}


