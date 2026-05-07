#include <iostream>
using namespace std;


// ------------------------------- BOOLEANS -------------------------------- //
void BooleanExample(float test_score) {

    bool passesTest = true;
    char grade = 'A';

    if (test_score < 60.0) {
        passesTest = false;
        grade = 'F'; 
    }
    else if (test_score < 70) {
        grade = 'D';
    }
    else if (test_score < 80.0) {
        grade = 'C';
    }
    else if (test_score < 90.0) {
        grade = 'B';
    }

    cout << endl << "Grade: " << grade << " / " << test_score << endl;

    if (passesTest) {
        cout << "Passed!" << endl; 
    }
    else {
        cout << "Failed" << endl;
    }

}



