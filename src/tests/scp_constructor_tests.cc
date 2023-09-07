
#include "scp_matrix_oop_tests.h"

TEST(Constructors, 1) {
  SCPMatrix m1;
  EXPECT_EQ(m1.GetRows(), 1);
  EXPECT_EQ(m1.GetCols(), 1);
}

TEST(Constructors, 2) {
  SCPMatrix m1(5, 1);
  EXPECT_EQ(m1.GetRows(), 5);
  EXPECT_EQ(m1.GetCols(), 1);
}

TEST(Constructors, 3) {
  EXPECT_THROW(SCPMatrix m1(-2, 1), std::invalid_argument);
}

TEST(Constructors, 4) {
  EXPECT_THROW(SCPMatrix m1(-2, -3), std::invalid_argument);
}

TEST(Constructors, 5) {
  EXPECT_THROW(SCPMatrix m1(0, 0), std::invalid_argument);
}

TEST(Constructors, 6) {
  SCPMatrix m1({2, 4});
  EXPECT_EQ(m1.GetRows(), 2);
  EXPECT_EQ(m1.GetCols(), 4);
}

TEST(Constructors, 7) {
  SCPMatrix m1({3, 2, 2.467, 8.14, 5.21, 8.23745, 1.1657, 0.5678});
  EXPECT_EQ(m1.GetRows(), 3);
  EXPECT_EQ(m1.GetCols(), 2);
}

TEST(Constructors, 8) {
  EXPECT_THROW(SCPMatrix m1({1}), std::invalid_argument);
}

TEST(Constructors, 9) { EXPECT_THROW(SCPMatrix m1({}), std::invalid_argument); }
