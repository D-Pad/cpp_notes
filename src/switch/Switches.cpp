#include <iostream>
using namespace std;


void SwitchTest(int input_val) {

    switch(input_val) {
        
        case 0:
            cout << "Input is zero" << endl;

        case 1: 
            cout << "Input is one or zero" << endl;
            break;

        case 2: 
            cout << "Input is two" << endl;
            break;

        default:
            cout << "Unsupported" << endl;
    }
    
}

