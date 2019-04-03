#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include "setic.h"


template <class Iter>
std::vector<int> new_f (Iter first, Iter last)
{
    std::vector<int> temp;
    for(; first != last; ++first)
    {
        temp.push_back(*first);
    }
    std::sort(temp.begin(), temp.end());
    std::vector<int> temp1;
    for(auto i = temp.begin(); i != temp.end(); ++i)
    {
        if(*i != *(i + 1))
        {
            //++i;
            temp1.push_back(*i);
        }
    }
    return temp1;
   //print_contener(temp.begin(), temp.end());
}



int main()
{
    std::vector<int> v1{1, 3, 1,2, 3, 5,3,6};
    print_contener(v1.begin(), v1.end());
    std::cout << std::endl;
    auto result = new_f(v1.begin(), v1.end());
    print_contener(result.begin(), result.end());
    return 0;
}
