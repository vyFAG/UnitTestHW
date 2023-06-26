#pragma once

#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>



class SquareEquation
{
public:
    std::vector<double> solve(double a, double b, double c)
    {
        std::vector<double> roots = {};

        long long firstRootRound;
        long long secondRootRound;

        if (fabs(fabs(a) - 0) <= std::numeric_limits<double>::epsilon())
        {
            return roots;
        }

        double discriminant = std::pow(b, 2) - 4 * a * c;

        if (discriminant < 0)
        {
            return roots;
        }

        if (fabs(fabs(discriminant) - 0) <= std::numeric_limits<double>::epsilon())
        {
            roots.push_back(round((- b / (2 * a)) * 10000000) / 10000000);

            return roots;
        }

        if (discriminant > 0)
        {
            roots.push_back(round((-b + sqrt(discriminant)) / (2 * a) * 10000000) / 10000000);
            roots.push_back(round((-b - sqrt(discriminant)) / (2 * a) * 10000000) / 10000000);

            return roots;
        }

        return std::vector<double>();
    }
};