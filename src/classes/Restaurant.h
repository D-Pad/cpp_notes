#pragma once
#include <string>


class Restaurant {
private: 
    int maxSeating = 0;
    std::string name;
    int occupiedSeating = 0;

public:
    void SetName(std::string name);
    void SetMaxSeating(int num); 
    void FillSeats(int num);
    void ClearSeats(int num);
    int GetAvailableSeating();

};


