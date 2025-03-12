#include <iostream>

#include "list.hh"

bool solution(List& l)
{
    if(l.begin == nullptr)
    {
        return false;
    }

    auto p1 = l.begin;
    auto p2 = l.begin;

    while(true)
    {
        if(p2->next == nullptr)
        {
            return false;
        }
        else if(p2->next->next == nullptr)
        {
            return false;
        }

        p1 = p1->next;
        p2 = p2->next->next;

        if(p1 == p2)
        {
            return true;
        }
    }
}
