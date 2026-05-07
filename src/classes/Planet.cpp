#include "Planet.h"
#include <iostream>


Planet::Planet() {
    name = "Unnamed";
    milesRadius = 100.0;
}

Planet::Planet(std::string planetName) {
    name = planetName;
    milesRadius = 100.0;
}

Planet::Planet(std::string planetName, float radius) {
    name = planetName;
    milesRadius = radius;
}

Planet::Planet(float radius) {
    name = "Unknown";
    milesRadius = radius;
}

void Planet::Print() {
    std::cout << "Planet: " << name << " | " << milesRadius << std::endl;
}
