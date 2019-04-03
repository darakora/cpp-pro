#include <iostream>
#include <cmath>

int f(int n)
{
    int a = n / 10;
    for (int i = 0; i < 4; ++i)
    {
        a /= 10;
    }
    return a % 10;
}

bool f2(int n)
{
    for (int i = 0; i < 2; i++)
    {
        n /= 10;
    }
    return n == 6;
}

bool f3(int n)
{
    while (n > 0)
    {
        n -= 7;
    }
    return n == 0;
}

double f5(double x)
{
double num1 = (3-4*(cos(2*x)) + cos(4*x))/8;
double num2 = (pow(sin(x),4))/pow(sin(x),2)+pow(cos(x),2);
return num1*num2;
}
int main()
{
    int a = f(35985);
    std::cout << a << std::endl;
    bool res2 = f2(689);
    std::cout << res2 << std::endl;
    std::cout << f3(165) << std::endl;
    double res5 = f5(6);
    std::cout << res5 << std::endl;
    return 0;
}
