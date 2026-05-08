#include <cstring>
#include <iostream>
using namespace std;

// See pointers/StringPointers for more information on how to copy or reassign
// string values to c-strings

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

    // Looping through a string with a null terminator 
    for (int i = 0; word[i] != '\0'; ++i) {
        cout << word[i];
    }
    cout << endl;

    // After a string is declared, a programmer may not later assign the 
    // string as in movieTitle = "Indiana Jones";. That statement tries to 
    // assign a value to the char array variable itself, rather than copying 
    // each character from the string on the right into the array on the left. 
    // Functions exist to copy strings, such as strcpy(), discussed elsewhere.

    // A programmer can traverse a string using a loop that stops when 
    // reaching the null character.

    // A common error is to loop for the string's array size rather than 
    // stopping at the null character. Such looping visits unused array 
    // elements beyond the null character. An even worse common error is to 
    // loop beyond the last valid element, which visits memory locations that 
    // are not part of the array. These errors are illustrated below. Notice 
    // the strange characters that are output as the contents of other memory 
    // locations are printed out; the program may also crash.

}


