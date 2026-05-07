#pragma once
#include <string>


// This class is for demonstrating method overloading. Notice how there are 
// multiple constructors defined. 
class Planet {
private: 
    std::string name;
    float milesRadius;

public: 
    Planet();
    Planet(std::string planetName);
    Planet(std::string planetName, float radius);
    Planet(float radius);

    std::string GetName();
    float GetRadius();
    void Print();
};


