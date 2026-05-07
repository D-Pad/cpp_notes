#include "ExHandlers.h"
#include <iostream>
#include <string>

// +-------------------+------------------------------------------------------+
// |      *TYPE*       |            *REASON EXCEPTION IS THROWN*              |
// |-------------------+------------------------------------------------------|
// | bad_alloc         | Failure in allocating memory                         |
// |-------------------+------------------------------------------------------|
// | ios_base::failure | Failure in a stream (Ex: cin, stringstream, fstream) |
// |-------------------+------------------------------------------------------|
// | logic_error       | To report errors in a program's logic. Ex:           | 
// |                   | out_of_range error (index out of bounds)             |
// |-------------------+------------------------------------------------------|
// | runtime_error     | To report errors that can only be detected at        | 
// |                   | runtime. Ex: overflow_error (arithmetic overflow)    |
// +-------------------+------------------------------------------------------+
// Source: https://cplusplus.com


// Constructor: must call base class constructor
NumError::NumError(
    const std::string& msg
) : runtime_error(msg) {}


InvalidStringError::InvalidStringError(
    const std::string& msg
) : runtime_error(msg) {}


InvalidStringError::InvalidStringError(
    const std::string& msg,
    const InvalidStringType errType
) : runtime_error(msg) {
    this->errType = errType;
}


InvalidStringType InvalidStringError::getErrorType() const {
    return errType;  
}


int ExceptionTest() {

    int num = -1;

    try {
        if (num < 0) {
            // Throw a custom error message
            throw NumError("Error: number cannot be negative");
        }
    } 
    catch (const NumError& e) {
        // Display the error message using .what()
        std::cout << e.what() << std::endl;
    }

    std::string sample = "Some test message";
    try {
        
        if (sample.size() < 50) {
            throw InvalidStringError("Invalid string length", StringLength);
        }
        else if (sample.find('X') != std::string::npos) {
            throw InvalidStringError("Invalid character", StringBadCharacter);
        }
        else {
            throw InvalidStringError("Generic string error");
        }
    
    }
    catch (const InvalidStringError& e) {

        InvalidStringType eType = e.getErrorType(); 
        
        if (eType == StringLength || eType == StringBadCharacter) {
            std::cout << e.what() << std::endl;
        }
        else {
            std::cout << "Generic string error" << std::endl;
        }
    
    }

    // Handling multiple error types at once
    try {
        if (num > 0) {
            throw NumError("Invalid input value");
        }
        else {
            throw InvalidStringError("Invalid string");
        }
    }
    catch (const NumError& e) {
        std::cout << "Num or String error: Num" << std::endl;
    }
    catch (const InvalidStringError& e) {
        std::cout << "Num or String error: String" << std::endl;
    }

    return 0;

}

