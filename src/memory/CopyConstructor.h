#pragma once 


class ClownCar {
private:
    int seats;
public:
    ClownCar();
    ClownCar(int seats);
    int getSeats();
    void setSeats(int seats);
};

class ClownTrike {
private: 
    int horns;
public: 
    ClownTrike();
    ClownTrike(int numHorns);
    ClownTrike(const ClownTrike& orig);
    int getHorns();
};

void copyExample();

