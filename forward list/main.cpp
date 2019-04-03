#include <iostream>
#include "f_list.h"

  int main()
{
    stu::forward_list<int> a {1,23,4,5,6};
    a.sort();
    for(auto i = a.begin(); i != a.end(); ++i)
    {
        std::cout << *i << " ";
    }

    std::cout << std::endl;
    return 0;
}
