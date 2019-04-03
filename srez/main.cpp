#include <iostream>
#include <cmath>

int min_el (int* arr, int size)
{
    int min_ = arr[0];
    for(int i = 1; i != size; ++i)
    {
        if(min_ > arr[i])
        {
            min_ = arr[i];
        }
    }
    return min_;
}

int max_el (int* arr, int size)
{
    int max_ = arr[0];
    for(int i = 1; i != size; ++i)
    {
        if(max_ < arr[i])
        {
            max_ = arr[i];
        }
    }
    return max_;
}

template <class Matrix>
void f (Matrix m, int column, int row)
{
    for(int i = 0; i != column; ++i)
    {
        std::cout << min_el(m[i], row) << std::endl;
        std::cout << max_el(m[i], row) << std::endl;
    }
}

template <class Iter >
bool all_of_poz (Iter arr, int size)
{
    for(int i = 0; i != size; ++i)
    {
        if(arr[i] < 0)
        {
            return false;
        }
    }
    return true;
}

template <class Matrix>
void f_2 (Matrix m, int row, int column)
{
    int counter = 0;
    for(int i = 0; i != column; ++i)
    {
        if(all_of_poz(m[i], row))
        {
            ++counter;
        }
    }
    std::cout << counter << std::endl;
}

void f_3 (int* arr, int size, int a, int b)
{
    arr[0] = a;
    arr[1] = b;

    for(int i = 2; i != size; ++i)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}

void fib (int* arr, int size)
{
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i != size; ++i)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}

double math_f (double x)
{
    return std::sin(8 - std::sqrt(x)) / std::pow(x, 2) - 1;
}

bool pred(double x)
{
    return math_f(x) == 0;
}

template <class Iter>
double accumulate_x (Iter first, Iter last, int init)
{
    for(; first != last; ++first)
    {
        if(pred(*first))
        {
            init += *first;
        }
    }
    return init;
}

//зыполнить массив степ двойкиб чет нечет(арифм прогрб геометр)

void fill_array (int* arr, int size, int a, int d)
{
    for(int i = 0; i != size; ++i)
    {
        arr[i] = a + d * i;
    }
}

void fill_geo_pr (int* arr, int size, int a, int q)
{
    for(int i = 0; i != size; ++i)
    {
        arr[i] = a * std::pow(q , i);
    }
}

int main()
{
    int m[2][3] {{1, 3, 4},{4, 4, 6}};
    f(m, 2, 3);

    return 0;
}
