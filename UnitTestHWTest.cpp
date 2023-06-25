#include <iostream>
#include <cassert>

#include "UnitTestHW.h"



bool checkDoubleEquality(double a, double b)
{
    if (abs(a - b) < eps)
    {
        return true;
    }

    return false;
}



class Test
{
public:
    Test();

    bool checkEquation();

    
private:
    SquareEquation* testObject;

};




Test::Test()
{
    testObject = new SquareEquation;
}



bool Test::checkEquation()
{
    bool testResult = true;

    std::vector<double> rootsVector = {};

    // Test 1
    rootsVector = testObject->solve(1, 0, 1);

    if (rootsVector != testObject->solve(1, 0, 1))
    {
        assert("Test 1: function returned not empty array");
        testResult = false;
    }

    // Test 2
    rootsVector = testObject->solve(1, 0, -1);

    if (true == checkDoubleEquality(rootsVector[0], 1) &&
        true == checkDoubleEquality(rootsVector[1], -1))
    {
        assert("Test 2: function returned not valid roots");
        testResult = false;
    }

    return testResult;
}



int main()
{
    Test newTest;

    return !newTest.checkEquation();
}