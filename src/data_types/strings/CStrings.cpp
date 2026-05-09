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
/*
+--------------+-------------------------------------------------------------+
| strcpy()     | strcpy(destStr, sourceStr)                                  |
|              |                                                             |
|              | Copies sourceStr (up to and including null character)       |
|              | to destStr.                                                 |
+--------------+-------------------------------------------------------------+
| strncpy()    | strncpy(destStr, sourceStr, numChars)                       |
|              |                                                             |
|              | Copies up to numChars characters.                           |
+--------------+-------------------------------------------------------------+
| strcat()     | strcat(destStr, sourceStr)                                  |
|              |                                                             |
|              | Copies sourceStr (up to and including null character)       |
|              | to end of destStr (starting at destStr's null character).   |
+--------------+-------------------------------------------------------------+
| strncat()    | strncat(destStr, sourceStr, numChars)                       |
|              |                                                             |
|              | Copies up to numChars characters to destStr's end,          |
|              | then appends null character.                                |
+--------------+-------------------------------------------------------------+

For strcpy(), a common error is to copy a source string that is too large, 
causing an out-of-range access in the destination string. 
*/


/*
+--------------+-------------------------------------------------------------+
| strchr()     | strchr(sourceStr, searchChar)                               |
|              |                                                             |
|              | Returns NULL if searchChar does not exist in sourceStr.     |
|              | Else, returns address of first occurrence.                  |
|              | NULL is defined in the cstring library.                     |
+--------------+-------------------------------------------------------------+
| strlen()     | size_t strlen(sourceStr)                                    |
|              |                                                             |
|              | Returns number of characters in sourceStr up to,            |
|              | but not including, first null character.                    |
|              | size_t is integer type.                                     |
+--------------+-------------------------------------------------------------+
| strcmp()     | int strcmp(str1, str2)                                      |
|              |                                                             |
|              | Returns 0 if str1 and str2 are equal,                       |
|              | non-zero if they differ.                                    |
+--------------+-------------------------------------------------------------+

strcmp() is usually used to compare for equality, returning 0 if the strings 
are the same length and have identical characters. A common error is to use 
== when comparing C strings, which does not work. str1 == str2 compares the 
strings' addresses, not their contents. Because those addresses will usually 
be different, str1 == str2 will evaluate to 0. This is not a syntax error, 
but clearly a logic error. Another common error is to forget to compare the 
result of strcmp with 0, as in if (strcmp(str1, str2)) {...}. The code is not 
a syntax error, but is a logic error because the if condition will be false (0)
when the strings are equal. The correct condition would instead be if (
strcmp(str1, str2) == 0) {...}. Although strcmp returns 0, a good practice is 
to avoid using if (!strcmp(str1,str2)) {...} because that 0 does not 
represent "false" but rather is encoding a particular situation.

strcmp(str1, str2) returns a negative number if str1 is less than str2, and a 
positive number if str1 is greater than str2. Evaluation first compares the 
character pair at element 0, then at element 1, etc., returning as soon as a 
pair differs.
*/

void StringReplaceExample() {

    char repThisChar = ' ';
    char withThisChar = '_';
    char str[13] = { 
        'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0' 
    };

    cout << "Before: " << str << endl;

    int i;
    for (i = 0; i < strlen(str); ++i) {
        if (str[i] == repThisChar) {
            str[i] = withThisChar;
        }
        if (str[i] == '!') {
            str[i] = '?';
        }
    }

    cout << "After: " << str << endl;

}

