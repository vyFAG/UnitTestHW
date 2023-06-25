#include <iostream>
#include "UnitTestHW.h"



std::vector<double> SquareEquation::solve(double a, double b, double c)
{
    double discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant < 0)
    {
        return std::vector<double>();
    }
}



int main()
{
    std::cout << "Hello World!\n";
}