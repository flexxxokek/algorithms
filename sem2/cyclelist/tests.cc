#include <gtest/gtest.h>

#include "list.hh"

TEST(solution, cycled)
{
    List l;


    Node nd1(1), nd2(2), nd3(3), nd4(4), nd5(5);
    l.begin = &nd1;

    nd1.next = &nd2;
    nd2.next = &nd3;
    nd3.next = &nd4;
    nd4.next = &nd5;
    nd5.next = &nd1;

    EXPECT_EQ(solution(l), true);
}

TEST(solution, not_cycled)
{
    List l;


    Node nd1(1), nd2(2), nd3(3), nd4(4), nd5(5);
    l.begin = &nd1;

    nd1.next = &nd2;
    nd2.next = &nd3;
    nd3.next = &nd4;
    nd4.next = &nd5;
    nd5.next = nullptr;

    EXPECT_EQ(solution(l), false);
}