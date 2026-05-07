#include "MemoryRegions.h"
#include <iostream>

/*
10.6 Memory regions: Heap/Stack

A program's memory usage typically includes four different regions:

 * Code — The region where the program instructions are stored.
 
 * Static memory — The region where global variables (variables declared 
   outside any function) as well as static local variables (variables 
   declared inside functions starting with the keyword "static") are allocated.
   Static variables are allocated once and stay in the same memory location 
   for the duration of a program's execution.
 
 * The stack — The region where a function's local variables are allocated 
   during a function call. A function call adds local variables to the stack, 
   and a return removes them, like adding and removing dishes from a pile; 
   hence the term "stack." Because this memory is automatically allocated and 
   deallocated, it is also called automatic memory.
 
 * The heap — The region where the "new" operator allocates memory, and where 
   the "delete" operator deallocates memory. The region is also called free 
   store.

*/

// ------------------- USE OF THE FOUR MEMORY REGIONS ---------------------- //
// Program is stored in code memory
int myGlobal = 33;                          // In static memory

void MyFct() {
    int myLocal;                            // On stack 
    myLocal = 999;
    std::cout << " " << myLocal << std::endl;
}

int codeSnippetExampleOne() {
    int myInt;                              // On stack
    int* myPtr = nullptr;                   // On stack
    myInt = 555;

    myPtr = new int;                        // In heap
    *myPtr = 222;
    std::cout << *myPtr << " " << myInt;
    delete myPtr;                           // Deallocated from heap

    MyFct();                                // Stack grows, then shrinks

    return 0;
}


/*
10.7 Memory leaks

# Memory Leaks
A memory leak occurs when a program that allocates memory loses the ability 
to access the allocated memory, typically due to failure to properly destroy/
free dynamically allocated memory. A program's leaking memory becomes unusable,
much like a water pipe might have water leaking out and becoming unusable. 
A memory leak may cause a program to occupy more and more memory as the 
program runs, which slows program runtime. Even worse, a memory leak can 
cause the program to fail if memory becomes completely full and the program 
is unable to allocate additional memory.

A common error is failing to free allocated memory that is no longer used, 
resulting in a memory leak. Many programs that are commonly left running for 
long periods, like web browsers, suffer from known memory leaks — a web 
search for "<your-favorite-browser> memory leak" will likely result in 
numerous hits.

# Memory not freed in a destructor
Destructors are needed when destroying an object involves more work than 
simply freeing the object's memory. Such a need commonly arises when an 
object's data member, referred to as a sub-object, has allocated additional 
memory. Freeing the object's memory without also freeing the sub-object's 
memory results in a problem where the sub-object's memory is still allocated, 
but inaccessible, and thus can't be used again by the program.

The program in the animation below is very simple to focus on how memory 
leaks occur with sub-objects. The class's sub-object is just an integer 
pointer but typically would be a pointer to a more complex type. Likewise, 
the object is created and then immediately destroyed, but typically something 
would have been done with the object.
*/

class MyClass {
    public:
        MyClass();
    private:
        int* subObject;
};

MyClass::MyClass() {
    subObject = new int;    // Allocate sub-object
    *subObject = 0;
}


int memLeakExample() {
    MyClass* tempClassObject;

    tempClassObject = new MyClass; 
    delete tempClassObject; // ERROR: Memory leak 
    
    // Freed obj's mem, but not subobj's

    return 0;
}
// ------------------------------------------------------------------------- //
void memoryRegionsExample() {
    
    std::cout << "Memory regions" << std::endl;
    codeSnippetExampleOne();

}

