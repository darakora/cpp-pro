#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <iterator>

void task_1 (int* arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        arr[i] = rand()/10000;
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
    for(int i = size - 1; i >= 0; --i)
    {
        std::cout << arr[i] << " " ;
    }
      std::cout << std::endl;
}

void task_2 (int* array, int size)
{
    int sum = 0;
    for ( int i=0; i < size; ++i)
    {
        array[i] = rand()/10000;
        std::cout << array[i] << " ";
        if(array[i] % 2 != 0)
        {
            sum += array[i];
        }
    }
    std::cout << std::endl;
    for(int i = 0; i < size; ++i)
    {
        if(array[i] % 3 == 0)
        {
            array[i] = sum;
        }
        std::cout << array[i] << " ";
    }
}

int task_liz (int* arr_liz, int size)
{
    int temp = 0;
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr_liz[i] << " ";
        temp += arr_liz[i];
    }
        temp /= size;
    std::cout << "sred = " << temp << std::endl;
    std::cout << std::endl;
    for(int i = 0; i < size; ++i)
    {
        if(arr_liz[4] != temp)
        {
            arr_liz[4] = temp;
        }
        std::cout << arr_liz[i] << " ";
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
            start = m +1;
        }
        if (arr[m] > key)
        {
            end = m - 1;
        }
    }
    return -1;
}

int* line_poisk (int* first, int* last, int key)
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

bool great(int a, int b)
{
    return a > b;
}

template < class Iterator, class BinaryOperation >
bool all_of (Iterator first, Iterator last, BinaryOperation p)
{
    for ( ; first != last; ++first)
    {
        if (!p(*first, *(first + 4)))
        {
            return false;
        }
    }
    return true;
}

template < class Iterator, class BinaryPredicate >
bool binary_all_of (Iterator first, Iterator last, BinaryPredicate p)
{
    --last;
    for ( ; first != last; ++first)
    {
        if (!p (*first, *(first + 1)))
        {
            return false;
        }
    }
    return true;
}

template < class Iterator >
bool is_sorted (Iterator first, Iterator last)
{
    return all_of(first, last, [](int a, int b){return a > b;});
}

template < class Iter >
int count_1 (Iter first1, Iter last1, Iter first2, Iter last2)
{
    int res1 = std::count_if(first1, last1, [](int a){a % 5 == 0;});
    int res2 = std::count_if(first2, last2, [](int a){a % 5 == 0;});
    if (res1 < res2)
    {
        printf(first1, last1);
    }
    else
    {
        printf(first2, last2);
    }
}

template < class Iterator >
int count_max_elemen (Iterator first, Iterator last)
{
    int max_el = *std::max_element(first, last);
    return std::count_if(first, last, max_el);
}

template < class Iterator >
Iterator max_element(Iterator first, Iterator last)
{
    Iterator max_el = first++;
    for (; first != last; ++first)
    {
        if (*first > max_el)
        {
            max_el = first;
        }
    }
    return max_el;
}

template < class Iterator >
void task_1 (Iterator first1, Iterator first2, Iterator last1, Iterator last2)
{

    int res1 = count_max_elemen (first1, last1);
    int res2 = count_max_elemen (first2, last2);
    if (res1 > res2)
    {
        std:: for_each (first1, last1, [](int a){std::cout << a;});
    }
    else
    {
        print (first2, last2);
    }
}

template < class Iterator >
void f (Iterator first1, Iterator last1, Iterator first2, Iterator last2)
{
    int temp1 = std::count_if(first1, last1, [](int a){return a % 5 == 0;});
    int temp2 = std::count_if(first2, last2, [](int a){return a % 5 == 0;});
    if (temp1 < temp2)
    {
        std:: for_each (first1, last1, [](int a){std::cout << a;});
    }
}

template <class Iterator>
void max_min_swap(Iterator first, Iterator last)
{
    int res1 = *std::min_element (first, last);
    std::for_each(first, last, [res1](int& a){ a += res1;});
    std::for_each(first, last, [](int a){std::cout << a << " " ;});
}

template < class Matrix, class T >
void matrix (Matrix m, int size, T init)
{
    int end = size - 1;
    for (int i = 0; i < size; ++i)
    {
        init += m[end - i][i];
    }
    return init;
}

int factorial (int v)
{
    if (v == 0)
    {
        return 1;
    }
    return v * factorial(v - 1);
}

