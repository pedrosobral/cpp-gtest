/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/

class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(nearestToZero, firstClosest)
{
    Rando rando;

    for (size_t i = 1; i < 10; i++) {
        EXPECT_EQ(i, rando.nearestToZero(i, i+1));
    }
}

TEST(nearestToZero, secondClosest)
{
    Rando rando;

    for (size_t i = 1; i < 10; i++) {
        EXPECT_EQ(i, rando.nearestToZero(i+1, i));
    }
}

TEST(nearestToZero, negativeNumbers)
{
    Rando rando;

    for (int i = -1; i < -10; i--) {
        EXPECT_EQ(i, rando.nearestToZero(i-1, i));
    }
}
