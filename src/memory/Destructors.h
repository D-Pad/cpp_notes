#pragma once 


class GamePlayerData {
private:
    int ssNum;
public:
    GamePlayerData();
    GamePlayerData(int ssNum);
};


class GamePlayer {
private:
    int playerNum;
    char playerName[50];
    GamePlayerData* playerData;
public:
    GamePlayer();
    ~GamePlayer(); // This is the destructor
    void setName(char name[]);
    char* getName();
};


class LinkedPlayer {
public: 
    LinkedPlayer(GamePlayer* dataInit, LinkedPlayer* nextLoc = nullptr);
    void InsertAfter(LinkedPlayer* nodeLoc);
    LinkedPlayer* GetNext();
    char* getName();
private:
    GamePlayer* dataVal;
    LinkedPlayer* nextNodePtr;
};


class AllPlayers {
public:
    const int numPlayers = 2;
    AllPlayers(LinkedPlayer* p1, LinkedPlayer* p2);
    ~AllPlayers();
    LinkedPlayer* players[2];
};


void destructionExample();

