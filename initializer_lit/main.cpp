#include <iostream>
#include <initializer_list>

void f (std::initializer_list<int> l)
{
    for(auto i = l.begin(); i != l.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
}

int main()
{
    auto a = {1, 6, 9, 4, 8, 7, 9, 98};
    std::vector<int> {1, 2, 3};
    f({1, 6, 5 ,6 ,6, 9, 5, 6});

    return 0;
}
