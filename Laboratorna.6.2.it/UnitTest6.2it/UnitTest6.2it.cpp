#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna.6.2.it/Laboratorna6.2.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62it
{
	TEST_CLASS(UnitTest62it)
	{
	public:
		
			TEST_METHOD(TestFindMinOddIndex)
		{
			const int SIZE = 10;
			int arr[SIZE] = { 2, 4, 1, 6, -3, 8, 7, -5, 10, -1 }; 
			int e = 7; 

			Assert::AreEqual(e, findMinOddIndex(arr, SIZE)); 
		}
	};
}
