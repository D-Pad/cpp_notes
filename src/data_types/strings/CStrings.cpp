#include <cstring>
#include <iostream>
using namespace std;


void BlackMetalTitle(char* userString) {
    for (int i = 0; i < strlen(userString); ++i) {
        char c = userString[i];
        if (c == 'u') userString[i] = 'v';
        else if (c == 'U') userString[i] = 'V';
        else if (c == 'c') userString[i] = 'k';
        else if (c == 'C') userString[i] = 'K';
        else if (c == 'C') userString[i] = 'K';
        else if (c == 't' || c == 'T') userString[i] = '7';
        else if (c == 'o' || c == 'O') userString[i] = '0';
        else if (c == 'a' || c == 'A') userString[i] = '@';
    }
}


void CStringExample() {

    const int STR_SIZE = 30;
    char myString[STR_SIZE];
    cout << "Type a band name and press enter: " << endl;
    
    cin.getline(myString, STR_SIZE);
    BlackMetalTitle(myString); 
    
    cout << "Your new band name: " << myString << endl; 

};


