#include <iostream>
#include <vector>

void solution(std::vector <int>& v)
{
    int l = 0;
    int r = v.size() - 1;

    while(l < r)
    {
        if(v[r] == 0 && v[l] == 1)
        {
            v[r] = 1;
            v[l] = 0;
            l++;
            r--;
        }
        else if(v[l] == 0)
        {
            l++;
        }
        else if(v[r] == 1)
        {
            r--;
        }
    }
}