// The preprocessor is a tool that scans the file from top to bottom looking 
// for any lines that begin with #, known as a hash symbol. Each such line is 
// not a program statement, but rather directs the preprocessor to modify the 
// file in some way before compilation continues, each such line being known 
// as a preprocessor directive. The directive ends at the end of the line, no 
// semicolon is used at the end of the line.

// Perhaps the most commonly-used preprocessor directive is #include, known 
// as an include directive. #include directs the compiler to replace that 
// line by the contents of the given filename.


// #include "myfile.h" -- A filename in quotes causes the preprocessor to 
// look for the file in the same folder/directory as the including file.

// #include <stdfile> -- A filename in angle brackets causes the preprocessor 
// to look in the system's standard library folder/directory. Programmers 
// typically use angle brackets only for standard library files, using quotes 
// for all other include files. Note that nearly every previous example has 
// included at least one standard library file, using angle brackets.

// Header file guards are preprocessor directives, which cause the compiler 
// to only include the contents of the header file once. #define FILENAME_H 
// defines the symbol FILENAME_H to the preprocessor. The #ifndef FILENAME_H 
// and #endif form a pair that instructs the preprocessor to process the code 
// between the pair only if FILENAME_H is not defined ("ifndef" is short for "
// if not defined"). Thus, if the preprocessor includes encounter the header 
// more than once, the code in the file during the second and any subsequent 
// encounters will be skipped because FILENAME_H was already defined.
#include "PreProcess.h"


void PreProcess() {



}

