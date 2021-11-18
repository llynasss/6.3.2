#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ut632
{
	TEST_CLASS(ut632)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k[3] = { 3,2,1 };

			bool p;

			p = check(k, 3, 0, 0);

			Assert::AreEqual(false, p);
		}
	};
}
