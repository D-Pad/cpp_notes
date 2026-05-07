#include "Destructors.h"
#include <cstring>
#include <iostream>

/*
# Overview
A destructor is a special class member function that is called automatically 
when a variable of that class type is destroyed. C++ class objects commonly 
use dynamically allocated data that is deallocated by the class's destructor.

Ex: A linked list class dynamically allocates nodes when adding items to the 
list. Without a destructor, the link list's nodes are not deallocated. The 
linked list class destructor should be implemented to deallocate each node in 
the list.
*/

GamePlayerData::GamePlayerData() {
    ssNum = 0;
}

GamePlayerData::GamePlayerData(int ssNum) {
    this->ssNum = ssNum;
}

GamePlayer::GamePlayer() {
    char name[50] = "name";
    strcpy(playerName, name); 
    playerData = new GamePlayerData();
}

GamePlayer::~GamePlayer() {
    std::cout << "Destroying GamePlayer: " << playerName << std::endl;
    delete playerData;
}

void GamePlayer::setName(char name[]) {
    strcpy(playerName, name);
};

char* GamePlayer::getName() {
    return playerName;
};



// Linked list player object
LinkedPlayer::LinkedPlayer(GamePlayer* dataInit, LinkedPlayer* nextLoc) {
    this->dataVal = dataInit;
    this->nextNodePtr = nextLoc;
}

void LinkedPlayer::InsertAfter(LinkedPlayer* nodeLoc) {
    LinkedPlayer* tmpNext = nullptr;
    tmpNext = this->nextNodePtr;    
    this->nextNodePtr = nodeLoc;    
    nodeLoc->nextNodePtr = tmpNext; 
}

LinkedPlayer* LinkedPlayer::GetNext() {
    return this->nextNodePtr;
}

char* LinkedPlayer::getName() {
    return dataVal->getName();
}

AllPlayers::AllPlayers(LinkedPlayer* player1, LinkedPlayer* player2) {
    // Unnecessary, but explicit 
    players[0] = new LinkedPlayer(*player1);
    players[1] = new LinkedPlayer(*player2);
}

// Custom destructor method
AllPlayers::~AllPlayers() {
    for (int i = 0; i < numPlayers; ++i) {
        std::cout 
            << "Deleting LinkedPlayer object for " 
            << players[i]->getName()
            << std::endl;
        delete players[i]; 
    }
    std::cout << "All GamePlayer references destroyed" << std::endl; 
}


void destructionExample() {

    // Manual memory management:
    // Creating an object with a reference via the 'new' keyword requires 
    // manual memory management.
    GamePlayer* playerOne = new GamePlayer();
    char name[50] = "D-Pad";
    playerOne->setName(name); 

    // Auto memory management:
    // Creating an object normally does not require manual memory management.
    // 'delete obj' will be called automatically at the end of the function.
    GamePlayer playerTwo;
    char nameTwo[50] = "David";
    playerTwo.setName(nameTwo);
   
    // Testers
    GamePlayer testerOne;
    char testerOneName[50] = "James";
    testerOne.setName(testerOneName);
    LinkedPlayer t1 = LinkedPlayer(&testerOne);

    GamePlayer testerTwo;
    char testerTwoName[50] = "Eric";
    testerTwo.setName(testerTwoName);
    LinkedPlayer t2 = LinkedPlayer(&testerTwo);

    AllPlayers playerGroup = AllPlayers(&t1, &t2); 

    delete playerOne;
}

