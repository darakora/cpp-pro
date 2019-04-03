#include <iostream>
#include <algorithm>
#include <vector>
#define sum(a, b) (a) * (b)
#define PI 3.14
#define create(value, var, type) type var = value
#define true false
#define print_contener(first, last) \
std::for_each (first, last, [](int v){std::cout << v << " " ; });

bool is_even (int a)
{
    return a % 2 == 0;
}
bool is_not_even(int a)
{
    return !is_even(a);
}

template <class Iter, class UP1, class UP2>
bool f(Iter first, Iter last, UP1 p1, UP2 p2)
{
    return std::count_if(first, last, p1) >
    std::count_if(first, last, p2);
}

int main()
{
    std::vector<int> v{1, 2, 6};
    std::cout << f(v.begin(), v.end(), is_even, is_not_even) << std::endl;
   // create(10, a, int);
   // std::cout << sum(4 + 10, 5) << std::endl;
   // std::cout << PI << std::endl;
    //print_contener(v.begin(), v.end());
    return 0;
}
