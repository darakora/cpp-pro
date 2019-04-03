#include <iostream>
#include <algorithm>
#define print_contener(first, last) \
std::for_each (first, last, [](int v){std::cout << v << " " ; });

void insertion_sort (int* arr, int size)
{
    for(int i = 1; i != size; ++i)
    {
        for(int j = i; (j != 0) && arr[j] > arr[j - 1]; --j)
        {
            std::swap(arr[j], arr[j - 1]);
        }
    }
}

template <class Iter, class BP>
void insertion_sort_iter(Iter first, Iter last, BP p)
{
    for(Iter i = first + 1; i != last; ++i)
    {
        for(Iter j = i; j != first && p(*j, *(j - 1)); --j)
        {
            std::iter_swap(j, j -1);
        }
    }
}

void shell_sort (int* arr, int size)
{
    for(int k = size / 2; k > 0; k /= 2)
    {
        for(int i = k; i != size; ++i)
        {
            for(int j = i; (j != 0) && arr[j] > arr[j - k]; --j)
            {
                std::swap(arr[j], arr[j - k]);
            }
        }
    }
}

template <class RandomIt, class BO>
void shell_sort2(RandomIt first, RandomIt last, BO p)
{
    std::size_t size  = std::distance(first, last) / 2;
    for(int k = size / 2; k > 0; k /= 2)
    {
        for(Iter i = first + k; i != last; ++i)
        {
            for(Iter j = i; j != first && p(*j, *(j - k)); --j)
            {
                std::iter_swap(j, j - k);
            }
        }
    }
}

int main()
{
    int arr[5] {6, 9, 8, 6, 30};
    shell_sort2(arr, arr + 5, [](int a, int b)
    {
        return a > b ;
    });
    print_contener(arr, arr + 5);
    return 0;
}
