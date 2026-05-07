#pragma once
#include <string>


// Default constructors do not declare a return type. Not even void
class Person {
private:
    std::string name;
    int age;

public: 
    
    Person();
    void Print();
    void SetName(std::string n);
    void SetAge(int a);

};


