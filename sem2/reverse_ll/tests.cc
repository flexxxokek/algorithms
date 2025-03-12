#include <gtest/gtest.h>

#include "list.hh"

void solution(List& list);

TEST(solution, 1)
{
    List l;

    Node nd1(1), nd2(2), nd3(3), nd4(4), nd5(5);
    l.begin = &nd1;

    nd1.next = &nd2;
    nd2.next = &nd3;
    nd3.next = &nd4;
    nd4.next = &nd5;
    nd5.next = nullptr;

    solution(l);
    
    
    auto ans = {5, 4, 3, 2, 1};

    auto i1 = l.begin;
    auto i2 = ans.begin();

    while(i1 != nullptr || i2 != ans.end())
    {
        EXPECT_EQ(i1->val, *i2);
        i1 = i1->next;
        i2++;
    }
}


TEST(solution, 2)
{
    List l;

    Node nd1(3), nd2(2), nd3(3), nd4(4), nd5(1);
    l.begin = &nd1;

    nd1.next = &nd2;
    nd2.next = &nd3;
    nd3.next = &nd4;
    nd4.next = &nd5;
    nd5.next = nullptr;

    solution(l);
    
    
    auto ans = {1, 4, 3, 2, 3};

    auto i1 = l.begin;
    auto i2 = ans.begin();

    while(i1 != nullptr || i2 != ans.end())
    {
        EXPECT_EQ(i1->val, *i2);
        i1 = i1->next;
        i2++;
    }
}
