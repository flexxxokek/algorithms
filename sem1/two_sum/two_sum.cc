#include <iostream>
#include <vector>

std::pair <int, int> solution(std::vector <int>& nums, int target)
{
    int l = 0;
    int r = nums.size() - 1;

    while(l < r)
    {
        if(nums[l] + nums[r] < target)
        {
            l++;
        }
        else if(nums[l] + nums[r] > target)
        {
            r--;
        }
        else
        {
            return {l, r};
        }
    }

    return {-1, -1};
}
