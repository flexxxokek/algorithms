#include <iostream>
#include <vector>

void solution(std::vector <int>& v)
{
    int l = 0;
    int m = 0;
    int r = v.size() - 1;

    while(m <= r)
    {
        if(v[m] == 0)
        {
            std::swap(v[m], v[l]);
            l++;
        }
        else if(v[m] == 2)
        {
            std::swap(v[m], v[r]);
            r--;

            if(v[m] == 0)
            {
                std::swap(v[l], v[m]);
                l++;
            }
        }

        m++;
    }
}