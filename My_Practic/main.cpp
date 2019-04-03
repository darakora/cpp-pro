#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>
#define print_container(first, last) std::for_each(first, last, [](int value){std::cout << value << " " ;});

template <class Iter>
auto accumulate_is_even (Iter first, Iter last)
{
    int result  = std::accumulate(std::find_if(first, last, [](int value){return value % 2 != 0;}), last, 0);
    std::cout << " result = " << result << std::endl;
}

int main()
{
    std::vector<int> v{3, 3, 5, 4};
    print_container(v.begin(), v.end());
    accumulate_is_even(v.begin(), v.end());


    return 0;
}
