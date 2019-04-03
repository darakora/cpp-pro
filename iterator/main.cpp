#include <iostream>
#include <vector>
#include <algorithm>
#include "reverse_iterator.h"

namespace stu
{
    template <class T>
    struct vector
    {
        using value_type = T;
        using pointer = T*;
        using size_type  = unsigned int;
        using difference_type = std::ptrdiff_t;
        using iterator = T*;
        using reverse_iterator = stu::reverse_iterator<T*>;
        using reference = T&;
        using const_reference = const reference;
        size_type m_capasity;
        size_type m_size;
        pointer storage;
        vector ():m_size(0),m_capasity(2),storage(new value_type[m_capasity]){}
        void reallocate ()
        {
            m_capasity *= 2;
            pointer temp = new value_type [m_capasity];
            std::copy(storage, storage + m_size, temp);
            delete[] storage;
            storage = temp;
        }
        void push_back (value_type value)
        {
            if (m_size == m_capasity)
            {
                reallocate();
            }
            storage[m_size++] = value;
        }
        vector(std::initializer_list<value_type> l):vector()
        {
            for(auto i = l.begin(); i != l.end(); ++i)
            {
                push_back(*i);
            }
        }
        iterator begin()
        {
            return storage;
        }
        iterator end()
        {
            return storage + m_size;
        }
        reverse_iterator rbegin ()
        {
            return reverse_iterator(storage + (m_size - 1));
        }
        reverse_iterator rend ()
        {
            return reverse_iterator (storage - 1);
        }
    };
}


int main()
{
    int arr[]{1, 2, 3, 6, 5, 2};
   // std::cout << *(arr + 2);
    /*std::vector<int> v1{1, 0, 8, 9, 0, 5};
    std::vector<int>::iterator begin_ = std::find(v1.begin(), v1.end(), 0);
    std::vector<int>::reverse_iterator end_ = std::find(v1.rbegin(), v1.rend(), 0);
    auto dist = v1.end() - v1.begin();*/
    stu::vector<int> v {1, 6, 9, 59, 9, 5};
    for(stu::vector<int>::reverse_iterator i = v.rbegin(); i != v.rend(); ++i)
    {
      // std::cout << *i << std::endl;
    }
    std::cout << *(v.rbegin() + 3) << std::endl;
    std::cout << v.rbegin() - v.rend() << std::endl;

    return 0;
}
