#pragma once 


class WeirdOperators {
private:
    int x;
    int y;

public:
    WeirdOperators();
    WeirdOperators(int x);
    WeirdOperators(int x, int y);

    WeirdOperators operator+(WeirdOperators);
    WeirdOperators operator-(WeirdOperators);
    WeirdOperators operator*(WeirdOperators);
    WeirdOperators operator/(WeirdOperators);
    bool operator==(const WeirdOperators);
    bool operator<(const WeirdOperators);
    bool operator>(const WeirdOperators);

    void Print
    ();
};

