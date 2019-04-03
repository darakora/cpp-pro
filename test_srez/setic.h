#ifndef SETIC_H_INCLUDED
#define SETIC_H_INCLUDED
#include <set>

#define print_contener(first, last) std::for_each (first, last, [](int value){std::cout << value << " " ;});
template <class Iter>
std::set<int> f (Iter first, Iter last)
{
    std::set<int> result;
    for(; first != last; ++first)
    {
        result.insert(*first);
    }
    return result;
}



#endif // SETIC_H_INCLUDED
