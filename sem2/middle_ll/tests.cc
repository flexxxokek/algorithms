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

    auto ans = solution(l);
    
    EXPECT_EQ(ans, &nd3);
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
    solution(l);

    auto ans = solution(l);
    
    EXPECT_EQ(ans, &nd2);
}
