#include <iostream>
#include <vector>
#include "ArgParser.h"
#include "ClassExamples.h"
#include "Clan.h"
#include "Person.h"
#include "Planet.h"
#include "OpOverloading.h"
#include "Restaurant.h"
#include "Car.h"
#include "Vehicle.h"
#include "FourPillars.h"


void RunClassExample() {

    Restaurant bestHotWings;
    bestHotWings.SetName("Spicy Wingz"); 
    bestHotWings.SetMaxSeating(50);
    std::cout << "Seats available at open                      : " 
         << bestHotWings.GetAvailableSeating() << std::endl;
   
    // Customers show up
    bestHotWings.FillSeats(5);
    bestHotWings.GetAvailableSeating();
    std::cout << "5 customers enter -> Seats available         : " 
         << bestHotWings.GetAvailableSeating() << std::endl;

    // Customers leave
    bestHotWings.ClearSeats(3);
    std::cout << "3 leave           -> Seats available         : " 
         << bestHotWings.GetAvailableSeating() << std::endl;

    bestHotWings.ClearSeats(10);
    std::cout << "10 leave (but only had 3) -> Seats available : " 
         << bestHotWings.GetAvailableSeating() << std::endl;

    // Person example
    std::cout << std::endl << "Person example: " << std::endl 
         << "Default values:" << std::endl;
    Person kyle;
    kyle.Print();
    kyle.SetName("Kyle");
    kyle.SetAge(67);
    std::cout << "After initialization: " << std::endl;
    kyle.Print();

    // Vector of classes 
    std::cout << "Vectors of class objects: Car class" << std::endl;
    std::cout << "vector<Car> = carList;" << std::endl;
    std::vector<Person> people;
    people.push_back(kyle);
    std::cout << "Person at people.at(0).Print(): " << std::endl;
    people.at(0).Print();

    // Car and vehicle
    Vehicle goCart;
    Car mustang;
    std::cout << "Go cart honk: ";
    goCart.Honk();
    std::cout << "Mustang honk: "; 
    mustang.Honk();

    // Planets
    std::cout << std::endl << "Overloaded constructors: Planet class" << std::endl;
    Planet distantPlanet;
    Planet earth("Earth", 3959.0);
    Planet namek("Namek");
    Planet newFoundPlanet(2123.0);

    distantPlanet.Print();
    earth.Print();
    namek.Print();
    newFoundPlanet.Print();

    // Clans
    std::cout << std::endl << "Initializer list: Clan class" << std::endl;
    Clan mcmillian("McMillian");
    Clan hodunks;

    mcmillian.Print();
    hodunks.Print();

    // Arg parser 
    std::cout 
        << std::endl << "'this' keyword: ArgParser class" << std::endl;
    ArgParser argParser;
   
    // Operator overloading example
    std::cout << std::endl 
        << "Operator overloading: WeirdOperators class" << std::endl;
    WeirdOperators wo1(5, 10);
    WeirdOperators wo2(8, 16);
    WeirdOperators wo3;
    std::cout << "wo1 ";
    wo1.Print();

    std::cout << "wo2 ";
    wo2.Print();

    std::cout << "wo1 + wo2 = wo3" << std::endl;
    wo3 = wo1 + wo2;
    wo3.Print();

    std::cout << "wo1 - wo2 = wo3" << std::endl;
    wo3 = wo1 - wo2;
    wo3.Print();
    
    std::cout << "wo1 / wo2 = wo3" << std::endl;
    wo3 = wo1 / wo2;
    wo3.Print();

    std::cout << "wo1 * wo2 = wo3" << std::endl;
    wo3 = wo1 * wo2;
    wo3.Print();
    
    bool isEqual = wo1 == wo2;
    std::cout << "wo1 == wo2 : " << isEqual << std::endl;

    bool isLessThan = wo1 < wo2;
    std::cout << "wo1 < wo2 : " << isLessThan << std::endl;

    bool isGreaterThan = wo1 < wo2;
    std::cout << "wo1 > wo2 : " << isGreaterThan << std::endl;

}


void FourPillarsExample() {

    std::cout << "~~~~~~ FOUR PILLARS OF OOP ~~~~~~~" << std::endl;
    
    SubClass sub;
    sub.SetFirstInt(10);
    sub.SetFirstFloat(3.14);
    sub.SetSecondInt(100);
    sub.SetSecondFloat(2.35);

    // 1. Inheritance
    std::cout << std::endl << " -- INHERITANCE --" << std::endl;

    std::cout << "  Inherited attributes:" << std::endl;
    std::cout << "    firstInteger" << sub.GetFirstInt() << std::endl;
    std::cout << "    firstFloat" << sub.GetFirstFloat() << std::endl;

    std::cout << "  Owned attributes:" << std::endl;
    std::cout << "    secondInteger" << sub.GetSecondInt() << std::endl;
    std::cout << "    secondFloat" << sub.GetSecondFloat() << std::endl;

    // 2. Polymorphism 
    std::cout << std::endl << " -- POLYMORPHISM --" << std::endl;

    std::cout 
        << "  Calling .GetDescription() on base class and sub class" 
        << std::endl;

    Pokemon pidgey = Pokemon("Pidgey");
    std::cout << "  " << pidgey.GetDescription() << std::endl;

    FireType charizard = FireType("Charizard");
    std::cout << "  " << charizard.GetDescription() << std::endl;

}

