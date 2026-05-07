#pragma once 
#include <stdexcept>
#include <string>


class NumError : public std::runtime_error {
public: 
    // Constructor requires a message
    NumError(const std::string& msg);
};


enum InvalidStringType {
    Generic,
    StringLength,
    StringBadCharacter
};


class InvalidStringError : public std::runtime_error {
public:
    InvalidStringError(const std::string& msg);
    InvalidStringError(const std::string& msg, const InvalidStringType err);
    InvalidStringType getErrorType() const;

private:
    InvalidStringType errType;
};


// Test function
int ExceptionTest();


