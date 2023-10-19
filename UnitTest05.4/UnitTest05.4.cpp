#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-05.4/PR-05.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest054
{
	TEST_CLASS(UnitTest054)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = S0(1,1);
			Assert::AreEqual(t,2.306930000000000000);
		}
	};
}
