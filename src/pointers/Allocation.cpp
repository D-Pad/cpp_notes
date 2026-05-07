#include "Allocation.h"
#include <iostream>

// 10.3 Operators: new, delete, and ->

// The member access operator
// When using a pointer to an object, the member access operator (->) allows 
// access to the object's members with the syntax a->b instead of (*a).b. Ex: 
// If myPoint is a pointer to a Point object, myPoint->Print() calls the 
// Print() member function.

// Table 10.3.1: Using the member access operator.
/*

+---------------------------------+----------------------+--------------------+
| Action                          | Syntax with          | Syntax with member | 
|                                 | dereferencing        | access operator    |
+---------------------------------+----------------------+--------------------+
| Display point1's Y member value | cout << (*point1).Y; | cout << point1->Y; |
| with cout                       |                      |                    |
+---------------------------------+----------------------+--------------------+
| Call point2's Print() member    | (*point2).Print();   | point2->Print();   |
| function                        |                      |                    | 
+---------------------------------+----------------------+--------------------+

*/


double Coord::getX() {
    return x;
} 

double Coord::getY() {
    return y;
} 

void Coord::setX(double x) {
    this->x = x;
} 

void Coord::setY(double y) {
    this->y = y;
} 

Coord::Coord() {
    x = 0.0; y = 0.0;
}

Coord::Coord(double a) {
    x = a; y = 0.0;
}

Coord::Coord(double a, double b) {
    x = a; y = b;
}

void Coord::printCoord() {
    std::cout << "X and Y: " << x << " | " << y << std::endl;
}


// * THE NEW OPERATOR *
// The new operator allocates memory for the given type and returns a pointer 
// to the allocated memory. If the type is a class, the new operator calls 
// the class's constructor after allocating memory for the class's member 
// variables.
void newExampleFn() {

    // Using the 'new' keyword on a class will allocate memory, then call the 
    // classes constructor. The memory is only deallocated with the 'delete'
    // key word.

    Coord someCoord;                       // <- Stack allocated
    Coord* coordinatePointer = new Coord;  // <- Heap allocated
    std::cout << "   Address of new Coord: " << coordinatePointer << std::endl;

    // Stack allocated memory is destroyed when it goes out of scope and thus
    // does not need to be deleted.
    //
    // Heap allocated memory is never destroyed, and must be manually deleted
    // to prevent leaks.
    delete coordinatePointer;

    // The 'new' operator can pass arguments to constructors as well
    Coord* trashPtr = new Coord(3.14, 2.0);
    std::cout << "   trashPtr.x = " << (*trashPtr).getX() << std::endl;

}


// * THE DELETE OPERATOR *
// The delete operator deallocates (or frees) a block of memory that was 
// allocated with the new operator. The statement delete pointerVariable; 
// deallocates a memory block pointed to by pointerVariable. If 
// pointerVariable is null, delete has no effect.

// After the delete, the program should not attempt to dereference 
// pointerVariable since pointerVariable points to a memory location that is 
// no longer allocated for use by pointerVariable. Dereferencing a pointer 
// whose memory has been deallocated is a common error and may cause strange 
// program behavior that is difficult to debug. Ex: If pointerVariable points 
// to deallocated memory that is later allocated to someVariable, changing *
// pointerVariable will mysteriously change someVariable. Calling delete with 
// a pointer that wasn't previously set by the new operator has undefined 
// behavior and is a logic error.
void delExampleFn() {

    // Failing to delete this pointer will result in a memory leak. The delete
    // keyword should only be used on variables that were allocated with the 
    // 'new' keyword.
    Coord* coordOne = new Coord(5.0, 12.0);
    double value = coordOne->getX() + coordOne->getY();
    delete coordOne;
    std::cout << "   Value = " << value << std::endl;

}


// Allocating and deleting object arrays
// The new operator creates a dynamically allocated array of objects if the 
// class name is followed by square brackets containing the array's length. A 
// single, contiguous chunk of memory is allocated for the array, then the 
// default constructor is called for each object in the array. A compiler 
// error occurs if the class does not have a constructor that can take 0 
// arguments.

// The delete[] operator is used to free an array allocated with the new 
// operator.
void arrayAllocExample() {

    Coord* points = new Coord[5];
    points[3].setX(29.45);
    
    std::cout 
        << "   Point 4's x coordinate is: " 
        << points[3].getX() 
        << std::endl;

    // Free all points in an array with a single delete.
    delete[] points;

}


// ------------------------ MAIN EXAMPLE FUNCTION -------------------------- //
void allocationExample() {

    std::cout << "~~ Memory allocation ~~" << std::endl;
    std::cout << " - Using 'new' -" << std::endl;
    newExampleFn();
    std::cout << " - Using 'delete' -" << std::endl;
    delExampleFn();
    std::cout << " - Array allocation -" << std::endl;
    arrayAllocExample();

}

