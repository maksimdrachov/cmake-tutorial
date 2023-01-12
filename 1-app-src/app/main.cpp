#include <iostream>
#include "division.h"

const std::string HEADER = "Welcome to the Fraction Calculator!";
const std::string USAGE = "Usage: ./fraction <numerator> <denominator>\n"
                          "Computes the result of a fractional division,\n"
                          "and reports both the result and the remainder.\n";

int main(int argc, const char *argv[])
{
    Fraction f;

    std::cout << HEADER << std::endl;

    // ensure the correct number of parameters are used
    if (argc != 3)
    {
        std::cout << USAGE << std::endl;
        return EXIT_FAILURE;
    }

    f.numerator = atoll(argv[1]);
    f.denominator = atoll(argv[2]);

    Division d = Division(f);
    try
    {
        DivisionResult r = d.divide();

        std::cout << "Division: " << f.numerator << "/" << f.denominator << " = " << r.division << std::endl;
        std::cout << "Remainder: " << f.numerator << "%" << f.denominator << r.remainder << std::endl;
    }
    catch (DivisionByZero excp)
    {
        std::cout << "Caught exception!" << std::endl;
        std::cout << excp.what() << std::endl;
    }

    return EXIT_SUCCESS;
}