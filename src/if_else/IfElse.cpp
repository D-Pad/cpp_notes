#include <iostream>
using namespace std;


void Branching(int input_val) {
    
    if (input_val == 0) {
        cout << "First branch reached: input = 0" << endl;
    }
    else if (input_val == 1) {
        cout << "Second branch reached: input = 1" << endl;
    }
    else {
        cout << "Final branch reached: input = " << input_val << endl;
    }

}

