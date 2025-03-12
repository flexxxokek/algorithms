#include <iostream>
#include <vector>

void solution(std::vector <int>& nums)
{
    int l = 0;
    int r = nums.size() - 1;

    while(l < r)
    {
        std::swap(nums[l], nums[r]);
        l++;
        r--;
    }
}