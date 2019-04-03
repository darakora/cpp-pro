#include <iostream>
#include <vector>
#include <algorithm>
#define print_contener(first, last) \
std::for_each (first, last, [](int v){std::cout << v << " " ;});

using Matrix = std::vector<std::vector<int>>;

template <class Iter>
std::vector<int> is_great_row (Iter first, Iter last)
{
    std::vector<int> result;
    for(; first != last; ++first)
    {
        result.push_back (*std::max_element(first->begin(), first->end()));
    }
    return result;
}

template <class Iter>
void print_pozitive_row (Iter first, Iter last)
{
    for(; first != last; ++first)
    {
        if(std::none_of(first->begin(), first->end(), [](int v)
    {
        return v < 0;
    }))
        {
            print_contener(first->begin(), first->end());
        }
    }
}

template <class Matrix>
int sum_of_main_diag(Matrix m, int size)
{
    int sum = 0;
    for(int i = 0; i < size; ++i)
    {
        sum += m[i][i];
    }
    return sum;
}

template <class Matrix>
int sum_of_second_diag(Matrix m, int size)
{
    int sum = 0;
    for(int i = 0; i < size; ++i)
    {
        sum += m[i][size - 1 - i];
    }
    return sum;
}

void print_line ()
{
    for(int i = 0; i < 10; ++i)
    {
        std::cout << "*";
    }
}

int main()
{
    Matrix m{{1, 6},{9, 6}};
    std::cout << sum_of_main_diag(m, 2) << std::endl;
    std::cout << sum_of_second_diag(m, 2) << std::endl;
    for(int i = 0; i < 5; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            std::cout << " * ";
        }
        std::cout << std::endl;
    }
    /*print_pozitive_row(m.begin(), m.end());
    for(auto i = m.begin(); i != m.end(); ++i)
    {
        print_contener((*i).begin(), i->end());
        std::cout << std::endl;
    }
    std::vector<int> a = is_great_row(m.begin(), m.end());
    print_contener(a.begin(), a.end());*/

    return 0;
}
