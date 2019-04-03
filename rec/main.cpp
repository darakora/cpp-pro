#include <iostream>

int gcd (int a, int b)
{
    if(a % b ==  0)
    {
        return b;
    }
    return gcd(b, a % b);
}

int lcm (int n, int m)
{
    return n * m /(gcd(n, m));
}

void f (int times)
{
    if (times == 0)
    {
        return;
    }
    std::cout << "Hello" << std::endl;
    f(times -1);
}

int pow (int a, int p)
{
    if(p == 0)
    {
        return 1;
    }
    return a * pow(a, p - 1);
}


int f1(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1 || n == 2)
    {
        return 1;
    }
    return f1(n - 1) + f1(n - 2);
}

int main()
{  //std::cout << f1(5) << std::endl;
    std::cout <<  lcm(18, 48) << std::endl;
    return 0;
}
