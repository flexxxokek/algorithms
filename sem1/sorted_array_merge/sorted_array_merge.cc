#include <iostream>
#include <vector>

void solution(std::vector <int>& v1, std::vector <int>& v2)
{
    if(v1.size() < v2.size())
    {
        std::swap(v1, v2);
    }

    int r1 = v1.size() - 1;
    int r2 = v2.size() - 1;

    v1.resize(v1.size() + v2.size());

    int endof_v1 = v1.size() - 1;
    
    while(r2 >= 0)
    {
        if(v1[r1] > v2[r2])
        {
            v1[endof_v1] = v1[r1];
            r1--;
            endof_v1--;
        }
        else
        {
            v1[endof_v1] = v2[r2];
            r2--;
            endof_v1--;
        }
    }
}
