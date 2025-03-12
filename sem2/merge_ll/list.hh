class Node
{
    public:
        int val;
        Node* next;

        Node(int _val) : val(_val), next(nullptr) {};
        Node() = default;
};

class List
{
    public:
        Node* begin;
};
