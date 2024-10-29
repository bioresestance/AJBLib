#include <gtest/gtest.h>

// A simple test case to verify that Google Test is working
TEST(SanityTest, BasicAssertions)
{
    // Expect two values to be equal
    EXPECT_EQ(1, 1);

    // Expect two values to be not equal
    EXPECT_NE(1, 2);

    // Expect true to be true
    EXPECT_TRUE(true);

    // Expect false to be false
    EXPECT_FALSE(false);
}
