#include <iostream>
#include <algorithm>
#include <vector>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

template <class Iter>
void swap_ranges(Iter first1, Iter first2, Iter last1)
{
    for(; first1 != last1; ++first1, ++first2)
    {
        swap(*first1, *first2);
    }
}

template <class Iter>
void reverse (Iter first, Iter last)
{
    while (first != last && first != --last)
    {
        std::swap(*first++, *last);
    }
}

int fakt (int value)
{
    int temp = 1;
    for (int i = 1; i <= value; ++i)
    {
        temp *= i;
    }
    return temp;
}

void fibonacci (int n)
{
    int a = 0;
    int b = 1;
    int temp = 0;
    for (int i = 1; i <= n; ++i)
    {
        temp = a + b;
        a = b;
        b = temp;
        std::cout << temp <<std::endl;
    }
}

void fibonacci_arr (int *arr, int first, int size)
{
    for (int i = 0; i < size; ++i)
    {
        if(i == 0)
        {
            arr[i] = 0;
        }
        else if (i == 1)
        {
            arr[i] = 1;
        }
        else {
             arr[i] = arr[i - 1] +  arr[i - 2];
        }
    }
    for (int i = 0; i < size; ++i)
    {
        std::cout <<  arr[i] <<std::endl;
    }
}

template <class Iter>
int accumulate(Iter first, Iter last)
{
    int temp = 0;
    for (; first != last; ++first)
    {

        temp += *first;
    }
    return temp;
}



int main()
{
/*    std::vector<int> v1{1, 2, 3, 1};
    std::vector<int> v2{5, 6, 7, 8};
    std::cout << fakt(5) << std::endl;
    std::cout << accumulate(v1.begin(), v1.end()) << "accum <- " << std::endl;
   // fibonacci(4);*/
    std::count << polibdron(454) << std::endl;
    int arr[10] = {};
    fibonacci_arr(arr, 0, 10);
    return 0;
}
