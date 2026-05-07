#pragma once 
#include <string>
#include <vector>


// Using the 'this' keyword for constructors that have parameter names the same
// as attribute names.
class ArgParser {
private: 
    std::vector<std::string> args;

public:
    ArgParser();
    ArgParser(std::vector<std::string> args);
};


