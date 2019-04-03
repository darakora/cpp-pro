#include <iostream>
#include <cmath>
#include "2_var.h"
#include <vector>
#include <algorithm>

void f(int* arr, int size, int a, int b)
{
    arr[0] = a;
    arr[1] = b;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = arr[i - 1] * arr[i - 2];
        std::cout << arr[i] << std::endl;
    }
}

double math_f (double x)
{
    return (std::pow(x, 2) + 9) / std::tan(std::sqrt(x));
}

bool pred (double a, double b)
{
    return math_f(a) <  math_f(b);
}

template <class Iter, class Comp>
Iter accum (Iter first, Iter last, Comp pred)
{
    Iter min_ = first++;
    for(; first != last; ++first)
    {
        if(pred(*first, min_))
        {
            min_ = first;
        }
    }
    return min_;
}

int min_el (int* arr, int size)
{
    int min_ = arr[0];
    for(int i = 0; i < size; ++i)
    {
        if(arr[i] < min_)
        {
            min_ = arr[i];
        }
    }
    return min_;
}

int max_el (int* arr, int size)
{
    int max_ = arr[0];
    for(int i = 0; i < size; ++i)
    {
        if(arr[i] > max_)
        {
            max_ = arr[i];
        }
    }
    return max_;
}

template <class Matrix>
void f_1(Matrix matrix, int column, int row)
{
    for(int i = 0; i < column; ++i)
    {
        std::cout << min_el(matrix[i], row) << std::endl;
        std::cout << max_el(matrix[i], row) << std::endl;
    }
}

void f_2(int* arr, int size, int a, int b)
{
    arr[0] = a;
    arr[1] = b;
    for(int i = 0; i < size; ++i)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        std::cout << arr[i] << std::endl;
    }
}

double math_f1 (double x)
{
    return std::exp(std::sin(x / 8));
}

bool greater_zero (double a)
{
    return math_f1(a) > 0;
}

template <class UP>
double accum (double* first, double* last, UP p)
{
    double res = 0;
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            res += *first;
        }
    }
    return res;
}

int accum_1(int* arr, int size)
{
    int init = 0;
    for(int i = 0; i < size; ++i)
    {
        init += arr[i];
    }
    return init;
}

template <class Matrix>
void f_3(Matrix m, int column, int row)
{
    for(int i = 0; i != column; ++i)
    {
        std::cout << accum_1(m[i], row) << std::endl;
    }
}

void fib (int* arr, int size)
{
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i != size; ++i)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        std::cout << arr[i] << std::endl;
    }
}
//////////////////
double math_f2 (double x)
{
    return std::log(std::pow(x, 2) + 2 * x + 2);
}

bool is_zero (double a)
{
    return math_f1(a) == 0;
}

template <class UP>
double accum_2 (double* arr, int size, UP p)
{
    double res = 1;
    for(int i = 0; i < size; ++i)
    {
        if(p(arr[i]))
        {
            res *= arr[i];
        }
    }
    return res;
}

int accum_3(int* arr, int size)
{
    int init = 0;
    for(int i = 0; i < size; ++i)
    {
        init += arr[i];
    }
    return init;
}
int accum_3_1(int* arr, int size)
{
    int temp = 1;
    for(int i = 0; i < size; ++i)
    {
        temp *= arr[i];
    }
    return temp;
}

template <class Matrix>
void f_4(Matrix matrix, int column, int row, int k)
{
    std::cout << accum_3(matrix[k], row) << std::endl;
    std::cout << accum_3_1(matrix[k], row) << std::endl;
}

void f_5(int* arr, int size, int a, int b)
{
    for(int i = 0; i < size; ++i)
    {
        arr[i] = a + b * i;
        std::cout << arr[i] << std::endl;
    }
}

double math_funt(double x)
{
    return std::pow(cos(1-sqrt(x) * 2),2);
}

bool predicat(int a, int b)
{
    return math_funt(a) > math_funt(b);
}

template <class Iter, class BP>
Iter max_el(Iter first,Iter last, BP p )
{
    Iter max = first;
    for(; first != last; ++first)
    {
        if (p(*first, *max))
        {
            max = first;
        }
    }
    return max;
}

template <class T>
T math_func_1(T x)
{
    return std::sqrt(1-std::log(2*x)) / -4 * sin(std::pow(x,2));
}

bool f (double a, double b)
{
    return math_func_1<int> (a) % 2 == 0  > math_func_1<int> (b) % 2 == 0;
}

template <class Iter, class BP>
Iter max_el_new(Iter first, Iter last, BP p)
{
    Iter max = first++;
    for(; first != last ; ++first)
    {
        if(p(*max, *first))
        {
            max = first;
        }
    }
    return max;
}

template <class Matrix>
void f_6 (Matrix m, int column, int row)
{
    std::vector<int> v1;
    for(int i = 0; i < column; ++i)
    {
        for(int j = i + 1; j < row; ++j)
        {
            v1.push_back(m[i][j]);
        }
    }
    std::for_each (v1.begin(), v1.end(), [] (int a) {std::cout << a  << " " ;});
}

void arr_pow_two (int* arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        arr[i]  = std::pow(2, i));
        std::cout << arr[i] << std::endl;
    }
}

double math_f3(double x)
{
    return std::sqrt(std::pow(x, 2) + std::pow(std::ctg(1 - 3 * x), 2)));
}

bool f (double a)
{
    return math_func_<int> (a) % 2 == 0;
}

//Задан одномерный массив вещественных чисел. Написать функцию, которая находит и выводит на консоль элемент
//массива х четный по индексу, для которого значение заданного выражения будет минимальным. Вызвать функцию в main.
template <class Iter, class BP>
Iter min_el_new(Iter first, Iter last, BP p)
{
    Iter min = first;
    first += 2;
    for(; first != last ; first += 2)
    {
        if(p(*min, *first))
        {
            min = first;
        }
    }
    return min;
}

int main()
{
    int arr[2][2] {{1, 2},{3, 6}};
    f_6(arr, 2, 2);
    return 0;
}
