#include <iostream>

/*template <class Iter>
void f(Iter first, Iter last)
{
    using value_type = std::remove_reference<decltype(*first)>()::type;
}*/

template <class T>
struct reference_type
{
    using type = T;
};

template <class T>
struct reference_type<T&>
{
    using type = T;
};

template <class T>
struct reference_type<T&&>
{
    using type = T;
};

struct Test
{
    int value;
    Test()
    {
        std::cout << " Test(){} " << std::endl;
    }
    Test (int a)
    {
        value = a;
        std::cout <<  " Test (int){} " <<std::endl;
    }
    Test (const Test& that)
    {
        this->value = that.value;
        std::cout <<  " Test(int, int){} " <<std::endl;
    }
    ~Test()
    {
        std::cout <<  " ~Test " <<std::endl;
    }
};

int main()
{
    Test a;
    Test b(a);
    Test *p = new Test;
    delete p;

    return 0;
}
