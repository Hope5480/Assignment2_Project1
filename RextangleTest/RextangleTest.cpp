#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/main.h"
#include "../BCSRec/main.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RextangleTest
{
	TEST_CLASS(RextangleTest)
	{
	public:
        TEST_METHOD(GetPerimeter_ReturnsCorrectValue)
        {
            int length = 5;
            int width = 10;
            int result = getPerimeter(&length, &width);
            Assert::AreEqual(30, result);
        }
        TEST_METHOD(GetArea_ReturnsCorrectValue)
        {
            int length = 7;
            int width = 8;
            int result = getArea(&length, &width);
            Assert::AreEqual(56, result);
        }
	};
}
