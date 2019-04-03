#ifndef F_LIST_H
#define F_LIST_H
#include <initializer_list>
#include <algorithm>
#include <iostream>

namespace stu
{
template <class T>
struct forward_list
{
    struct _iterator;
    void sort();
    using value_type = T;
    using reference = T&;
    using const_reference = const reference;
    using difference_type = std::ptrdiff_t;
    using size_type = std::size_t;
    using iterator = _iterator;
    using pointer = T*;

private:
    struct Node
    {
        value_type value;
        Node* next;
        Node ():next(nullptr) {}
        Node (value_type v, Node* n = nullptr):value(v), next(n) {}
    };

    Node* head = nullptr;
    size_type m_size = 0;

    Node* find_last()
    {
        Node* i = head;
        for(; i->next != nullptr; i = i->next);
        return i;
    }

public:

    forward_list():head(new Node()) {}

    void push_back (const_reference v)
    {
        //std::cout << "void push_back (const T& v)" << std::endl;
        Node* temp = find_last();
        temp->next = new Node(v);
        ++m_size;
    }

    void push_back (T&& v)
    {
        //std::cout << "void push_back (const T&& v)" << std::endl;
        Node* temp = find_last();
        temp->next = new Node(v);
        ++m_size;
    }


    forward_list(std::initializer_list<value_type> l):forward_list()
    {
        for(auto i = l.begin(); i != l.end(); ++i)
        {
            push_back(const_cast<const_reference>(*i));
        }
    }

    ///Element access:
    reference front()
    {
        return head->next->value;
    }

    ///Iterators:
    iterator begin()
    {
        return iterator(head->next);
    }

    iterator end()
    {
        return iterator(nullptr);
    }

    iterator before_begin()
    {
        return iterator(head);
    }


    ///Capacity:
    bool empty()
    {
        return head->next == nullptr;
    }

    size_type size() const noexcept
    {
        return m_size;
    }

    size_type max_size()const noexcept
    {
        size_type temp = 0;
        return temp - 1;
    }

    ///Modifiers:


    iterator erase_after(iterator pos)
    {
        iterator i = pos;
        iterator for_del = ++i;
        iterator after_del = ++i;
        pos.m_current->next = after_del.m_current;
        delete for_del.m_current;
        --m_size;
        return after_del;
    }

    iterator erase_after(iterator first, iterator last)
    {
        iterator i = first;
        iterator after_del = last;
        iterator temp;
        for(; i != last; ++i)
        {
            delete temp.m_current;
            temp = i;
        }
        first.m_current->next = last.m_current;
    }

    void clear() noexcept
    {
        Node* temp;
        for(auto i = begin(); i != end(); ++i)
        {
            delete temp;
            temp = i.m_current;
        }
        delete temp;
        head->next = nullptr;
        m_size = 0;
    }

    iterator insert_after(const iterator pos, T value)
    {
        Node* temp = pos.m_current->next;
        pos.m_current->next = new Node(value);
        pos.m_current->next->next = temp;
    }

    struct _iterator
    {
        using iterator_category = std::forward_iterator_tag;
        Node* m_current = nullptr;
        _iterator () = default;
        _iterator (Node* current):m_current(current) {}

        reference operator* ()
        {
            return m_current->value;
        }

        bool operator== (const iterator& that)
        {
            return this->m_current == that.m_current;
        }

        bool operator!= (const iterator& that)
        {
            return !(*this == that);
        }

        operator bool ()
        {
            return m_current != nullptr;
        }

        iterator& operator++ ()
        {
            m_current = m_current->next;
            return *this;
        }

        iterator operator++ (int)
        {
            iterator temp = *this;
            m_current = m_current->next;
            return temp;
        }

        reference operator-> ()
        {
            return m_current->value;
        }

        void sort()
        {
            for(int i = 0; i != m_size; ++i)
            {
                for(auto j = begin()+1; j != end(); ++ j)
                {
                    if(*j > *(j - 1))
                    {
                        std::iter_swap(j, j-1);
                    }
                }
            }
        }



    };
};
}



#endif // F_LIST_H
