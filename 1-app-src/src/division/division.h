#pragma once

#include <stdexcept>

class DivisionByZero : public std::exception
{
public:
    const char *what()
    {
        return "Division by zero!";
    }
};

struct Fraction
{
    int numerator;
    int denominator;
};

struct DivisionResult
{
    int division;
    int remainder;
};

class Division
{
public:
    explicit Division(Fraction fraction) : fraction{fraction}, result{.division = 0, .remainder = 0} {}

    ~Division() = default;

    DivisionResult divide() const;

private:
    Fraction fraction;
    mutable DivisionResult result;
};
