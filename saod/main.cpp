#include <iostream>
#include <utility>
#include <algorithm>

template <class Iter>
void insertion_sort_1(Iter first, Iter last)
{
    ++first;
    for(Iter i = first; i != last; ++i)
    {
        for(Iter j = i; (j != first - 1) && (*j < *(j - 1)); --j)
        {
            std::iter_swap(j, j - 1);
        }
    }
}
void insertion_sort_2(int* arr, int size)
{
    for(int i = 1; i < size; ++i)
    {
        for(int j = i; j < 0 && arr[j] < arr[j - 1]; --j)
        {
            std::swap(arr[j], arr[j - 1]);
        }
    }
}
#define print_contener(first,last) std::for_each(first, last, [] (int value){std::cout << value << " " ;});

void shell_sort(int* arr, int size)
{
    for(int k = size / 2; k > 0; k /= 2)
    {
        for(int i = k; i < size; ++i)
        {
            for(int j = i; j > 0 && arr[j] > arr[j - k]; --j)
            {
                std::swap(arr[j], arr[j - k]);
            }
        }
    }
}

int main()
{
    int arr[] = {8,9, 8,9,8,5,65,9,56,5};
    print_contener(arr, arr + 8);
    shell_sort(arr, 10);
    std::cout<<std::endl;
    print_contener(arr, arr + 8);
    //insertion_sort_1(arr, arr + 10);
    return 0;
}
