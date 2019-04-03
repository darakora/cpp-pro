#ifndef LOOPS_H_INCLUDED
#define LOOPS_H_INCLUDED
#include <cmath>

void print_array (int* array, int first, int last)
{
    for ( ; first <  last; ++first)
    {
        std::cout << array[first] << " ";
    }
    std::cout << std::endl;
}

void fill_array (int* array, int first, int last)
{
    for ( ; first < last; ++first)
    {
        array[first] = first;
    }
}

void fill_array_a (int* array, int first, int last, int start)
{
    for ( ; first < last; ++first)
    {
        array[first] = first + start;
    }
}

void fill_array_ (int* array, int first, int last)
{
    int couter = 1;
    for ( ; first < last; ++first, couter += 2)
    {
        array[first] = couter;
    }
}

void fill_array_zero (int* array, int first, int last)
{
    for ( ; first < last; ++first)
    {
        array[first] = 0;
    }
}

void print_array_value (int* array, int first, int last, int value)
{
    for ( ; first < last; ++first)
    {
        array[first] = value;
    }
}

void fill_array_pow_2 (int* array, int first, int last)
{
    for ( ; first < last; ++first)
    {
        array[first] = std::pow(2, first);
    }
}

void fill_prograsion (int* array, int first,int last, int a, int d)
{
    for ( ; first < last; ++first)
    {
        array[first] = a + d * first;
    }
}

void fill_prograsion_pow (int* array, int first,int last, int a, int d)
{
    for ( ; first < last; ++first)
    {
        array[first] = a * pow(d, first);
    }
}

void fill_array_fibonacce (int* array, int last)
{
    array[0] = 0;
    array[1] = 1;
    for (int i = 2; i < last; ++i)
    {
        array[i]  = array[i-1] + array[i-2];
    }
}

void fill_array_sum_fibonacce (int* array, int size)
{
    array[0] = 0;
    array[1] = 1;
    int sum = 1;
    for (int i = 2; i < size; ++i)
    {
        array[i] = sum;
        sum += array[i-1] + array[i-2];
    }
}

void task_6 (int* array, int size, int a, int b)
{
    array[0] = a;
    array[1] = b;
    int sum = a + b;
    for(int i = 2; i < size; ++i)
    {
        array[i] = sum;
        sum += array[i];
    }
}

void print_array_7 (int* array, int first, int last)
{
    for( ; last > first; )
    {
        std::cout << array[--last] << std::endl;
    }
}

void star (int column,int row)//ÏÐÎÂÅÐÈÒÜ ÝÒÎ ÑÒÎËÁÈÊ ÈËÈ ÍÅÒ??
{
    for (int i = 0; i < row; ++i)
    {
        for (int j  = 0; j < column; ++j)
        {
            std::cout << "*";
        }
    }
    std::cout << std::endl;
}
#endif // LOOPS_H_INCLUDED
