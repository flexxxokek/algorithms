#include <gtest/gtest.h>

void solution(std::vector <int>& v);

TEST(solution, 1)
{
    std::vector <int> v = {1, 2, 3, 4, 5, 6, 7};

    solution(v);
    
    EXPECT_EQ(v[0], 2);
    EXPECT_EQ(v[1], 4);
    EXPECT_EQ(v[2], 6);    
}

TEST(solution, 2)
{
    std::vector <int> v = {2, 4, 6, 5, 3, 2};

    solution(v);
    
    EXPECT_EQ(v[0], 2);
    EXPECT_EQ(v[1], 4);
    EXPECT_EQ(v[2], 6);
    EXPECT_EQ(v[3], 2);      
}