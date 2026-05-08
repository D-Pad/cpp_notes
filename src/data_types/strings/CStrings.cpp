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

// A programmer can use an array to store a sequence of characters, known as 
// a string. Char arrays were the only kinds of strings in C++'s predecessor 
// language C, and thus are sometimes called C strings to distinguish them 
// from C++'s string type. An example is: char movieTitle[20] = "Star Wars";. 
// Because a string can be shorter than the character array, a string in a 
// char array must end with a special character known as a null character, 
// written as '\0'. Given a string literal like "Star Wars", the compiler 
// automatically appends a null character.
void NullTerminatedCString() {

    char name[6] = "D-Pad"; // Size must be at least 6, to include the null
                            // terminator character `\0` which is automatically
                            // inserted by the compiler when declaring a 
                            // c-string using double quote syntax

    // A c-string that's declared with the null terminator
    char word[10] = { 'O', 'v', 'e', 'r', 'w', 'a', 't', 'c', 'h', '\0' };    

}


