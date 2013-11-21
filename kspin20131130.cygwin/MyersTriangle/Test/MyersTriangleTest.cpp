#include "CppUTest\TestHarness.h"

extern "C"
{
#include "MyersTriangle.h"
}

TEST_GROUP(MyersTriangle)
{
	void setup()
	{
	
	}

	void teardown()
	{

	}
};

IGNORE_TEST(MyersTriangle, FirstTest)
{
	CHECK_EQUAL(1, 2);
}