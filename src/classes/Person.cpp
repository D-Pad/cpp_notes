#include "Person.h"
#include <iostream>


// Default constructors do not declare a return type. Not even void
Person::Person() { // <- This is a default constructor. It gets created by the 
                   //    compiler even when not explicitly defined. 
    name = "Unknown";
    age = 0;
};

void Person::Print() {
    std::cout << "Name: " << name << " | Age: " << age << std::endl;
};

void Person::SetName(std::string n) {
    name = n;
}

void Person::SetAge(int a) {
    age = a;
}



