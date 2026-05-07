#include <iostream>
using namespace std;


void Overloaded() {
    cout << "No arguments required" << endl;
}

void Overloaded(int num) {
    cout << "One integer required: " << num << endl;
}


void Overloaded(int numA, int numB) {
    cout << "Two integers required: " << numA << " & " << numB << endl;
}

void Overloaded(int num, char c) {
    cout << "Integer and character required: " << num << c << endl;
}

void OverloadingExample() {

    Overloaded();
    Overloaded(29);
    Overloaded(10, 20);
    Overloaded(4, 'C');

};

