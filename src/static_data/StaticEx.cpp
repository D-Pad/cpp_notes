#include "StaticEx.h"


// The keyword static indicates a variable is allocated in memory only once 
// during a program's execution. Static variables are allocated memory once 
// and reside in the program's static memory region for the entire program. 
// Thus, a static variable retains a value throughout the program.

// In a class, a static data member is a data member of the class instead of 
// a data member of each class object. Thus, static data members are 
// independent of any class object, and can be accessed without creating a 
// class object.

// A static data member is declared inside the class definition, but must 
// also be defined outside the class declaration. Within a class function, a 
// static data member can be accessed just by variable name. A public static 
// data member can be accessed outside the class using the scope resolution 
// operator: ClassName::variableName.
Store::Store(string storeName, string storeType) {
   name = storeName;
   type = storeType;
   id = nextId;   // Assign object id with nextId
      
   ++nextId;      // Increment nextId for next object to be created
}

int Store::getId() {
    return id; 
}

int Store::nextId = 101; // Define and initialize static data member

void StaticExFn() {
   
   Store store1("Macy's", "Department");
   Store store2("Albertsons", "Grocery");
   Store store3("Ace", "Hardware");

   cout << "Store 1's ID: "<< store1.getId() << endl;
   cout << "Store 2's ID: "<< store2.getId() << endl;
   cout << "Store 3's ID: "<< store3.getId() << endl;
   cout << "Next ID: " << Store::nextId << endl;

}

