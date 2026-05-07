#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;


// -------------------------- NUMERICAL TYPES ------------------------------ //
void IntegerDivision(int x, int y) {
    
    cout << "Integer division:" << endl;
    cout << x << " / " << y << " = " << x / y << endl << endl; 

}

void FloatDivision(double x, double y) {

    cout << "Float division:" << endl;
    cout << fixed << setprecision(4) << 
        x << " / " << y << " = " << x / y << endl << endl; 

}

void ModuloDivision(int x, int y) {

    cout << "Modulo division:" << endl;
    cout << x << " % " << y << " = " << x % y << endl << endl; 

}

void IntFloatDivision(int x, double y) {

    cout << "Integer and double division:" << endl;
    cout << x << " / " << y << " = " << x / y << endl << endl; 

}

void RandomNumberExample(int seed_number) {

    int seed = 1;
    if (seed_number > 1) {
        seed = seed_number;
        srand(seed_number); 
    };

    cout << "Seed = " << seed << endl;
    cout << rand() << endl; 
    cout << rand() << endl; 
    cout << rand() << endl; 
    cout << rand() << endl; 

}

// ----------------- Floating Point Number Arithmetics --------------------- //
void FloatComparison() {

    float x = 0.7;
    x = x - 0.4;
    float y = x;
    x = x - 0.3;  // Should be 0.0

    string zeroStr = x == 0.0 ? "true" : "false";

    // Isn't 0.0 because of floating point precision errors.
    cout << "x = " << x << endl;
    cout << "x == 0.0 ? -> " << zeroStr << endl;

    // A common approach to comparing floating point numbers is to use a 
    // "close enough" range. The range that is deemed "close enough" is 
    // often called the epsilon.
    float epsilon = 0.00001;
 
    // Subtract by the expected value, then compare to epsilon
    // `fabs(calculatedVal - expectedVal) < epsilon`
    if (fabs(x - 0.0) < epsilon) {
        cout << "x equals 0.0" << endl;
    }
    else {
        cout << "x does not equal 0.0" << endl;
    }

    if (fabs(y - 0.3) < epsilon) {
        cout << "y equals 0.3" << endl;
    }
    else {
        cout << "y does not equal 0.3" << endl;
    }

}


