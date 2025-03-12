#include <iostream>

#include "list.hh"

void solution(List& src, List& dst)
{
    Node nd;
    Node* dummy = &nd;
    dummy->next = dst.begin;

    auto prev = dummy;
    auto cur = dst.begin;

    auto i = src.begin;
    
    while(i != nullptr)
    {
        if(cur == nullptr)
        {
            prev->next = i;
        }
        else if(i->val < cur->val)
        {
            auto tmp = i->next;
            prev->next = i;
            i->next = cur;
            prev = i;
            i = tmp;
        }
        else    
        {
            cur = cur->next;
            prev = prev->next;
        }
    }

    dst.begin = dummy->next;
}