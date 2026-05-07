#pragma once
#include <string>
using namespace std;


enum AnimalKingdom {
    Mamal,
    Reptile,
    Amphibian,
};


class Animal {
public:
    void SetName(string animalName);
    string GetName();

    void SetAge(int age);
    int GetAge();

    void SetDomesticated(bool isDomesticated);
    bool IsDomesticated();

    void SetKingdom(AnimalKingdom k);
    AnimalKingdom GetKingdom();

private:
    string name;
    bool domesticated;
    int age;
    AnimalKingdom kingdom;

};


