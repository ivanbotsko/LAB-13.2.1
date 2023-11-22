#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

float CalculateExpression(float x, float z) {
    float result = 0.0;
    if (z > 5 && z < 10) {
        result = std::min(x, z) * std::max(x + z, x * z);
    }
    else if (z <= 5 || z >= 10) {
        result = std::pow(std::max(std::abs(x - z), z), 2);
    }
    return result;
}

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestExpressionCalculation)
		{
			// Test when z is between 5 and 10
			float x1 = 3.0f;
			float z1 = 7.0f;
			float expectedResult1 = std::min(x1, z1) * std::max(x1 + z1, x1 * z1);
			Assert::AreEqual(expectedResult1, CalculateExpression(x1, z1));

			// Test when z is less than or equal to 5
			float x2 = 6.0f;
			float z2 = 3.0f;
			float expectedResult2 = std::pow(std::max(std::abs(x2 - z2), z2), 2);
			Assert::AreEqual(expectedResult2, CalculateExpression(x2, z2));

			// Test when z is greater than or equal to 10
			float x3 = 5.0f;
			float z3 = 12.0f;
			float expectedResult3 = std::pow(std::max(std::abs(x3 - z3), z3), 2);
			Assert::AreEqual(expectedResult3, CalculateExpression(x3, z3));
		}
	};
}
