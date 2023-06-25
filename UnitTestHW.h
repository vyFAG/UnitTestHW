#pragma once

#include <vector>
#include <iostream>
#include <cmath>



class SquareEquation
{
public:
    std::vector<double> solve(double a, double b, double c)
    {
        double discriminant = std::pow(b, 2) - 4 * a * c;

        if (discriminant < 0)
        {
            return std::vector<double>();
        }

        return std::vector<double>();
    }
};