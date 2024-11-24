#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.3(rec)/Lab 6.3_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 2;
			int a[n] = {2, -7};
			SumOfNegativeElements(a, n);
			int actual = -7;
			Assert::AreEqual(actual, -7);
		}

		TEST_METHOD(TestMethod2)
		{
			const int n = 4;
			int a[n] = {2, -7, -4, 3};
			SumOfNegativeElements(a, n);
			int actual = -11;
			Assert::AreEqual(actual, -11);
		}
	};
}
