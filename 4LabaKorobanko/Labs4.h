#ifndef LABS4_H_INCLUDED
#define LABS4_H_INCLUDED
#include <cmath>

int f1 (int a, int b)
{
    int temp = 0;
    for (int i = a; i <= b; ++i)
    {
        if(i % 11 == 0)
        {
            temp += i;
        }
    }
    return temp;
}

bool f2 (int n)
{
    for ( ; n; n /= 10)
    {
        if (n % 10 == 1 || n % 10 == 2)
        {
            return true;
        }
    }
    return false;
}

int f3 (int a)
{
    int temp = 0;
    for ( ; a; a /= 10)
    {
    if (a % 10 == 8)
    {
        temp ++;
    }
    }
    return temp;
}

int f4 (int n)
{
    int sum = 0;
    for(int i = 1; i <= n; ++i)
    {
        sum += std::pow(n, i)/i;
    }
    return sum;
}

int f5 (int n)
{
    for ( ; n; n /= 10)
    {
        if (n % 2 == 0)
        {
            return true;
        }
    }
    return false;
}

int fibonacci (int last)
{
    int a = 0;
    int b = 1;
    int c ;
    for (int i = 1; i < last; ++i)
    {
       c = a + b;
       a = b;
       b = c;
    }
    return c;
}

int fuct (int a)
{
    int temp = 1;
    for (int i = 1; i <= a; ++i)
    {
        temp *= i;
    }
    return temp;
}
#endif // LABS4_H_INCLUDED
