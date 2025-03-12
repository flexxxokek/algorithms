#include <gtest/gtest.h>

#include "list.hh"



TEST(solution, 1)
{
    List l;

    Node nd0(0), nd1(1), nd2(2), nd3(3), nd4(4), nd5(5);
    l.begin = &nd0;

    nd0.next = &nd1;
    nd1.next = &nd2;
    nd2.next = &nd3;
    nd3.next = &nd4;
    nd4.next = &nd5;
    nd5.next = nullptr;

    EXPECT_EQ(solution(l, 1), true);

    auto ans = {0, 2, 3, 4, 5};

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

    Node nd0(0), nd1(3), nd2(2), nd3(3), nd4(4);
    l.begin = &nd0;

    nd0.next = &nd1;
    nd1.next = &nd2;
    nd2.next = &nd3;
    nd3.next = &nd4;
    nd4.next = nullptr;
    EXPECT_EQ(solution(l, 0), true);

    auto ans = {3, 2, 3, 4};
    
    auto i1 = l.begin;
    auto i2 = ans.begin();

    while(i1 != nullptr || i2 != ans.end())
    {
        EXPECT_EQ(i1->val, *i2);
        i1 = i1->next;
        i2++;
    }
}
