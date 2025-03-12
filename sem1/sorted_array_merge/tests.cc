#include <gtest/gtest.h>

void solution(std::vector <int>& v1, std::vector <int>& v2);

TEST(solution, 1)
{
    std::vector<int> v1 = {1, 2, 3, 200};
    std::vector<int> v2 = {2, 4, 201};
    std::vector<int> ans = {1, 2, 2, 3, 4, 200, 201};

    solution(v1, v2);

    ASSERT_EQ(v1.size(), ans.size());

    for(int i = 0; i < ans.size(); i++)
    {
        EXPECT_EQ(v1[i], ans[i]);
    }
}