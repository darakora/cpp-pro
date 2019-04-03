#include <iostream>

/*template <class T>
struct List
{
    struct Node
    {
        T value;
        Node* next = nullptr;
        Node () = default;
        Node(T v) : value(v){}
    };
};
*/

struct Node
{
    int value;
    Node* next = nullptr;
    Node () = default;
    Node(int v) : value(v) {}
};

int main()
{
    /* List<int>::Node a;
     a.value = 4;
     List<int>::Node b;
     b.value = 5;
     a.next = &b;
     List<int>::Node c;
     c.value = 6;
     a.next->next = &c;
     a.next->next->next = new List<int>::Node(7);
     for (List<int>::Node* i = &a; i != nullptr; i = i->next)
     {
         std::cout << "!" <<  i->value << std::endl;
     }*/
    Node* start;
    start = new Node(5);
    std::cout << start->value <<std::endl;
    start->next = new Node(7);
    std::cout << start->next->value <<std::endl;
    start->next->next = new Node(9);
    std::cout << start->next->next->value <<std::endl;
    start->next->next->next = new Node(11);
    std::cout << start->next->next->next->value <<std::endl;
    return 0;
}
