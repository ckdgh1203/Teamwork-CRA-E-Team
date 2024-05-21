#include "pch.h"
#include "../Teamwork/calc.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, getMinusTest) {
	Calc calc;

	EXPECT_EQ(calc.getMinus(0, 0), 0);
	EXPECT_EQ(calc.getMinus(2, 1), 1);
	EXPECT_EQ(calc.getMinus(4, 2), 2);
}