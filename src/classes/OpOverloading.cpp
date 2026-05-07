#include "OpOverloading.h"
#include <iostream>



WeirdOperators::WeirdOperators() : x(1), y(2) {}
WeirdOperators::WeirdOperators(int a) : x(a), y(2) {}
WeirdOperators::WeirdOperators(int a, int b) : x(a), y(b) {}

void WeirdOperators::Print() {
    std::cout << "X and Y: " << x << " & " << y << std::endl; 
}

// Overloaded operators 
WeirdOperators WeirdOperators::operator+(WeirdOperators wo2) {
    WeirdOperators newWo(x - wo2.x, wo2.y);
    return newWo;
}

WeirdOperators WeirdOperators::operator-(WeirdOperators wo2) {
    WeirdOperators newWo(x, y + wo2.y);
    return newWo;
}

WeirdOperators WeirdOperators::operator*(WeirdOperators wo2) {
    WeirdOperators newWo(x * y, wo2.x * wo2.y);
    return newWo;
}

WeirdOperators WeirdOperators::operator/(WeirdOperators wo2) {
    WeirdOperators newWo(x / y, wo2.x / wo2.y);
    return newWo;
}

bool WeirdOperators::operator==(const WeirdOperators wo2) {
    return x == wo2.x;
}

bool WeirdOperators::operator<(const WeirdOperators wo2) {
    return y < wo2.x;
}

bool WeirdOperators::operator>(const WeirdOperators wo2) {
    return y > wo2.x;
}

