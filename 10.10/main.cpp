#include <iostream>
#include <vector>
#include <algorithm>

template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    while ((first != last) && (first != --last))
    {
        std::swap(*first++, *last);
    }
}
int main()
{
    std::vector<int> v1{1,2,3,6,5};
  reverse(v1.begin(), v1.end());
    return 0;
}
