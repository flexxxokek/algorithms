#include <gtest/gtest.h>
#include <string>

#include <iostream>
#include <deque>
#include <string>
#include <queue>



bool solution(const std::string& base, const std::string& str);

bool solution(const std::string&& base, const std::string&& str);


TEST(solution, trueone)
{
    EXPECT_EQ(solution("hello", "ahellloo"), true);
    EXPECT_EQ(solution("1234", "11223344"), true);
}

TEST(solution, falseone)
{
    EXPECT_EQ(solution("hello", "ahelll"), false);
    EXPECT_EQ(solution("1234", "112233"), false);
}