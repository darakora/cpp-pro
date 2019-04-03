#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <cmath>

void comb(int* arr, int size)
{
    int step = size - 1;
    double fakt = 1.24;
    while(step >= 1)
    {
        for(int i = 0; i + step < size; ++i)
        {
            if(arr[i] > arr[i + step]);
            {
                std::swap(arr[i], arr[i + step]);
            }
            step /= fakt;
            std::cout << arr[i] << std::endl;
        }
    }
}

template <class Iter>
void comb(Iter first, Iter last)
{
    Iter step = last - 1;
    double fakt = 1.24;
    while(*step >= 1)
    {
        for(; first + *step < last; ++first)
        {
            if(*first < *(first + *step))
            {
                std::iter_swap(*first, *(first) + *(step));
            }
            *step /= fakt;
            std::cout << *first << std::endl;
        }
    }
}

int great (int a, int b)
{
    return a > b;
}

template <class Iter, class BP>
void bouble_sort (Iter first, Iter last, BP p)
{
    bool is_sorted;
    std::size_t size = last - first;
    for (int i = 0; i != size - 1; ++i)
    {
        is_sorted = true;
        for(Iter j = first; j != last-1; ++j)
        {
            if(p(*j, *(j + 1)))
            {
                std::iter_swap(j, j + 1);
                is_sorted = false;
            }
        }
        if(is_sorted)
        {
            return;
        }
        std::for_each(first, last, [](int a)
        {
            std::cout << a << " " ;
        });
    }
}

int reverse (int value)
{
    int temp = 0;
    for (; value; value /= 10)
    {
        temp *= 10;
        temp += value % 10;
    }
    return temp;
}

int get_last_n_digit (int v, int n)
{
    return v %(int) std::pow(10, n);
}

/*int get_first_n_digit (int value, int n)
{
    return get_last_n_digit((reverse(value),n));
}*/

int count_digit (int value)
{
    int res = 0;
    for (; value; value /= 10)
    {
        ++res;
    }
    return res;
}
/*bool f (int value, int n)
{
    return sum_digit(get_last_n_digit(value, n)) == sum_digit(get_first_n_digit(value, n));
}*/
bool is_great (int a, int b)
{
    return a > b;
}

int main()
{
    int arr[5] = {2, 3, 6, 5, 9};
    comb(arr, 5);
    std::cout << reverse(123) <<std::endl;
    bouble_sort(arr, arr + 5, is_great);
    /*std::vector<int> v{2, 6, 8, 9, 1, 2};
    comb(v.begin(), v.end());*/
    // std::cout << get_first_n_digit(655, 2) << std::endl;
    /*int arr[6] = {10, 8, 2, 0, 1, 2};
    bouble_sort(arr, arr + 6, great);
    /*std::vector<int> v1{1,2,3,5,5};
    std::vector<int> v2{1,2,3,4,5};
    std::vector<int> v3{1,3,6,5,9};
    f(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), v3.end());*/
    return 0;
}
