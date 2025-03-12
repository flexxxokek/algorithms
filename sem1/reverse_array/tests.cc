#include <gtest/gtest.h>

void solution(std::vector <int>& nums);

TEST(solution, 1)
{
    std::vector<int> data = {1, 2, 3, 99, 101, 200};
    std::vector<int> ans = {200, 101, 99, 3, 2, 1};

    solution(data);

    ASSERT_EQ(data.size(), ans.size());

    for(int i = 0; i < data.size(); i++)
    {
        EXPECT_EQ(data[i], ans[i]);
    }
}