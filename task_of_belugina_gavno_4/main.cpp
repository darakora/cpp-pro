#include <iostream>

struct List
{
    struct Node
    {
        int value;
        Node* next = nullptr;
        Node() : next(nullptr) {}
        Node(int v) : value(v) {}
        Node(int v, Node* n) : value(v), next(n) {}
    };

    Node* head = nullptr;
    int m_size = 0;
    List() : head(new Node()) {}

    Node* find_last()
    {
        Node* i = head;
        for(; i->next != nullptr; i = i->next);
        return i;
    }

    void push_back(int v)
    {
        Node* i = find_last();
        i->value = v;
        i->next = new Node();
        ++m_size;
    }
};

int main()
{
    List list;

    for(int i = 0; i < 20; ++i)
    {
        list.push_back(i);
    }

    for(auto i = list.head; i->next != nullptr; i = i->next)
    {
        std::cout << i->value << " ";
    }

    std::cout << "\nEnter k: ";
    int k;
    std::cin>> k;
    --k;

    auto curr = list.head;
    auto b = list.head;
    auto next = list.head->next;
    for(int i = k; i < 20 / k; ++i)
    {
        if(i % k != 0)
        {
            continue;
        }
        b = curr;
        curr = next;
        next = curr->next;
        b->next = next;
    }

    for(auto i = list.head; i->next != nullptr; i = i->next)
    {
        std::cout << i->value << " ";
    }

    return 0;
}
