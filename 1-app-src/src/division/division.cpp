#include "division.h"

DivisionResult Division::divide() const
{
    if (fraction.denominator == 0)
    {
        throw DivisionByZero();
    }

    result.division = fraction.numerator / fraction.denominator;
    result.remainder = fraction.numerator % fraction.denominator;

    return result;
}