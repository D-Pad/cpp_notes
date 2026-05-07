#include "Animal.h"
#include <string>
using namespace std;


void Animal::SetName(string animalName) {
    name = animalName;
}

string Animal::GetName() {
    return name;
}

void Animal::SetAge(int animalAge) {
    age = animalAge;
}

int Animal::GetAge() {
    return age;
}

void Animal::SetDomesticated(bool isDomesticated){
    domesticated = isDomesticated;
}

bool Animal::IsDomesticated() {
    return domesticated;
}

void Animal::SetKingdom(AnimalKingdom k) {
    kingdom = k;
}

AnimalKingdom Animal::GetKingdom() {
    return kingdom;
}

