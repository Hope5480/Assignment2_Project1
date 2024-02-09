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
	};
}
