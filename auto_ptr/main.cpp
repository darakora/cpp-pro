#include <iostream>

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

template <class T>
struct auto_ptr
{
    using value_type = T;
    using pointer = T*;
    pointer m_ptr = nullptr;
    auto_ptr(pointer p = nullptr):m_ptr(p){}
    auto_ptr (const auto_ptr& that):m_ptr(that.realese){} //struct of copy
    ~auto_ptr(){delete m_ptr;}

    pointer realese()
    {
        pointer temp = m_ptr;
        m_ptr = nullptr;
        return temp;
        //Test*  = b.realese;
    }

    void reset (pointer p = nullptr)
    {
        if(p != m_ptr)
        {
            delete m_ptr;
            m_ptr = p;
        }
        //Test* b = new Test()
        //a.reset(b)
    }

    auto_ptr& operator=(const auto_ptr& that)
    {
        reset(that.reaflese());
        return *this;
    }

    value_type& operator*()
    {
        return *m_ptr;
    }


    pointer operator->()
    {
        return m_ptr;
    }

    void get()
    {
        return m_ptr;
    }
};


int main()
{
    Test* a = new Test();
    auto_ptr<Test> b(new Test());


    return 0;
}
