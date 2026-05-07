#include "Collections.h"
#include <map>
#include <string>
#include <iostream>


/*
# Map container

A programmer may wish to lookup values or elements based on another value, 
such as looking up an employee's record based on an employee ID. The map 
class within the C++ Standard Template Library (STL) defines a container that 
associates (or maps) keys to values. #include <map> enables use of a map.

The map type is an ADT implemented as a templated class (discussed elsewhere) 
that supports different types of keys and values. Generically, a map can be 
declared and created as map<K, V> newMap; where K represents the map's key 
type and V represents the map's value type.

The emplace() function associates a key with the specified value. If the key 
does not already exist, a new entry within the map is created. If the key 
already exists, the associated map entry is not updated. Thus, a map 
associates at most one value for a key.

The at() function returns the value associated with a key, such as 
statePopulation.at("CA").

A map entry can be updated by assigning the entry with a new value. Ex: 
statePopulation.at("CA") = 39776830;

-------------------------------------------------------------------------------

# Determining if a key exists:

If the map does not contain the specified key, the at() function throws an 
out_of_range exception. A programmer can use the count() function to check if 
a map contains the specific key. count() returns 1 if the key exists and 0 
otherwise. In the program above, statePopulation.count("NY") would return 0.
*/


/*
+-----------+-----------------------------------------------------------------+
| emplace() | emplace(key, value)                                             |
|           |                                                                 |
|           | Associates key with specified value. If key already exists, the | 
|           | map entry is not changed.                                       |
+-----------+-----------------------------------------------------------------+
| at()      | at(key)                                                         |
|           |                                                                 |
|           | Returns the entry associated with key. If key does not exist,   | 
|           | throws an out_of_range exception.                               |
+-----------+-----------------------------------------------------------------+
| count()   | count(key)                                                      |
|           |                                                                 |
|           | Returns 1 if the key exists, otherwise returns 0                |
+-----------+-----------------------------------------------------------------+
| erase()   | erase(key)                                                      |
|           |                                                                 |
|           | Removes the map entry for the specified key if the key exists.  | 
+-----------+-----------------------------------------------------------------+
| clear()   | clear()                                                         |
|           |                                                                 |
|           | Removes all map entries                                         |
+-----------+-----------------------------------------------------------------+
*/

void MapExample() {

    std::map<std::string, int> inventory;    

    // Add keys and values to the map
    inventory.emplace("Onions", 10);
    inventory.emplace("Carrots", 7);
    
    // Check if a key exists with the 'count' method
    if (inventory.count("Apples") != 1) {
        std::cout << "Ordering more apples..." << std::endl;
        inventory.emplace("Apples", 25);
    }

    // Fetch values from map keys
    std::cout << "Onions : " << inventory.at("Onions") << std::endl;
    std::cout << "Apples : " << inventory.at("Apples") << std::endl;
    std::cout << "Carrots: " << inventory.at("Carrots") << std::endl;

    // Erase a value by key name 
    inventory.erase("Onions");
    if (inventory.count("Onions") == 0) {
        std::cout << "No more onions..." << std::endl;
    }

    // Clear all data in the map 
    inventory.clear();
    if (inventory.count("Carrots") == 0) {
        std::cout << "The store is empty" << std::endl;
    }

}


