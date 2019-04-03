#include <iostream>
#include <vector>
#include <algorithm>

bool loc_min (int a, int b, int c)
{
    return a > b && b < c;
}

bool is_great (int a, int b)
{
    return a > b;
}

template <class Iter, class TP>
void local_min (Iter first, Iter last, TP p)
{
    for( ; first != last; ++first)
    {
        if(p(*(first - 1), *first, *(first + 1)))
        {
            std::cout << *first << std::endl;
        }
    }
}

template <class Iter>
void bouble_sort (Iter first, Iter last)
{
    std::ptrdiff_t size = last - first;
    for(std::ptrdiff_t i = 0; i != size - 1; ++i)
    {
        for(Iter j = first; j != last - 1 - i; ++j)
        {
            if(*j > *(j + 1))
            {
                std::iter_swap(j, j + 1);
            }
        }

    }
    std::for_each(first, last, [](int a)
        {
            std::cout << a << " " ;
        });

}

/*template <class Iter>
void comb_sort (Iter first, Iter last)
{
    Iter step = last - 1;
    double fact = 1.24;
    while(*step >= 1)
    {
        for(; first + *step < last; ++first)
        {
            if(*first > *(first + *step))
            {
               std::iter_swap(first, (first + *step));
            }
            *step /= fact;
             std::for_each(first, last, [](int a)
        {
            std::cout << a << " " ;
        });
        }
    }
}*/

template <class Iter, class BP>
void inserion_sort(Iter first, Iter last, BP p)
{
        for(int i = first + 1; i != last; ++i)
        {
            for(Iter j = i; j != first && p(*j, *(j - 1)); --j)
            {
                std::iter_swap(j, j - 1);
            }
        }
}

template <class RandomIt, class BP>
void shell_sort (RandomIt first, RandomIt last, BP p)
{
    std::size_t size = last - first;
    for(int k = size / 2; k > 0; k /= 2)
    {
        for(RandomIt i = first + k; i != last; ++i)
        {
            for(RandomIt j = i; j != first && p(*j, *(j - k)); --j)
            {
                std::iter_swap(j, j - k);
            }
        }
    }
}

void selection_sort(int* arr, int size)
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
    for(Iter i = first; i != last; ++i)
    {
        for(Iter j = i; j != first && p(*j, *(j - 1)); --j)
        {
            std::iter_swap(j, j - 1);
        }
    }
}

template <class Iter, class T>
Iter line_search (Iter first, Iter last, T key)
{
    for ( ;first != last; ++first)
    {
        if (*first == key)
        {
            return first;
        }
        return last;
    }
}
int binary_search (int* arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int m;
    while(start < end)
    {
        m = (start + end) / 2;
        if (arr[m] == key)
        {
            return m;
        }
        if (arr[m] < key)
        {
            start = m + 1;
        }
        if (arr[m] > key)
        {
            end = m - 1;
        }
    }
    return -1;
}

int factorial (int a)
{
    int temp = 1;
    for(int i = 2; i <= a; ++i)
    {
        temp *= i;
    }
    return temp;
}

int factorial_recursive(int a)
{
    if(a == 0)
    {
        return 0;
    }
    else if(a == 1)
    {
        return 1;
    }
    return a * factorial_recursive(a - 1);
}

int pow (int a, int n)
{
    int temp = 1;
    for(int i = 1; i <= n; ++i)
    {
        temp *= a;
    }
    return temp;
}

int pow_recursive (int a, int n)
{
    if(n == 0)
    {
        return 1;
    }
    return a * pow_recursive(a, n - 1);
}

int gcd (int a, int b)
{
    int c;
    while(c = a % b)
    {
        a = b;
        b = c;
    }
    return b;
}

unsigned int gcd_recursive (unsigned int a, unsigned int b)
{
    if(a % b == 0)
    {
        return b;
    }
    return gcd(b, a % b);
}

void print_recursive(int times)
{
    if(times == 0)
    {
        return;
    }
    std::cout << "Hello" << std::endl;
    print_recursive(times - 1);
}


int main()
{
    std::vector<int> v{2, 1, 3, 6, 5, 6};
    //local_min(v.begin(), v.end(), loc_min);
    line_search(v.begin(), v.end(), 2);
    std::cout << factorial_recursive(5) << std::endl;
    std::cout << pow_recursive(2, 2) << std::endl;
    std::cout << gcd_recursive(6, 20) << " gcd" << std::endl;

    return 0;
}
