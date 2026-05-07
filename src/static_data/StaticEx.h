#pragma once 
#include <iostream>
using namespace std;


class Store {
   public:
      Store(string storeName, string storeType);
      int getId();
      static int nextId;   // Declare static member variable  
   private:
      string name = "None";
      string type = "None";
      int id = 0;
};

void StaticExFn();


