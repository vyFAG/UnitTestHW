#include "pch.h"
#include "CppUnitTest.h"
#include "UnitTestHW.h"
#include <algorithm>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;



namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		TEST_METHOD(TestA)
		{
			SquareEquation* testObject = new SquareEquation;

			std::vector<double> rootsVector = {};
			std::vector<double> expectedValueVector = {};

			rootsVector = testObject->solve(1, 0, 1);

			Assert::IsTrue(expectedValueVector == rootsVector);
		}

		TEST_METHOD(TestB)
		{
			SquareEquation* testObject = new SquareEquation;

			std::vector<double> rootsVector = {};
			std::vector<double> expectedValueVector = {1, -1};

			rootsVector = testObject->solve(1, 0, -1);

			Assert::IsTrue(std::equal(rootsVector.begin(), rootsVector.begin() + rootsVector.size() - 1, expectedValueVector.begin()));
		}

		TEST_METHOD(TestC)
		{
			SquareEquation* testObject = new SquareEquation;

			std::vector<double> rootsVector = {};
			std::vector<double> expectedValueVector = { 2, 0.5 };

			rootsVector = testObject->solve(0.4, -1, 0.4);

			Assert::IsTrue(std::equal(rootsVector.begin(), rootsVector.begin() + rootsVector.size() - 1, expectedValueVector.begin()));
		}

		TEST_METHOD(TestD)
		{
			SquareEquation* testObject = new SquareEquation;

			std::vector<double> rootsVector = {};
			std::vector<double> expectedValueVector = {};

			rootsVector = testObject->solve(0, -2, 1);

			Assert::IsTrue(expectedValueVector == rootsVector);
		}
	};
}