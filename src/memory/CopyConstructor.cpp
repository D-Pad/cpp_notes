#include "CopyConstructor.h"
#include <iostream>


/*
# Copy constructor
The solution is to create a copy constructor, a constructor that is 
automatically called when an object of the class type is passed by value to a 
function and when an object is initialized by copying another object during 
declaration. Ex: TrashClass classObj2 = classObj1; or obj2Ptr = new TrashClass(
classObj1);. The copy constructor makes a new copy of all data members (
including pointers), known as a deep copy.

If the programmer doesn't define a copy constructor, then the compiler 
implicitly defines a constructor with statements that perform a memberwise 
copy, which simply copies each member using assignment: newObj.member1 = 
origObj.member1, newObj.member2 = origObj.member2, etc. Creating a copy of an 
object by copying only the data members' values creates a shallow copy of the 
object. A shallow copy is fine for many classes, but typically a deep copy is 
desired for objects that have data members pointing to dynamically allocated 
memory.

The copy constructor can be called with a single pass-by-reference argument 
of the class type, representing an original object to be copied to the newly-
created object. A programmer may define a copy constructor, typically having 
the form: TrashClass(const TrashClass& origObject);
*/


ClownCar::ClownCar() {
    seats = 2;
}

ClownCar::ClownCar(int seats) {
    this->seats = seats;
}

void ClownCar::setSeats(int seats) {
    this->seats = seats;
}

int ClownCar::getSeats() {
    return seats;
}

ClownTrike::ClownTrike() {
    horns = 5;
}

ClownTrike::ClownTrike(int horns) {
    this->horns = horns;
}

ClownTrike::ClownTrike(const ClownTrike& orig) { // Custom copy constructor
    this->horns = orig.horns;
}

int ClownTrike::getHorns() {
    return horns;
}

/*
# 10.10 Copy assignment operator
Default assignment operator behavior
Given two TrashClass objects, classObj1 and classObj2, a programmer might write 
classObj2 = classObj1; to copy classObj1 to classObj2. The default behavior 
of the assignment operator (=) for classes or structs is to perform 
memberwise assignment. Ex:

```
classObj2.memberVal1 = classObj1.memberVal1;
classObj2.memberVal2 = classObj1.memberVal2; 
```

Such behavior may work fine for members with basic types like int or char, 
but typically is not the desired behavior for a pointer member. Memberwise 
assignment of pointers may lead to program crashes or memory leaks.


# Overloading the assignment operator
The assignment operator (=) can be overloaded to eliminate problems caused by 
a memberwise assignment during an object copy. The implementation of the 
assignment operator iterates through each member of the source object. Each 
non-pointer member is copied directly from source member to destination member.
For each pointer member, new memory is allocated, the source's referenced 
data is copied to the new memory, and a pointer to the new member is assigned 
as the destination member. Allocating and copying data for pointer members is 
known as a deep copy.

The following program solves the default assignment operator behavior problem 
by introducing an assignment operator that performs a deep copy.
*/
class TrashClass {
public:
   TrashClass();
   ~TrashClass();
   TrashClass& operator=(const TrashClass& objToCopy);
   
   // Set member value dataObject
   void SetDataObject(const int setVal) {
      *dataObject = setVal;
   }
   
   // Return member value dataObject
   int GetDataObject() const {
      return *dataObject;
   }
private:
   int* dataObject;// Data member
};

// Default constructor
TrashClass::TrashClass() {
   std::cout << "Constructor called." << std::endl;
   dataObject = new int; // Allocate mem for data
   *dataObject = 0;
}

// Destructor
TrashClass::~TrashClass() {
   std::cout << "Destructor called." << std::endl;
   delete dataObject;
}

TrashClass& TrashClass::operator=(const TrashClass& objToCopy) {
   std::cout << "Assignment op called." << std::endl;
   
   if (this != &objToCopy) {           // 1. Don't self-assign
      delete dataObject;                  // 2. Delete old dataObject
      dataObject = new int;               // 3. Allocate new dataObject
      *dataObject = *(objToCopy.dataObject); // 4. Copy dataObject
   }
   
   return *this;
}

// ------------------------------------------------------------------------- //
void copyExample() {
    
    ClownCar car = ClownCar(6);
    ClownCar cloneCar = ClownCar(car); // Automatically defined clone 
                                       // constructor. 
    std::cout << "cloneCar seats: " << cloneCar.getSeats() << std::endl;

    ClownTrike trike = ClownTrike();
    ClownTrike cloneTrike = ClownTrike(trike);
    std::cout << "trike horns: " << trike.getHorns() << std::endl;
    std::cout << "cloneTrike horns: " << cloneTrike.getHorns() << std::endl;

    // --------------- Assignment operator overload example ---------------- // 
    TrashClass classObj1; // Create object of type TrashClass
    TrashClass classObj2; // Create object of type TrashClass
    
    // Set and print object 1 data member value
    classObj1.SetDataObject(9);
    
    // Copy class object using copy assignment operator
    classObj2 = classObj1;
    
    // Set object 1 data member value
    classObj1.SetDataObject(1);
    
    // Print data values for each object
    std::cout << "classObj1:" << classObj1.GetDataObject() << std::endl;
    std::cout << "classObj2:" << classObj2.GetDataObject() << std::endl;
 
}



