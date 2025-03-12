#include <iostream>
#include <vector>
#include <thread>

#include <gtest/gtest.h>

void solution(std::vector <int>& v)
{
    int zeroes = 0;

    for(auto i : v)
    {
        zeroes += i == 0;
    }

    for(int i = 0; i < v.size(); i++)
    {
        if(i < zeroes)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }
}
