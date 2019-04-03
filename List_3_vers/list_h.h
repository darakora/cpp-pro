#ifndef LIST_H_H_INCLUDED
#define LIST_H_H_INCLUDED
#include <stddef.h>
#include <initializer_list>

namespace stu
{
template <class T>
struct list
{
    struct Node
    {
        Node* next = nullptr;
        T m_value;
        Node () = default;
        Node (T value): m_value(value) {};
    };
    using value_type = T;
    using difference_type = std::ptrdiff_t;
    using size_type = std::size_t;

    Node* head = nullptr;
    size_type m_size = 0;
    list():head(new Node()) {}

private:
    Node* find_last()
    {
        Node* i = head;
        for(; i->next != nullptr; i = i->next);
        return i;
    }

public:
    void push_back(T value)
    {
        Node* current = find_last();
        current->m_value = value;
        current->next = new Node();
    }
    list(std::initializer_list<T> l):list()
    {
        for(auto/*typename std::initializer_list<T>::iterator*/ i = l.begin(); i != l.end(); ++i)
        {
            push_back(*i);
        }
    }
    struct iterator
    {
        Node* m_current = nullptr;
        iterator() = default;
        iterator (Node* current):m_current(current) {}
        operator bool()
        {
            return m_current != nullptr;
        }
        void operator++()
        {
            m_current = m_current->next;
        }
        auto& operator*()
        {
            return m_current->m_value;
        }
        bool operator== (const iterator& that)
        {
            return this->m_current == that.m_current;
        }
        bool operator!= (const iterator& that)
        {
            return this->m_current != that.m_current;
        }
    };

    iterator begin ()
    {
        return iterator(head);
    }
    iterator end ()
    {
        return iterator(nullptr);
    }
    bool empty()
    {
        return head->next == nullptr;
    }
    size_type size()
    {
        return m_size;
    }
    iterator inser_after(condt iterator pos, T& value)
    {

    }

};
}

#endif // LIST_H_H_INCLUDED
