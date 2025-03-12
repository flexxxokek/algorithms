#include <iostream>
#include "list.hh"

Node* solution(List& l)
{
    if(l.begin == nullptr)
    {
        return nullptr;
    }

    auto p1 = l.begin;
    auto p2 = l.begin;

    while(true)
    {
        if(p2 == nullptr)
        {
            return p1;
        }
        else if(p2->next == nullptr)
        {
            return p1;
        }

        p1 = p1->next;
        p2 = p2->next->next;
    }
}