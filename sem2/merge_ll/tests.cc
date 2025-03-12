#include <gtest/gtest.h>
#include <string>

#include "list.hh"



void solution(List& src, List& dst);

TEST(solution, 1)
{
    List src; // 0 2 4 6 7

    Node srcnds[5];

    src.begin = &srcnds[0];

    for(int i = 0; i <= 3; i++)
    {
        srcnds[i].next = srcnds + i + 1;
        srcnds[i].val = 2 * i;
    }
    srcnds[4].val = 7;
    srcnds[4].next = nullptr;   

    List dst; // 0 1 2 3 8

    Node dstnds[5];

    dst.begin = &dstnds[0];

    for(int i = 0; i <=3; i++)
    {
        dstnds[i].next = dstnds + i + 1;
        dstnds[i].val = i;
    }
    dstnds[4].val = 8;
    dstnds[4].next = nullptr;



    solution(src, dst);
    
    
    auto ans = {0, 0, 1, 2, 2, 3, 4, 6, 7, 8};

    //auto ans = {0, 1, 2, 3, 8};
    //auto ans = {0, 2, 4, 6, 7};

    auto i1 = dst.begin;
    auto i2 = ans.begin();

    for(auto i = dst.begin; i != nullptr; i = i->next)
    {
        std::cout << i->val << " ";
    }

    std::cout << "\n";

    while(i1 != nullptr && i2 != ans.end())
    {
        EXPECT_EQ(i1->val, *i2);
        i1 = i1->next;
        i2++;
    }
}