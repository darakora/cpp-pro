#include <iostream>
#include "list_h.h"

int main()
{
    stu::list<int> b(1, 2, 3);
    for(auto i = b.begin(); i != b.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
    //std::cout << (b.begin() != b.end());
    b.push_back(4);
    b.push_back(5);
    b.push_back(8);
    b.push_back(6);
    std::cout << b.head->m_value;
    std::cout << b.head->next->m_value;
    return 0;
}
