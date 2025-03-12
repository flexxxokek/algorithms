#include <gtest/gtest.h>

void solution(std::vector <int>& v);

TEST(solution, 1)
{
    std::vector <int> data = {0, 1, 2, 2, 2, 1, 2, 1, 1, 0, 0, 0, 1};
    std::vector <int> ans = {0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2};

    solution(data);
    
    ASSERT_EQ(ans.size(), data.size()) << "different sizes\n";
    
    for(int i = 0; i < data.size(); i++)
    {
        EXPECT_EQ(ans[i], data[i]) << "wrong at index " << i << '\n';
    }
}

TEST(solution, 2)
{
    std::vector <int> data = {0, 1, 0, 0, 2, 0, 1, 0, 1};
    std::vector <int> ans = {0, 0, 0, 0, 0, 1, 1, 1, 2};

    solution(data);
    
    ASSERT_EQ(ans.size(), data.size()) << "different sizes\n";
    
    for(int i = 0; i < data.size(); i++)
    {
        EXPECT_EQ(ans[i], data[i]) << "wrong at index " << i << '\n';
    }
}