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
        std::vector<double> roots;

        if (discriminant < 0)
        {
            return roots;
        }

        if (discriminant > 0)
        {
            roots.push_back((-b + sqrt(discriminant)) / (2 * a));
            roots.push_back((-b - sqrt(discriminant)) / (2 * a));
        }

        return std::vector<double>();
    }
};