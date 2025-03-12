#include <iostream>
#include "list.hh"

void solution(List& list)
{
    if(list.begin == nullptr)
    {
        return;
    }

    Node* l = nullptr;
    Node* m = list.begin;
    Node* r = list.begin->next;

    while (r != nullptr)
    {
        m->next = l;
        l = m;
        m = r;
        r = r->next;
    }

    m->next = l;
    list.begin = m;
}