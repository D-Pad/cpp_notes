#include "Pointers.h"
#include <iostream>

// 10.1 Why pointers?
// A challenging and yet powerful programming construct is something called a 
// pointer. A pointer is a variable that contains a memory address. This 
// section describes a few situations where pointers are 
// useful.

// Inserting/erasing in vectors vs. linked lists
// A vector (or array) stores a list of items in contiguous memory locations, 
// which enables immediate access to any element of a vector userGrades by 
// using userGrades.at(i) (or userGrades[i]). However, inserting an item 
// requires making room by shifting higher-indexed items. Similarly, erasing 
// an item requires shifting higher-indexed items to fill the gap. Shifting 
// each item requires a few operations. If a program has a vector with 
// thousands of elements, a single call to insert() or erase() can require 
// thousands of instructions and cause the program to run very slowly, often 
// called the vector insert/erase performance problem.

// A programmer can use a linked list to make inserts or erases faster. A 
// linked list consists of items that contain both data and a pointer—a link—
// to the next list item. Thus, inserting a new item B between existing items 
// A and C just requires changing A to point to B's memory location, and B to 
// point to C's location, as shown in the following animation. No shifts occur.

// Table 10.1.1: Comparing vectors and linked lists.
// +--------------------------------+-----------------------------------------+
// |             Vector             |               Linked list               |
// +--------------------------------+-----------------------------------------+
// | - Stores items in contiguous   | - Stores each item anywhere in memory,  | 
// |   memory locations             |   with each item pointing to the next   | 
// |                                |   list item                             |
// | - Supports quick access to     |                                         |  
// |   i'th element via at(i)       | - Supports fast inserts or deletes      |
// |                                |                                         |
// |   * May be slow for inserts or |   * access to i'th element may be slow  | 
// |     erases on large lists due  |     as the list must be traversed from  |  
// |     to necessary shifting of   |     the first item to the i'th item     | 
// |     elements                   |                                         |
// |                                | - Uses more memory due to storing a     | 
// |                                |   link for each item                    | 
// +--------------------------------+-----------------------------------------+


// Pointer variables
// A pointer is a variable that holds a memory address, rather than holding 
// data like most variables. A pointer has a data type, and the data type 
// determines what type of address is held in the pointer. Ex: An integer 
// pointer holds a memory address of an integer, and a double pointer holds 
// an address of a double. A pointer is declared by including * before the 
// pointer's name. Ex: int* maxItemPointer declares an integer pointer named 
// maxItemPointer.

// Typically, a pointer is initialized with another variable's address. The 
// reference operator (&) obtains a variable's address. Ex: &someVar returns 
// the memory address of variable someVar. When a pointer is initialized with 
// another variable's address, the pointer "points to" the variable.

void pointerExampleFunctionOne() {
    
    int someInt;                   //      Memory addresses 
    int* valPointer;               //    +------------------+
                                   // 75 |                  |
    someInt = 5;                   //    +------------------+
    std::cout                      // 76 |        5         | someInt <----+ 
        << "someInt address is: "  //    +------------------+              | 
        << &someInt                // 77 |                  |              | 
        << std::endl;              //    +------------------+              |
                                   // 78 |        76        | valPointer --+
    valPointer = &someInt;         //    +------------------+
    std::cout                      // 79 |                  | 
        << "valPointer is     : "  //    +------------------+
        << valPointer 
        << std::endl;              // * Memory addresses actually use 
                                   //   hexidecimal notation, not double
                                   //   digit decimal numbers
    
    std::cout << "*valPointer is    : " << *valPointer << std::endl;

    *valPointer = 10;   // Changes someInt to 10

    std::cout << "someInt is        : " << someInt << std::endl;
    std::cout << "*valPointer is    : " << *valPointer << std::endl;
    
    // OUTPUT:
    // someInt address is: 0x7ffe5696a1fc
    // valPointer is     : 0x7ffe5696a1fc

}


void pointerExampleFunctionTwo() {

    char userLetter = 'A';
    char* letterPointer = &userLetter;

    *letterPointer = 'B';
    std::cout << "userLetter: " << userLetter << std::endl;

}


// Null pointer
// When a pointer is declared, the pointer variable holds an unknown address 
// until the pointer is initialized. A programmer may wish to indicate that a 
// pointer points to "nothing" by initializing a pointer to null. Null means "
// nothing". A pointer that is assigned with the keyword nullptr is said to 
// be null. Ex: int *maxValPointer = nullptr; makes maxValPointer null.
void nullPtrCheck(int* intPtr) {
    
    if (intPtr == nullptr) {
        std::cout << "Pointer is null" << std::endl;
    }
    else {
        std::cout << "Points to value: " << *intPtr << std::endl;
    }


}

void pointerExampleFunctionThree() {

    int someInt = 5;
    int* valPointer = nullptr;

    nullPtrCheck(valPointer);
    valPointer = &someInt;
    nullPtrCheck(valPointer);

}

// COMMON POINTER ERRORS
// A number of common pointer errors result in syntax errors that are caught 
// by the compiler or runtime errors that may result in the program crashing.

// Common syntax errors:
// * A common error is to use the dereference operator when initializing a 
//   pointer. Ex: *valPointer = &maxValue; is a syntax error because *
//   valPointer is referring to the value pointed to, not the pointer itself.
// * A common error when declaring multiple pointers on the same line is to 
//   forget the * before each pointer name. Ex: int* valPointer1, valPointer2; 
//   declares valPointer1 as a pointer, but valPointer2 is declared as an 
//   integer because no * exists before valPointer2. Good practice is to 
//   declare one pointer per line to avoid accidentally declaring a pointer 
//   incorrectly.

// Common runtime errors:
// * A common error is to use the dereference operator when a pointer has not 
//   been initialized. Ex: cout << *valPointer; may cause a program to crash if 
//   valPointer holds an unknown address or an address the program is not 
//   allowed to access.
// * A common error is to dereference a null pointer. Ex: If valPointer is null,
//   then cout << *valPointer; causes the program to crash. A pointer should 
//   always hold a valid address before the pointer is dereferenced.

// ------------------------------------------------------------------------- //
void pointerExampleFunction() {

    pointerExampleFunctionOne();
    std::cout << "-------" << std::endl;
    pointerExampleFunctionTwo();
    std::cout << "-------" << std::endl;
    pointerExampleFunctionThree();

}


