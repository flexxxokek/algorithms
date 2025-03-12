#include <iostream>
#include <deque>
#include <string>
#include <queue>



bool solution(const std::string& base, const std::string& str)
{

    std::queue <char> q;

    for(const auto i : base)
    {
        q.push(i);
    }

    for(const auto i : str)
    {
        if(q.front() == i)
        {
            q.pop();
        }
    }

    return q.empty();
}

bool solution(const std::string&& base, const std::string&& str)
{
    std::queue <char> q;

    for(const auto i : base)
    {
        q.push(i);
    }

    for(const auto i : str)
    {
        if(q.front() == i)
        {
            q.pop();
        }
    }

    return q.empty();
}
