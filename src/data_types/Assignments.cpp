#include <iostream>
using namespace std;


void Assignments() {

    int x = 50;
    int y = 100;

    // val = condition ? true : false
    int z  = ( x < y ) ? 20   : 30;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = (x < y) ? 20 : 30 = " << z << endl; 

    // The value of a variable depends on the declared data type regardless
    // of the provided value.
    int capD = 'D';
    char char98 = 98;

    cout << endl 
         << "int  capD   = 'D' -> " << capD << endl 
         << "char char98 = 98  -> '" << char98 << "'" << endl;

}

