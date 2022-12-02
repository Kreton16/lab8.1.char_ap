#include "pch.h"
#include "CppUnitTest.h"
#include "../pr8.1.char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101] = { 'a', 'b', 'g', 'a', 'a', 'c', 'c', 'c', 'h', 'j', 'u', 'i', 'a', 'a', 'n', 'm', 'k', 'c' };
			int k = Count(str);
			Assert::AreEqual(k, 4);
		}
	};
}
