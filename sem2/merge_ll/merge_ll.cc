#include <iostream>

#include "list.hh"

void solution(List& src, List& dst)
{
    Node nd;
    Node* dummy = &nd;
    dummy->next = src.begin;

    auto prev = dummy;
    auto cur = dst.begin;

    auto i = src.begin;
    
    while(i != nullptr)
    {
        if(cur == nullptr)
        {
            prev->next = i;
            prev = i;
            i = i->next;
            std::cout << (int) (i->next == i);
        }
        else if(i->val < cur->val)
        {
            prev->next = i;
            auto tmp = i->next;
            i->next = cur;
            i = tmp;
        }
        else
        {
            cur = cur->next;
            prev = prev->next;
        }

        std::cout << i->val;

    }

    dst.begin = dummy->next;
}