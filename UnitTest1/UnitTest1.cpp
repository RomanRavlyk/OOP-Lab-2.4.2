#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 2.4.2/BitString.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			BitString str;
			str.setSize(19);
			Assert::AreEqual(19, str.getSize());
		}
	};
}
