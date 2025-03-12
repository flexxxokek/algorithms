class Node
{
    public:
        int val;
        Node* next;

        Node(int _val) : val(_val), next(nullptr) {};
};

class List
{
    public:
        Node* begin;
};

bool solution(List& l);