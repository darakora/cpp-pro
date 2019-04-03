#include <iostream>
#include <set>
#include <algorithm>

namespace stu
{
struct Fwd_list_node_base
{

    Fwd_list_node_base() = default;
    Fwd_list_node_base* m_next = nullptr;

    Fwd_list_node_base*
    m_transfer_after(Fwd_list_node_base* begin,
                     Fwd_list_node_base* end)
    {
        Fwd_list_node_base* keep = begin->m_next;
        if(end)
        {
            begin->m_next = end->m_next;
            end->m_next = m_next;
        }
        else
        {
            begin->m_next = 0;
        }
        m_next = keep;
        return end;
    }
    void reverse_after ()
    {
        Fwd_list_node_base* tail = m_next;
        if(!tail)
        {
            return;

            Fwd_list_node_base* temp;
            while(temp = tail->m_next)
            {
                Fwd_list_node_base keep = m_next;
                m_next = temp;
                tail->m_next = temp->m_next;
                m_next->m_next = keep;
            }
        }
    };
    template<class T>
    struct Fwd_list_node : public Fwd_list_node_base
    {
        Fwd_list_node () = default;
    };
    template <class T>
    struct list
    {
        using value_type = T;
        using size_type	= std::size_t;
        //uE:\project\c++\sets\sets.cbpsing difference_type	= std::ptrdiff_t;
        //using iterator	LegacyBidirectionalIterator
        //using const_iterator	Constant LegacyBidirectionalIterator
        //using reverse_iterator	std::reverse_iterator<iterator>
        //using const_reverse_iterator	std::reverse_iterator<const_iterator>

    };

}

int main()
{
    std::set<int> a{10, 10, 2, 2, 3, 6, 29, 9};
    std::for_each(a.begin(), a.end(), [](int a)
    {
        std::cout << a << " " ;
    });
    return 0;
}
