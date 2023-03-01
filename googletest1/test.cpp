#include "pch.h"
#include "D:\VS\Project1\tmp.h"


TEST(TestCaseName, TestName) {
	Prey pre1("ad", Point2D(1, 2));


  EXPECT_EQ(pre1.getx(), 1);

  pre1.MoveTo(4, 6);
  EXPECT_EQ(pre1.getx(), 3);

  EXPECT_TRUE(true);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}