#include <iostream>
#include <vector>
#include <algorithm>

/*template < class Iter >
void insert_sort (Iter first, Iter last)
{
    for ( ; first != last; ++first)
    {
        std::swap(std::min_element (first, last), first);
    }
}

template < class Iter >
void insert_sort (Iter first, Iter last)
{
    Iter min;
    for (Iter i = first; i != last; ++i)
    {
        min = i;
        for(Iter j = i + 1; j != last; ++j)
        {
            if(*j < *min)
            {
                min = j;
            }
        }
        std::iter_swap(i, min);
    }
}*/

void selection_sort2(int* arr, int size)
{
    for(int i = 1; i != size; ++i)
    {
        for(int j = i; j > 0 && arr[j] < arr[j - 1]; --j)
        {
            std::swap(arr[j],arr[j - 1]);
        }
    }
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
}

template <class Iter, class BP>
void selection_sort (Iter first, Iter last, BP p)
{
    // std::size_t size = last - first;
    for(Iter i = first; i != last; ++i)
    {
        for(Iter j = i; j != first && p(*j, *(j - 1)); --j)
        {
            std::iter_swap(j, j - 1);
        }
    }
}

int main()
{
    int arr[5] = {2, 6, 8, 45, 0};
    selection_sort(arr, arr + 5, [](int a, int b)
    {
        return a < b;
    });
    std::for_each(arr, arr + 5, [](int v){std::cout << v << " " ;});

    return 0;
}
