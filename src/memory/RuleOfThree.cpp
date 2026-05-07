#include "RuleOfThree.h"
#include <iostream>

/*

# 10.11 RULE OF THREE

Classes have three special member functions that are commonly implemented 
together:

 * Destructor: A destructor is a class member function that is automatically 
       called when an object of the class is destroyed, such as when the 
       object goes out of scope or is explicitly destroyed as in delete 
       someObject;.

 * Copy constructor: A copy constructor is another version of a constructor 
       that can be called with a single pass by reference argument. The copy 
       constructor is automatically called when an object is passed by value 
       to a function, such as for the function SomeFunction(MyClass 
       localObject) and the call SomeFunction(anotherObject), when an object 
       is initialized when declared such as MyClass classObject1 = 
       classObject2;, or when an object is initialized when allocated via "new"
       as in newObjectPtr = new MyClass( classObject2);

 * Copy assignment operator: The assignment operator "=" can be overloaded 
       for a class via a member function, known as the copy assignment 
       operator, that overloads the built-in function "operator=", the member 
       function having a reference parameter of the class type and returning 
       a reference to the class type.
*/
Owner::Owner() {
    name = "name";
}

Owner::Owner(std::string name) {
    this->name = name;
}

Owner::Owner(const Owner& owner) {
    this->name = owner.name;
}

std::string Owner::getName() {
    return name;
}

Weapon::Weapon() {
    damage = 5.0;
    owner = new Owner();
}

Weapon::Weapon(const Owner& owner) {
    damage = 5.0;
    this->owner = new Owner(owner);
}

Weapon::~Weapon() {
    std::cout << "Deleting weapon owner object" << std::endl;
    delete owner;
}

Weapon::Weapon(const Weapon& weapon) {
    std::cout << "cloning from copy constructor" << std::endl; 
    this->damage = weapon.damage;
    this->owner = new Owner(*weapon.owner); 
}

Weapon& Weapon::operator=(const Weapon& toCopy) {
    std::cout << "cloning from assignment" << std::endl; 
    if (this != &toCopy) {
        delete owner;
        owner = new Owner();
        *owner = *(toCopy.owner);
    }
    return *this;
}

void ruleOfThree() {

    Owner owner = Owner("dpad");
    Weapon weapon = Weapon(owner);
    Weapon pistol = weapon;
    Weapon revolver;
    revolver = pistol;

}


