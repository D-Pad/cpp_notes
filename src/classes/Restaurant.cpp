#include "Restaurant.h"
#include <string>


void Restaurant::SetMaxSeating(int num) {
    if (maxSeating == 0) { 
        maxSeating = num;
    }
}

void Restaurant::FillSeats(int num) {
    if (occupiedSeating + num < maxSeating) {
        occupiedSeating += num;
    }
}

void Restaurant::ClearSeats(int num) {
    int maxRemove = num;
    if (occupiedSeating - maxRemove < 0) {
        maxRemove = occupiedSeating;
    }
    occupiedSeating -= maxRemove;
}

int Restaurant::GetAvailableSeating() {
    return maxSeating - occupiedSeating;
}

void Restaurant::SetName(std::string restaurantName) {
    name = restaurantName;
}


