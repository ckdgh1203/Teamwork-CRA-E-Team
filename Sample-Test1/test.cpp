#include "pch.h"
#include "../Teamwork/calc.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestName2) {
	Calc calc;
	EXPECT_EQ(2, calc.getSum(1, 1));
}