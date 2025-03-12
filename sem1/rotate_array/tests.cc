#include <gtest/gtest.h>

void solution(std::vector <int>& nums, int k);

TEST(solution, 1)
{
    std::vector <int> v = {1, 2, 3, 4, 5, 6, 7};
    std::vector <int> ans = {5, 6, 7, 1, 2, 3, 4};

    solution(v, 3);
    
    EXPECT_EQ(v, ans);
}

TEST(solution, 2)
{
    std::vector <int> v = {1, 2, 3, 4, 5};
    std::vector <int> ans = {2, 3, 4, 5, 1};

    solution(v, 4);

    EXPECT_EQ(v, ans);
}