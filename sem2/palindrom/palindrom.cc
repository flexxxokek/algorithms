#include <iostream>
#include <deque>
#include <string>
#include <queue>



bool solution1(std::string&& str)
{
    std::deque <char> dq;

    for(const auto i : str)
    {
        dq.push_back(i);
    }

    while(dq.front() == dq.back() && dq.size() > 1)
    {
        dq.pop_back();
        dq.pop_front();
    }

    return dq.size() <= 1;
}

bool solution2(const std::string&& str)
{
    int l = 0, r = str.size() - 1;

    while(l < r)
    {
        if(str[l] != str[r])
        {
            return false;
        }

        l++;r--;
    }

    return true;
}
