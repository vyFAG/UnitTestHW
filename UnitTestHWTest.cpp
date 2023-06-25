#include <iostream>
#include <cassert>

#include "UnitTestHW.h"

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

    if (std::vector<double>() != testObject->solve(1, 0, 1))
    {
        assert("Test 1: function returned not empty array");
        testResult = false;
    }

    if (std::vector<double>(1, -1) != testObject->solve(1, 0, -1))
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