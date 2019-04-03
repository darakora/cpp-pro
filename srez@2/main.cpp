#include <iostream>

int pow(int a, int p)
{
    int temp = 1;
    for(int i = 0; i < p; ++i)
    {
        temp *= a;
    }
    return temp;
}

int fakt (int a)
{
    int temp = 1;
    for(int i = 2; i <= a; ++i)
    {
        temp *= i;
    }
    return temp;
}
int sum_of_digit(int a)
{
    int sum = 0;
    for( ; a; a /= 10)
    {
        sum += a%10;
    }
    return sum;
}

int sum_razr_num(int a)
{
    int temp = 0;
    for ( ;a; a /= 10)
    {
        ++temp;
    }
    return temp;
}

int 2_in_num (int a)
{
    int temp = 0;
    for (; a; a/= 10)
    {
        if(a % 10 == 2)
        {
            ++temp;
        }
    }
    return temp;
}

bool only_1 (int a)
{
    for(; a; a /= 10)
    {
        if(a % 10 != 1)
        {
            return false;
        }
    }
    return true;
}

int consist_num_0123(int a)
{
    for (; a; a/=10)
    {
        if(a % 10 <= 3)
        {
            return false;
        }
    }
    return true;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

template <class Iter>
void sap_range (Iter first1, Iter last, Iter first2)
{
    for (; first1 != last; ++first1, ++first2)
    {
        swap(*first1, *first2);
    }
}

int min_elem (int *first, int *last)
{
    int  *temp = first++;
    for(; first != last; ++fist)
    {
        if(*temp > *first)
           {
               temp = first;
           }
    }
    return temp;
}

template <class Iter class BP>
int *max_elem(Iter first, Iter last, BP p)
{
    int temp = first++;
    for(; first != last; ++first)
    {
        if(p(*first, *temp))
        {
            temp = *first;
        }
    }
    return temp;
}

/*template <lass BP>
int oppo (int *first, int *last, BP p)
{
    temp += p(temp, *first)
    {
        return temp;
    }
}*/

template <class Iter, class UP>
int find_if(Iter first, Iter last, UP p)
{
    for( ; first != last; ++first)
    {
        if(p(*first))
        {
            return first;
        }
    }
    return last;
}

int count_min(Iter first, Iter last)
{
    Iter temp = std::min_element(first, last)
    return count(first, last, temp);
}


int main()
{
    std::cout << pow(6, 2) << std::endl;
    std::cout << fakt(5) << std::endl;
    std::cout << sum_of_digit(23) << std::endl;

    return 0;
}
