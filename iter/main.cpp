#include <iostream>

template <class InputIt, class T>
T accumulate(InputIt first, InputIt last, T init)
{
    for(; first != last; ++first)
    {
        init += *first;
    }
    return init;
}

template<class InputIt, class UnaryFunction>
constexpr UnaryFunction for_each(InputIt first, InputIt last, UnaryFunction f)
{
    for (; first != last; ++first) {
        f(*first);
    }
    return f;
}

template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    while ((first != last) && (first != --last)) {
        std::iter_swap(first++, last);
    }
}


int main()
{

    return 0;
}
