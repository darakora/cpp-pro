#include <iostream>

int f (int a)
{
    int temp = 0;
    for(; a; a /= 10)
    {
        temp += std::pow(a % 10, 2);
    }
    return temp;
}

template <class Iter>
void bouble_sort (Iter first, Iter last)
{
    std::ptrdiff_t size = last - first;
    --last;
    for(std::ptrdiff_t i = 0; i < size - 1; ++i)
    {
        for(Iter J = first, J != last - i; ++j)
        {
            if(*j > *(j + 1))
            {
                std::iter_swap(j, j + 1);
            }
        }
    }
}

void f(int *arr, int size)
{
    int min_el;
    for(int i = 0; i != size - 1; ++i)
    {
        min_el = i + 1;
        for (int j = i + 1; j != size; ++j)
        {
            if(arr[i] < arr[min_el])
            {
                min_el = j;
            }
            if(arr[min_el] < arr[i])
        {
            std::swap(arr[min_el], arr[i]);
        }
        }
    }
}


int main()
{

    return 0;
}
