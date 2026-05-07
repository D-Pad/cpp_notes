#pragma once 
#include <string>


class BaseClass {
private: 
    int firstInteger;
    float firstFloat;

public:
    void SetFirstInt(int v);
    void SetFirstFloat(float v);

    int GetFirstInt();
    float GetFirstFloat();
};


// It's important to declare the inheriting class as 'public' unless you 
// want all inherited attributes to be private, which happens by default.
class SubClass : public BaseClass {
private: 
    int secondInteger;
    float secondFloat;

public:
    void SetSecondInt(int v);
    void SetSecondFloat(float v);

    int GetSecondInt();
    float GetSecondFloat();
};

// Polymorphism classes
class Business {
   public:
      std::string GetDescription() const;

   protected:
      std::string name;
      std::string address;
};

class CarShop : public Business {
   public:
      std::string GetDescription() const; 

   private:
      int rating;
};

class Pokemon {
protected:
    std::string name;

public:
    virtual std::string GetDescription() const;
    Pokemon(); 
    Pokemon(std::string name);
};

class FireType : public Pokemon {
public:
    // Inherit the base constructor
    FireType(std::string name) : Pokemon(name) {};

    // Polymorph the GetDescription method
    std::string GetDescription() const override; 
};

// ------------------------------ ABSTRACTION ------------------------------ //
// An abstract class is a class that guides the design of subclasses but 
// cannot itself be instantiated as an object. Ex: An abstract Shape class 
// might also specify that any subclass must define a ComputeArea() function.

// Any object class with a "pure virtual function" definition is an abstract
// class. Toe declare a pure virtual function, you must add `= 0` to the end
// of the function definition. Notice the "ComputeArea" function in the Shape
// class below
class Shape {
private:
    std::string name;
    std::string color;

public:
    void SetName(std::string name);
    void SetColor(std::string color);
    virtual float ComputeArea() = 0;  // `= 0` makes this "pure virtual"
};

class Circle {
private:
    std::string name;
    std::string color;

public:
    void SetName(std::string name);
    void SetColor(std::string color);
    float ComputeArea();
};

// A class provides data/behaviors for objects.
// 1. Inheritance creates a Circle subclass that implements behaviors specific 
// to a circle.

// 2. The abstract Shape class specifies "Compute area" is a required behavior 
// of a subclass. Shape does not implement "Compute area", so a Shape object 
// cannot be created.

// 3. The Circle class implements "Compute area". The Circle class is a non 
// abstract, which is also called a concrete class, and Circle objects can be 
// created.


