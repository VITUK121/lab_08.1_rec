#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_08.1_rec/lab_08.1_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest081rec
{
	TEST_CLASS(UnitTest081rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char test[] = "while or not while? hmm...";
			Assert::AreEqual(2, Count(test, 0));
		}
	};
}
