#include <gtest/gtest.h>
#include <string>

#include <iostream>
#include <deque>
#include <string>
#include <queue>



bool solution1(std::string&& str);

bool solution2(const std::string&& str);

TEST(solution, trueone)
{
    EXPECT_EQ(solution1("oolloo"), true);
    EXPECT_EQ(solution1("aba"), true);
    EXPECT_EQ(solution1("uuuiiiuuu"), true);

    EXPECT_EQ(solution2("oolloo"), true);
    EXPECT_EQ(solution2("aba"), true);
}

TEST(solution, falseone)
{
    EXPECT_EQ(solution1("hello"), false);
    EXPECT_EQ(solution1("1234"), false);

    EXPECT_EQ(solution2("hello"), false);
    EXPECT_EQ(solution2("1234"), false);
}