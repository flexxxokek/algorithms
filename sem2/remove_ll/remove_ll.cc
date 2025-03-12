#include <iostream>
#include "list.hh"

bool solution(List& l, int val)
{
    auto prev = l.begin;

    if(prev->val == val)
    {
        l.begin = prev->next;
        //delete prev;

        return true;
    }

    auto cur = prev->next;

    

    while(cur != nullptr)
    {
        if(cur->val == val)
        {
            prev->next = cur->next;
            //delete cur;

            return true;
        } 
    }

    return false;
}