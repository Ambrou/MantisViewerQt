#include "stdafx.h"
#include "CppUnitTest.h"
#include <QtTest/QtTest>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			QString str = "Hello";
			Assert::AreEqual(true, str.toUpper() == "HELLO");
		}
	};
}