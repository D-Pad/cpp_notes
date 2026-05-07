#include <iostream>
using namespace std;


void EnumExample() {

    enum LedState {
        OFF,
        RED,
        BLUE,
        GREEN,
    };

    LedState led = OFF;
    char userInput;

    cout << "Change LED color with 'r', 'g', or 'b'" << endl; 
    cout << "Press 'q' to quit" << endl;

    while (true) {
        
        cin >> userInput;
        
        if (userInput == 'r') {
            led = RED;
        }
        else if (userInput == 'g') {
            led = GREEN;
        }
        else if (userInput == 'b') {
            led = BLUE;
        }
        else if (userInput == 'q') {
            break;
        }

    }

    switch(led) {
        case RED:
            cout << "LED Color: Red" << endl;
            break;
        case GREEN:
            cout << "LED Color: Green" << endl;
            break;
        case BLUE:
            cout << "LED Color: Blue" << endl;
            break;
        case OFF:
            cout << "LED is off" << endl;
            break;
    }  

}


