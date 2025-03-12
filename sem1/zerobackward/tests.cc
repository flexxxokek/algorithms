#include <gtest/gtest.h>

void solution(std::vector <int>& v);

TEST(solution, 1)
{
    std::vector <int> v = {0, 2, 3, 0, 0, 6, 7};
    std::vector <int> ans = {2, 3, 6, 7, 0, 0, 0};

    solution(v);
    
    EXPECT_EQ(v, ans);
}

TEST(solution, 2)
{
    std::vector <int> v = {0, 2, 3, 0, 0, 0, 2, 3, 6, 7};
    std::vector <int> ans = {2, 3, 2, 3, 6, 7, 0, 0, 0, 0};

    solution(v);
    
    EXPECT_EQ(v, ans);
}