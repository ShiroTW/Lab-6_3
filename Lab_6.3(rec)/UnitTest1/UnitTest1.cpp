#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1(rec) (1)/Lab_6.3_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
			{
				const int n = 3;
				int a[n] = { 6, -4, -2};
				SumOfNegativeElements(a, n, 0);
				int actual = -6;
				Assert::AreEqual(actual, -6);
			}

		TEST_METHOD(TestMethod2)
		{
				const int n = 4;
				int a[n] = {9, -4, -6, 7};
				SumOfNegativeElements(a, n, 0);
				int actual = -10;
				Assert::AreEqual(actual, -10);
		}
	};
}
