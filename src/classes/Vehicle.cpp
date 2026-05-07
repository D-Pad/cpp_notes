#include "Vehicle.h"
#include <iostream>


std::string Vehicle::GetMake() {
    return make;
}


std::string Vehicle::GetModel() {
    return model;
}


void Vehicle::Honk() {
    std::cout << "Beep beep!" << std::endl; 
}

