#include <iostream>

struct List
{
    struct Node
    {
        Node* next = nullptr;
        int value;
        Node () = default;
        Node (int v): value(v) {};
    };
    Node* head = nullptr;
    List () = default;
    Node* find_last ()
    {
        Node* i = head;
        for(; i->next != nullptr; i = i->next);
        return i;
    }
    void push_back (int value)
    {
        if (head == nullptr)
        {
            head = new Node(value);
        }
        else
        {
            Node* temp = find_last();
            temp->next = new Node(value);
        }

    }
    List(std::initializer_list<int> l)
    {
        for(auto i = l.begin(); i != l.end(); ++i)
        {
            push_back(*i);
        }
    }

    struct iterator
    {
        Node* temp = nullptr;
        iterator () = default;
        iterator (Node* v):temp(v) {};
        int& operator* ()
        {
            return temp->value;
        }
        void operator++ ()
        {
            temp = temp->next;
        }
        bool operator!= (iterator that)
        {
            return temp != that.temp;
        }
    };
    iterator begin()
    {
        return iterator(head);
    };
    iterator end()
    {
        return iterator();
    };

};

int main()
{
    List l{1, 3, 6, 2, 6,3};

    l.push_back(5);
    l.push_back(6);
    l.push_back(8);
    l.push_back(9);
    l.push_back(11);
    for(List::iterator i = l.begin(); i != l.end(); ++i)
    {
        std::cout << *i << std::endl;
    }

    return 0;
}
