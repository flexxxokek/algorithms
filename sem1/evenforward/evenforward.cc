#include <iostream>
#include <vector>

void solution(std::vector <int>& v)
{
    int evenInd = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] % 2 == 0)
        {
            std::swap(v[evenInd], v[i]);
            evenInd++;
        }
    }
}