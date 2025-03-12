#include <iostream>
#include <vector>

void reverse(std::vector <int>& nums, int l, int r)
{
    while(l < r)
    {
        std::swap(nums[l], nums[r]);
        l++;
        r--;
    }
}

void solution(std::vector <int>& nums, int k)
{
    reverse(nums, 0, nums.size() - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, nums.size() - 1);
}

