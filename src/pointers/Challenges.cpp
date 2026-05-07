#include "Challenges.h"
#include <iostream>
#include <iomanip>


// Problem 1
class Cylinder {
   public:
      Cylinder();
      void Print();

      int radius;
      int height;
};
Cylinder::Cylinder() {
   radius = 0;
   height = 0;
}

void Cylinder::Print() {
    std::cout << "Cylinder's radius: " << radius << std::endl;
    std::cout << "Cylinder's height: " << height << std::endl;
}

void problemOne() {

    int radiusValue;
    int heightValue;
    
    /* SOLUTION START */
    Cylinder* myCylinder = new Cylinder();
  
    std::cout << "Enter cylinder radius: "; 
    std::cin >> radiusValue;
    std::cout << "Enter cylinder height: "; 
    std::cin >> heightValue;
    
    myCylinder->radius = radiusValue;
    myCylinder->height = heightValue;
    /* SOLUTION END */
    
    myCylinder->Print();

}


// Problem 2
class Lion {
    public:
        Lion(int ageValue, int weightValue);
        void IncreaseAge();
        void Print();
    private:
        int age;
        int weight;
};

Lion::Lion(int ageValue, int weightValue) {
    age = ageValue;
    weight = weightValue;
}

void Lion::IncreaseAge() {
	age = age * 4;
    std::cout << "Lion's age is increased." << std::endl;
}

void Lion::Print() {
    std::cout << "Lion's age: " << age << std::endl;
    std::cout << "Lion's weight: " << weight <<  std::endl;
}

void problemTwo() {

    // Read two integers as the age and the weight of a Lion object. Declare 
    // and assign pointer myLion with a new Lion object using the age and the 
    // weight as arguments in that order. Then call myLion's IncreaseAge() 
    // member function.
    
    /* SOLUTION START */
    int lionAge;
    int lionWeight;

    std::cout << "Enter lion age: "; 
    std::cin >> lionAge;
    std::cout << "Enter lion weight: "; 
    std::cin >> lionWeight;

    Lion* myLion = new Lion(lionAge, lionWeight);
    myLion->IncreaseAge();
    /* SOLUTION END */

    myLion->Print();
}


// Problem 3
class Wire {
    public:
        Wire();
        void Read();
        void Print();
        ~Wire();
    private:
        double voltage;
        double current;
};

Wire::Wire() {
    voltage = 0.0;
    current = 0.0;
}
void Wire::Read() {
    std::cout << "Enter voltage of wire: "; 
    std::cin >> voltage;
    std::cout << "Enter current of wire: "; 
    std::cin >> current;
}   
void Wire::Print() {
    std::cout 
        << "Wire's voltage: " 
        << std::fixed 
        << std::setprecision(1) 
        << voltage 
        << std::endl;
    std::cout 
        << "Wire's current: " 
        << std::fixed 
        << std::setprecision(1) 
        << current 
        << std::endl;
}  
Wire::~Wire() { // Covered in section on Destructors.
    std::cout 
        << "Wire with voltage " 
        << voltage 
        << " and current " 
        << current 
        << " is deallocated." 
        <<  std::endl;
}

void problemThree() {
  
    // Assign pointer myWire with a new Wire object. Call myWire's Read() to 
    // read the object's fields. Then, call myWire's Print() to output the 
    // values of the fields. Finally, delete myWire.
    Wire* myWire = nullptr;
    
    /* SOLUTION START */
    myWire = new Wire();
    myWire->Read();
    myWire->Print();
    delete myWire;
    /* SOLUTION END */

}

// Problem 4
class Donkey {
    public:
        Donkey();
        void Read();
        void Print();
        ~Donkey();
    private:
        int age;
        int weight;
};
Donkey::Donkey() {
    age = 0;
    weight = 0;
}
void Donkey::Read() {
    std::cout << "Enter donkey age: "; 
    std::cin >> age;
    std::cout << "Enter donkey weight: "; 
    std::cin >> weight;
}
void Donkey::Print() {
    std::cout << "Donkey's age: " << age << std::endl;
    std::cout << "Donkey's weight: " << weight << std::endl;
}
Donkey::~Donkey() {
    std::cout 
        << "Donkey with age " 
        << age 
        << " and weight " 
        << weight 
        << " is deallocated." 
        <<  std::endl;
};

void problemFour() {
   
    // Read an integer as the number of Donkey objects. Assign myDonkeys with 
    // an array of that many Donkey objects. For each object, call object's 
    // Read() followed by the object's Print().
    Donkey* myDonkeys = nullptr;
    int count;
    int i;
    
    /* SOLUTION START */
    int numDonkeys;
    std::cout << "Enter the number of Donkey's: ";
    std::cin >> numDonkeys;
    myDonkeys = new Donkey[numDonkeys];
    
    for (int i = 0; i < numDonkeys; ++i) {
       myDonkeys[i].Read();
       myDonkeys[i].Print();
    }
    /* SOLUTION END */
    
    delete[] myDonkeys;
}

void ptrChallengeProblems() {
    problemOne();
    problemTwo();
    problemThree();
    problemFour();
}

