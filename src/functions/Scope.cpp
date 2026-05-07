#include <iostream>
using namespace std;


// Function definitions in C/C++ must be declared in order. Unlike Python where
// func_b can call func_a even when func_b is defined before func_a. It's 
// common for programmers to write the main() function at the top of a file
// so that other readers see it first. Since the order that functions are 
// declared matters, it's common to use a method called 'function prototyping'.
// The purpose of a function prototype is to let the compiler know just enough
// about a function definition to allow calling it from other places.

void ScopeHelperA(int& num);  // <- prototype function A

void ScopeHelperB(int& num);  // <- prototype function B


// Pretend this is "int main()"
int ScopeMain() {

    cout << "~~~~~~ Scope Example ~~~~~~" << endl;

    int numA = 5;
    int numB = 2;

    ScopeHelperA(numA);
    ScopeHelperB(numB);

    if (numA == 3) {
        // 'dee' goes out of scope after this if statement because it was
        // declared within the body of the if statement 
        char dee = 'D';
    }

    // cout << dee << endl;  <- This line will throw a compiler error

    for (int i = 0; i < 10; ++i) {
        // The variable 'i' goes out of scope as soon as this loop ends 
        // because 'i' was declared in the for loop definition.
    }

    int j;
    for (j = 0; j < 5; ++j) {
        // Here however, 'j' can be referenced afterwards because 'j' was 
        // declared outside the scope of the function definition.
    }

    cout << "Final values: " 
         << endl 
         << "j = " << j 
         << " | numA = " << numA 
         << " | numB = " << numB 
         << endl;

    return 0;

}


void ScopeHelperA(int& num) {
    num += 1;
}

void ScopeHelperB(int& num) {
    num *= 10;
}


