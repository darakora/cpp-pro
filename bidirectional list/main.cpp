#include <iostream>
#include "list.h"

int main()
{
    list<int> a {1, 2, 3, 0};
    a.sort();
    for(auto i = a.begin(); i != a.end(); ++i)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
    return 0;
}
