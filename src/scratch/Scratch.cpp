#include "Scratch.h"
#include <vector>
#include <iostream>

// ---------------------- COPY AND PASTE CODE HERE ------------------------- //

// ------------------------------------------------------------------------- //


void Testing() {
   

    vector<int> nums(4);
    nums.at(0) = 1;
    nums.at(1) = 2;
    nums.at(2) = 3;
    nums.at(3) = 4;

    // 'vals' is a copy of nums
    vector<int> vals = nums;
  
    // 'refVals' is a reference to 'nums'
    vector<int>* refVals = &nums;
    nums.at(0) = 29;

    std::cout << vals.at(0) << std::endl;
    std::cout << refVals->at(0) << std::endl;

}




