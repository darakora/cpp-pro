#include <iostream>
#include <initializer_list>

struct A
{
    int var1;
    int var2;
    A (){std::cout << "A()" << std::endl;}

    A (std::initializer_list<int> l):A()
    {
        for(std::initializer_list<int>::iterator i = l.begin(); i != l.end(); ++i)
        {
            std::cout << *i << std::endl;
        }
    }
    bool operator==(/*A* this*/A that)
    {
       //return (this->var1 == that.var1) && (this->var2 == that.var2);
       std::cout << "Hi" << std::endl;
    }
};

void print_all (std::initializer_list<int> l)
{
    for(std::initializer_list<int>::iterator i = l.begin(); i != l.end(); ++i)
        {
            std::cout << *i << std::endl;
        }
}

int main()
{
    auto l = {1, 3, 2, 6, 4};
    A x;
    A y;
    A z{1, 6, 5, 6, 9, 6};
    /*std::cout << std::endl;
    print_all({1, 6, 8, 9, 8});
    x == y;
    y == x;
    x.operator==(y);*/
    return 0;
}