int pow (int v, int p)
{
    static int res = 1;
    if (p == 0)
    {
        return 1;
    }
    res *= v;
    std::pow(v, p - 1);
    return res;
}

template <class Iterator, class T>
void f_7 (Iterator first1, Iterator last1, Iterator first2, Iterator last2, T value)
{
    auto res1 = std::count_if(first1, last1, [value](int a){return a > value;});
    auto res2 = std::count_if(first2, last2, [value](int a){return a > value;});
    if(res1 < res2)
    {
        for_each(first1,last1, [](int a){std::cout << a <<" ";});
    }
    else
    {
        for_each(first2,last2, [](int a){std::cout << a <<" ";});
    }
}

template <class Iterator>
void f(Iterator first1, Iterator last1, Iterator first2, Iterator last2, Iterator first3, Iterator last3)
{
    int res1 = std::count_if(first1, last1, [](int a){a % 3 == 0;});
    int res2 = std::count_if(first2, last2, [](int a){a % 3 == 0;});
    int res3 = std::count_if(first3, last3, [](int a){a % 3 == 0;});
    std::for_each(first1, last1,[res1](int& a){return a += res1;});
    std::for_each(first2, last2,[res2](int& a){return a *= res2;});
    std::for_each(first3, last3,[res3](int& a){return a -= res3;});
    std::for_each(first1, last1, [](int a){std::cout << a << " ";});
    std::for_each(first2, last2, [](int a){std::cout << a << " ";});
    std::for_each(first3, last3, [](int a){std::cout << a << " ";});
}

template <class Iter>
int accumulate_ (Iter first, Iter last)
{
    int temp = 0;
    for ( ; first != last; ++first)
    {
        temp += *first;
    }
    return temp;
}


template < class Iterator >
int count_max_elemen (Iteratorn First, Iterator last)
{
    auto max_el = *std:: max_element(first, last);
    return std::count(first, last, max_el);
}

template < class Iterator >
Iterator max_element(Iterator first, Iterator last)
{
    Iterator max_el = first++;
    for (; first != last;++first)
    {
        if (*first > max_el)
        {
            max_el = first;
        }
    }
    return max_el;
}

void task_1 (Iterator first1, Iterator first2, Iterator last1, Iterator last2)
{

    int res1 = count_max_elemen (first1, last1);
    int res2 = count_max_elemen (first2, last2);
    if (res1 > res2)
    {
        std:: for_each (first1, last1, [](int a){std::cout a});
    }
    else
    {
        print (first2, last2);
    }
}

void f (Iterator first1, Iterator last1, Iterator first2, Iterator last2)
{
    auto temp1 = std::count_if(first1, last1, [](int a){return a % 5 == 0;});
    auto temp2 = std::count_if(first2, last2, [](int a){return a % 5 == 0;});
    if (temp1 < temp2)
    {
        std:: for_each (first1, last1, [](int a){std::cout a});
    }
}

template < class Iterator, class T >
void f_7 (Iterator first1, Iterator last1, Iterator first2, Iterator last2, T value)
{
    int res1 = std::count_if(first1, last1, [value](int a) {return a > value;});
    int res2 = std::count_if(first2, last2, [value](int a) {return a > value;});
    if (res1 < res2)
    {
        print (first1, last1);
    }
    else
    {
        print (first2, last2);
    }


void max_min_swap(int* arr, int first, int last)
{
    int min_element (first, last);
    int max_element (first, last);
    print (min_element);
}

template < classs Matrix, class T >
void f (Matrix m, int size, T intit)
{
    int end = size - 1;
    for (int i = 0; i < size; ++i)
    {
        init += m[end - i][i];
    }
    return init;
}

int factorial (int v)
{
    if (v == 0)
    {
        return 1;
    }
    return v * factorial(v - 1);
}

int pow (int v, int p)
{
    static int res = 1;
    if (p == 0)
    {
        return 1;
    }
    res *= v;
    pow(v, p - 1);
    return res;
}

int main()
{
    std::vector<int> v1{1,2,3,5,5};
    std::vector<int> v2{1,2,3,4,5};
    std::vector<int> v3{1,3,6,5,9};
    //f_7(v1.begin(), v1.end(),v2.begin(), v2.end(), 6);
    f(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), v3.end());
    return 0;
}
