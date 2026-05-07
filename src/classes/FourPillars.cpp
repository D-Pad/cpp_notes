#include "FourPillars.h"
#include <iostream>


// ------------------------------- INHERITANCE ----------------------------- //

// +---------------+---------------------------------------------------------+
// |   SPECIFIER   |                      DESCRIPTION                        |
// +---------------+---------------------------------------------------------+
// | private       | Accessible by self.                                     |
// +---------------+---------------------------------------------------------+
// | protected     | Accessible by self and derived classes.                 |
// +---------------+---------------------------------------------------------+
// | public        | Accessible by self, derived classes, and everyone else. |
// +---------------+---------------------------------------------------------+


// Separately, the keyword "public" in a class definition like class 
// DerivedClass: public BaseClass {...} has a different purpose, relating to 
// the kind of inheritance being carried out:
// 
//   * public : "public-->public, protected-->protected" -- public members of 
//               BaseClass are accessible as public members of DerivedClass, 
//               and protected members of BaseClass are accessible as 
//               protected members of DerivedClass.
//   
//   * protected : "public-->protected, protected-->protected" -- public and 
//                 protected members of BaseClass are accessible as protected 
//                 members of DerivedClass.
//   
//   * private : "public-->private, protected-->private" -- public and 
//               protected members of BaseClass are accessible as private 
//               members of DerivedClass. Incidentally, if the specifier is 
//               omitted as in "class DerivedClass: BaseClass {...}", the 
//               default is private.

void BaseClass::SetFirstInt(int v) {
    firstInteger = v;
}

void BaseClass::SetFirstFloat(float v) {
    firstFloat = v;
}

int BaseClass::GetFirstInt() {
    return firstInteger;
}

float BaseClass::GetFirstFloat() {
    return firstFloat;
}


void SubClass::SetSecondInt(int v) {
    secondInteger = v;
}

void SubClass::SetSecondFloat(float v) {
    secondFloat = v;
}

int SubClass::GetSecondInt() {
    return secondInteger;
}

float SubClass::GetSecondFloat() {
    return secondFloat;
}

// ------------------------------ POLYMORPHISM ---------------------------- //
// * Overriding * 
// When a derived class defines a member function that has the same name and 
// parameters as a base class's function, the member function is said to 
// override the base class's function. The example below shows how the 
// Restaurant's GetDescription() function overrides the Business's 
// GetDescription() function. 
std::string Business::GetDescription() const {
    return name + " -- " + address;
}

std::string CarShop::GetDescription() const {
    return name + " -- " + address + 
      "\n  Rating: " + std::to_string(rating);
}

// *Virtual functions*
// ---------------------------------------------------------------------------
// Runtime polymorphism only works when an overridden member function in a 
// base class is virtual. A virtual function is a member function that may be 
// overridden in a derived class and is used for runtime polymorphism. A 
// virtual function is declared by prepending the keyword "virtual". Ex: 
// virtual string GetDescription() const. At runtime, when a virtual function 
// is called using a pointer, the correct function to call is dynamically 
// determined based on the actual object type to which the pointer or 
// reference refers.

// The override keyword is an optional keyword used to indicate that a 
// virtual function is overridden in a derived class. Good practice is to use 
// the override keyword when overriding a virtual function to avoid 
// accidentally misspelling the function name or typing the wrong parameters.

// *Virtual table*
// ---------------------------------------------------------------------------
// To implement virtual functions, the compiler creates a virtual table that 
// allows the computer to quickly lookup which function to call at runtime. The 
// virtual table contains an entry for each virtual function with a function 
// pointer that points to the most-derived function that is accessible to each 
// class. Looking up which function to call makes runtime polymorphism slower 
// than compile-time polymorphism.
Pokemon::Pokemon() {
    this->name = "";
}

Pokemon::Pokemon(std::string name) {
    this->name = name;
}

std::string Pokemon::GetDescription() const {
     return name + " is a normal type";
};

std::string FireType::GetDescription() const {
    return name + " is a fire type and is weak to water"; 
}




