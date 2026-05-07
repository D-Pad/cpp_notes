#pragma once
#include "Vehicle.h"


class Truck : public Vehicle {
public: 
    int bedWidth;
    int bedLength;
    void Honk() override;
};


