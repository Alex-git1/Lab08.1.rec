#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab08.1(rec)/Lab08.1(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char testStr1[] = "!!! Hello!!! World!!!";
			Assert::AreEqual(3, Count(testStr1, 0));
		}
	};
}
