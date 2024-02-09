#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/main.h"
#include "../BCSRec/main.c"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		//TEST METHOD for Perimeter calculations...
		TEST_METHOD(Get_Preimeter_Valid_Calculations_Result_Pass)
		{
			// arrange 
			int a = 10;
			int b = 8;
			int expected = 28;
			// act 
			int result = getPerimeter(&a, &b);

			//assert 
			Assert::AreEqual(result, expected);
		}
		//TEST METHOD for Area Calculations....
		TEST_METHOD(Get_Area_Valid_Calculations_Result_Pass)
		{
			// arrange 
			int a = 10;
			int b = 8;
			int expected = 80;
			// act 
			int result = getArea(&a, &b);

			//assert 
			Assert::AreEqual(result, expected);
		}
		//TEST METHOD for Length
		TEST_METHOD(ValidInput_SetsLength)
		{
			int length = 0;
			setLength(45, &length);
			Assert::AreEqual(45, length);
		}
		//Ensures valid inputs
		TEST_METHOD(InvalidInput_LimitsLength)
		{
			int length = 0;
			setLength(120, &length);
			Assert::AreEqual(99, length);
		}
		//Ensures no negative inputs
		TEST_METHOD(NegativeInput_NotAllowed)
		{
			int length = 0;
			setLength(-5, &length);
			Assert::AreEqual(1, length);
		}
		//Gets Users inputs for width
		TEST_METHOD(UsualInput_SetsWidth)
		{
			int width = 0;
			setWidth(33, &width);
			Assert::AreEqual(33, width);
		}

		TEST_METHOD(UnusualInput_LimitsWidth)
		{
			int width = 0;
			setWidth(150, &width);
			Assert::AreEqual(99, width);
		}

		TEST_METHOD(SpecialInput_NegativeValueNotAllowed)
		{
			int width = 0;
			setWidth(-5, &width);
			Assert::AreEqual(1, width);
		}
	};
}
