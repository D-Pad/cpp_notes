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

    vector<int> vals = nums;
    std::cout << vals.at(0) << std::endl;

}




