#include "Clan.h"
#include <string>
#include <iostream>


// The class below is to demonstrate the concept of a 'constructor initializer
// list'. Initializer lists define how the object is built internally once a 
// constructor is chosen.
Clan::Clan() : name("Our Clan"), numMembers(0) {}
Clan::Clan(std::string clanName) : name(clanName), numMembers(0) { }

void Clan::Print() {
    std::cout << "There are " << numMembers 
         << " members in the " << name 
         << " clan" << std::endl;
}


