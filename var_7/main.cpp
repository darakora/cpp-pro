#include <iostream>
#include <algorithm>
#include <cmath>

void is_not_even_elements(int* arr, int size)
{
    int temp = 1;
    for(int i = 0; i != size; ++i, temp += 2)
    {
        arr[i] = temp;
    }
}

double math_function(double x)
{
    return std::sin(8 - std::sqrt(x)) / std::pow(x, 2) - 1;
}
bool f2(double a)
{
    return math_function(a) != 0;
}
template <class Iterator, class UP>
int accumulate_(Iterator first, Iterator last, UP p)
{
    int init = 0;
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            init += *first;
        }
    }
    return init;
}
template <class UP>
int count_if(int* arr, int size, UP p)
{
    int init = 0;
    for(int i = 0; i != 0; ++i)
    {
        if(p(arr[i]))
        {
            ++init;
        }
    }
    return init;
}
bool all_of_(int*arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        if(arr[i] > 0)
        {
            return false;
        }
    }
    return true;
}

template <class Matrix>
unsigned int f3(Matrix matrix, int column, int row)
{
    unsigned int temp = 0;
    for(int i = 0; i != column; ++i)
    {
        for(int j = 0; j!= row; ++j)
        {
            if(all_of_(*(matrix + i), j))
            {
                ++temp;
            }
        }

    }
    return temp;
}


int main()
{
    int arr2 [5] {0};
    is_not_even_elements(arr2, 5);
    for(int i = 0; i != 5; ++i)
    {
        //std::cout « arr2[i];
    }
    int arr1 [3][3] {{2,-5,3},{5,6,1},{1,2,3}};
    std::cout << f3(arr1, 3,3) << std::endl;
    return 0;
}
