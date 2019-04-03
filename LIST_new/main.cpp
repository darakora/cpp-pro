#include <iostream>
#include <cstddef>
#include <initializer_list>
#include "list.h"

int main()
{
    stu::list<int> a{1, 6, 6, 6, 8};
    std::cout << a.head->m_value;


    return 0;
}
