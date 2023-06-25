#pragma once

#include <vector>
#include <iostream>
#include <cmath>



const double eps = 0.0000000000001;



class SquareEquation
{
public:
    std::vector<double> solve(double a, double b, double c)
    {
        double discriminant = std::pow(b, 2) - 4 * a * c;
        std::vector<double> roots = {};

        if (discriminant < 0)
        {
            return roots;
        }

        if (discriminant > 0)
        {
            roots.push_back((-b + sqrt(discriminant)) / (2 * a));
            roots.push_back((-b - sqrt(discriminant)) / (2 * a));

            return roots;
        }

        return std::vector<double>();
    }
};