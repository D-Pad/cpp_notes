#pragma once
#include "Clan.h"
#include <string>


class Clan {
private:
    std::string name;
    int numMembers;

public: 
    Clan();
    Clan(std::string clanName);
    void Print();
};

