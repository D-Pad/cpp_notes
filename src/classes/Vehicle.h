#pragma once 
#include <string>


class Vehicle {
private:
    std::string make;
    std::string model; 
    int year;

public:
    std::string GetModel();
    std::string GetMake();
    virtual void Honk(); // 'virtual' is used for methods that are overloaded
};


