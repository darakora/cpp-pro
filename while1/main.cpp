#include <iostream>
#include <utility>
#include <cmath>
int while1 (int a, int b)
{
    while (a > b)
    {
        a -= b;
    }
    return a;
}

int while2 (int a, int b)
{
    int counter = 0;
    while (a > b)
    {
        a -= b;
        ++counter;
    }
    return counter;
}

std::pair<int, int> while3 (int n, int k)
{
    int quotient = 0;
    while (n > k)
    {
        n -= k;
        ++quotient;
    }
    std::pair<int, int> res(quotient, n);
    return res;
}

bool while4 (int n)
{
    while (n > 1)
    {
       n /= 3;
    }
    return (n == 1);
}

double while5 (int n)
{
    int counter = 0;
    while (n > 1)
    {
        n /= 2;
        ++counter;
    }
    return counter;
}

int while7 (int n)
{
    int k = 1;
    while (k * k < n)
    {
        ++k;
    }
    return k;
}

int main()
{
    std::cout << while7 (16) << std::endl;
   /* std::pair<int, int> res = while3 (7, 2);
    std::cout << res.first << std::endl;
    std::cout << res.second << std::endl;*/
    return 0;
}
