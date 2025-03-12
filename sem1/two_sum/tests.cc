#include <gtest/gtest.h>

std::pair <int, int> solution(std::vector <int>& nums, int target);

TEST(solution, 1)
{
    std::vector<int> data = {1, 2, 3, 99, 101, 200};

    auto test = solution(data, 104);
    
    EXPECT_EQ(test.first, 2) << "left number is wrong";
    EXPECT_EQ(test.second, 4) << "right number is wrong";

    test = solution(data, 201);

    EXPECT_EQ(test.first, 0) << "left number is wrong";
    EXPECT_EQ(test.second, 5) << "right number is wrong";
}

TEST(solution, 2)
{
    std::vector <int> data = {0, 1, 100, 101, 999};
    
    auto test = solution(data, 104);
    
    EXPECT_EQ(test.first, -1) << "left number is wrong";
    EXPECT_EQ(test.second, -1) << "right number is wrong";

    test = solution(data, 201);

    EXPECT_EQ(test.first, 2) << "left number is wrong";
    EXPECT_EQ(test.second, 3) << "right number is wrong";

    test = solution(data, 200);

    EXPECT_EQ(test.first, 2) << "left number is wrong";
    EXPECT_EQ(test.second, 2) << "right number is wrong";
}