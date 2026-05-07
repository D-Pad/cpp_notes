#include "StringPointers.h"
#include <cstring>
#include <iostream>


/*
- 10.4 String functions with pointers - 
# C string library functions
The C string library, introduced elsewhere, contains several functions for 
working with C strings. This section describes the use of char pointers in 
such functions. The C string library must first be included via: 
#include <cstring>.

Each string library function operates on one or more strings, each passed as 
a char* or const char* argument. Strings passed as char* can be modified by 
the function, whereas strings passed as const char* arguments cannot. 
Examples of such functions are strcmp() and strcpy(), introduced elsewhere.
*/
void cStrcmpAndStrcpy() {

    // C style strings
    char string1[10] = "abcxyz";
    char string2[10] = "xyz";
    char newText[10];
    char* subStr = nullptr;

    int cmp1, cmp2;
    cmp1 = strcmp(string1, string2);
    std::cout 
        << "strcmp of \"" 
        << string1 
        << "\" and \"" 
        << string2 
        << "\""
        << std::endl;
    std::cout << cmp1 << std::endl;

    // C-style strings require a null terminator to represent the end of the 
    // string. The line below this comment creates a pointer to the 4th 
    // character (which is 'x') of string1, and runs to the end of the string.
    // Meaning that 'subStr' is equal to the 'xyz' in string1.
    subStr = &string1[3];

    cmp2 = strcmp(subStr, string2);
    std::cout << "strcmp of \"" << subStr;
    std::cout << "\" and \"" << string2 << "\" returned ";
    std::cout << cmp2 << std::endl;

    strcpy(newText, subStr);
    std::cout << "newText is now \"" << newText << "\"";
    std::cout << std::endl;
};

/*
# C string search functions
strchr(), strrchr(), and strstr() are C string library functions that search 
strings for an occurrence of a character or substring. Each function's first 
parameter is a const char*, representing the string to search 
within.

The strchr() and strrchr() functions find a character within a string, and 
thus have a char as the second parameter. strchr() finds the first occurrence 
of the character within the string and strrchr() finds the last occurrence.

strstr() searches for a substring within another string, and thus has a const 
char* as the second parameter.


+-----------+----------------------------------------------------------------+
|           | strchr(srcStr, searchChar)                                     |
|           |                                                                |
| strchr()  | Returns a null pointer if searchChar does not exist in srcStr. |
|           | Else returns pointer to first occurance.                       |
|           |                                                                |
+-----------+----------------------------------------------------------------+
|           | strrchr(sourceStr, searchChar)                                 |
|           |                                                                |
| strrchr() | Returns a null pointer if searchChar does not exist in         |
|           | sourceStr. Else, returns pointer to LAST occurrence (searches  |
|           | in reverse, hence middle 'r' in name).                         |
+-----------+----------------------------------------------------------------+
|           | strstr(str1, str2)                                             |
|           |                                                                |
| strstr()  | Returns a null pointer if str2 does not exist in str1. Else,   | 
|           | returns a char pointer pointing to the first character of the  | 
|           | first occurrence of string str2 within string str1.            |
+-----------+----------------------------------------------------------------+
*/
void exampleTableDemo() {

    // This function demonstrates how the functions listed above work
    
    char orgName[100] = "The Dept. of Redundancy Dept."; 
    char newText[100]; 
    char* subString = nullptr;
   
    /* ------------- strchr() -------------- */
    std::cout << std::endl << " ------ strchr() ------" << std::endl; 
    if (strchr(orgName, 'D') != nullptr) { 
        subString = strchr(orgName, 'D');     // 'D' exists in orgName?
        strcpy(newText, subString);           // Points to first 'D'
        std::cout << "'D' exists in orgName"  // newText now "Dept.
            << std::endl;
    }
      
    if (strchr(orgName, 'Z') != nullptr) {
        // Doesn't exist, branch not taken
        std::cout << "'Z' exists in sub orgName" << std::endl;
    }

    /* ------------- strrchr() -------------- */
    std::cout << std::endl << " ------ strrchr() ------" << std::endl; 
    if (strrchr(orgName, 'D') != nullptr) {   
        subString = strrchr(orgName, 'D');     // 'D' exists in orgName?
        strcpy(newText, subString);            // Points to last 'D'
                                               // newText now "Dept."
        std::cout << "New text: " << newText << std::endl;
    }                                         

    /* ------------- strstr() -------------- */
    std::cout << std::endl << " ------ strchr() ------" << std::endl; 
    subString = strstr(orgName, "Dept");  
    if (subString != nullptr) {           // Points to first 'D'
        strcpy(newText, subString);       // newText now "Dept. of Redundancy 
                                          // Dept."
        std::cout << "New text: " << newText << std::endl;
    }

}


void ptrStringFunctions() {
    std::cout << " ----- <cstring> example functions ------" << std::endl; 
    cStrcmpAndStrcpy(); 
    exampleTableDemo();
}

