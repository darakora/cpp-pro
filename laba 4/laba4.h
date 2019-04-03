#ifndef LABA4_H_INCLUDED
#define LABA4_H_INCLUDED
#include <cmath>

void first_1 (int n, int k)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << k << " " << std::endl;
    }
}

int first_2 (int a, int b)
{
    int temp = 0;
    for (; a > b; a -= b)
    {
        temp = a - b;
    }
    return temp;
}

int first_3 (int a, int b)
{
    int temp = 0;
    for (int i = a; i <= b; ++i)
    {
        temp += i;
    }
    return temp;
}

double first_4 (int n)
{
    double sum = 1.1;
    double t1 = 1.2;
    double t2 = -1.3;
    for (int i = 0; i < n-1; t1 += 0.2, ++i)
    {
        sum += t1;
    }
    for (int i = 0; i < n-1; t2 -= 0.2, ++i)
    {
        sum += t2;
    }
    return sum;
}

int first_5 (int v, int p)
{
    int temp = 0;
    for (int i = 1; i <p; ++i)
     {
         temp += std::pow(v, i);
     }
     return temp;
}

void second_1 (int a, int b)
{
    for (; a < b; ++a)
    {
        std::cout << a << std::endl;
    }
}

int second_2 (int n)
{
    for ( ; n; n /= 10)
    {
         if (n % 10 == 2)
    }
    return true;
}
#endif // LABA4_H_INCLUDED
