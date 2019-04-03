#include <iostream>
#include <cmath>

double f(double x)
{
    return -std::sqrt(std::cos(x));
}

bool great (double a, double b)
{
    return f(a) > f(b);
}

template <class Iter, class Comporate>
Iter max_el (Iter first, Iter last, Comporate comp)
{
    Iter max_ = first++;
    for(; first != last; ++first)
    {
        if(comp(*first, *max_))
        {
            max_ = first;
        }
    }
    return max_;
}
int main()
{
    double arr[14] = {32,95,16,82,24,66,35,19,75,54,40,43,93,68};
    std::cout << *max_el(arr, arr + 14, great);
//std::cout ««std::endl;
   // shell_sort(arr,14);
    return 0;
}
