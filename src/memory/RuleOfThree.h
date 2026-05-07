#pragma once 
#include <string>


class Owner {
private:
    std::string name;
public:
    Owner();
    Owner(std::string);
    Owner(const Owner& objToCopy);
    std::string getName();
};

class Weapon {
private:
    float damage = 2.0;
    Owner* owner;
public:
    Weapon();  // Default
    Weapon(const Owner& owner);

    ~Weapon();
    Weapon(const Weapon& weapon);
    Weapon& operator=(const Weapon& objToCopy); 
    
    void setDamage(float dmg);
    float getDamage();
};


void ruleOfThree();

