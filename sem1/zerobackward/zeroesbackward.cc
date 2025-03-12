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

void rotate(std::vector <int>& nums, int l, int r, int k)
{
    if(k == 0)
    {
        return;
    }

    reverse(nums, l, r);
    reverse(nums, l, l + k - 1);
    reverse(nums, l + k, r);
}

void solution(std::vector <int>& v)
{
    int l = 0;

    int zeroInd = v.size() - 1;

    int i = 0;

    while(l + i < zeroInd)
    {
        while(v[zeroInd] == 0)
        {
            zeroInd--;
        }

        while(v[l] != 0)
        {
            l++;
        }

        while(v[l + i] == 0 && l + i < zeroInd)
        {
            i++;
        }

        std::cout << "zeroIND:" << zeroInd << "\n" << "l:" << l << "\n" << "i:" << i << "\n";

        rotate(v, l, zeroInd, zeroInd - l + 1 - i);

        for(auto i : v)
        {
            std::cout << i << " ";
        }

        std::cout << "\n";

        zeroInd -= i;
        l += i;
        i = 0;
    }
}