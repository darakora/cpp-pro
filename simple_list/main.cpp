#include <iostream>



template<class T>
struct Fwd_list_node : public Fwd_list_node_base
{
        Fwd_list_node () = default;
        Fwd_list_node* next;
        T value;
};

template<class T>
struct list
{
    using value_type = T;
    using size_type	= std::size_t;
    using difference_type = std::ptrdiff_t;
    Fwd_list_node_base* m_storage;
    //using iterator	LegacyBidirectionalIterator
    //using const_iterator	Constant LegacyBidirectionalIterator
    //using reverse_iterator	std::reverse_iterator<iterator>
    //using const_reverse_iterator	std::reverse_iterator<const_iterator>

};

int main()
{
    Fwd_list_node_base* temp;
    return 0;
}
