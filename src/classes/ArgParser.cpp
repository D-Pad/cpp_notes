#include "ArgParser.h"


ArgParser::ArgParser() {
    args = std::vector<std::string>(2);
}

// Notice the 'this' keyword in the constructor below
ArgParser::ArgParser(std::vector<std::string> args) {
    this->args = args;
}
