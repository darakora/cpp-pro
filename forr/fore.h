#ifndef FORE_H_INCLUDED
#define FORE_H_INCLUDED

void for1 (int k, int n)
{
    for (int i = 1; i <= n; ++i)
        std::cout << k << std::endl;
}

void for2 (int a, int b)
{
    int n = b - a + 1;
    for (int i = a;  i <= b; ++i)
    std::cout << i <<std::endl;
    std::cout << " n = "<< n << std::endl;
}

void for3 (int a, int b)
{
    int n = b - a+1;
    for (int i = b-1; i > a; --i)
    std::cout << i <<std::endl;
    std::cout << " n = "<< n << std::endl;
}

void for4 (double n)
{
    for (int i = 1; i <= 10; i++)
    {
        std::cout << n*i << std::endl;
    }
}

void for5 (double n)
{
    for (int i = 0.1; i < 1.1; i++)
    {
        std::cout << n*i << std::endl;
    }
}

void for6 (double n)
{
    for (int i = 1.2; i < 2.1; i++)
    {
        std::cout << n*i << std::endl;
    }
}

double for7(int a, int b)
{
    int sum = 0;
    for(int i = a; i <= b; ++i)
    sum += i;
    return sum;
}

double for8(int a, int b)
{
    int proz = 1;
    for (int i = a; i <= b; ++i)
    proz *= i;
    return proz;
}

double for9 (int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; ++i)
    sum += i*i;
    return sum;
}
double for13 (int n)
{
    double result = 0;
    double t1 = 1.1;
    double t2 = -1.2;
    for (int i = 0; i < n/2; ++i, t1 += 0.2)
    {
        result += t1;
    }
    for (int i = 0; i < n/2; ++i, t2 -= 0.2)
    {
        result += t2;
    }
    return result;
}

double for10 (int n)
{
    double sum = 0;
    for (int i = 1; i <= n; ++i)
    sum += 1.0/n;
    return sum;
}

double for11(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; ++i)
    sum += pow(n+i, 2);
    return sum;
}

double for12 (int n)
{
    double result = 1;
    double t = 1.1;
    for (int i = 0; i < n; ++i, t += 0.1)
    {
        result *= t;
    }
    return result;
}

double for14 (int n)
{
    double result = 0;
    double temp = 0;
    for (int i = 1; i <= n; ++i)
    {
        temp = (2 * i) - 1;
        result += temp;
        std::cout << result << std::endl;
    }
    return result;
}

double for15 (double a,int n)
{
    int temp = 1;
    int res = 1;
    for (int i = a; i <= n; ++i)
    {
        res += temp*a;
    }
    return res;
}

void for16 (double a, int n)
{
    for (int i = 1; i <= n; ++i)
    {
        std::cout << std::pow(a, i) << std::endl;
    }
}

double for17 (double a, int n)
{
    double res = 0;
    for(int i = 0; i <= n; ++i)
    {
        res += std::pow(a, i);
    }
    return res;
}

double for18 (double a, int n)
{
    double res = 0;
    for (int i = 0; i <= n; ++i)
    {
        res += std::pow(-1, i) * std::pow(a, i);
    }
    return res;
}

double for36 (int n, int k)
{
    double res = 0;
    for (int i = 1; i <= n; ++i)
    {
        res += pow(i, k);
    }
    return res;
}

double for37 (int n)
{
    double res = 0;
    for (int i = 1; i <= n; ++i)
    {
        res += std::pow(i, i);
    }
    return res;
}

double for38 (int n)
{
    double res = 0;
    for (int i = 1, j = n; i <= n; ++i, --j)
    {
        res += std::pow(i, j);
    }
    return res;
}

void for39 (int a, int b)
{
    for ( ; a < b; ++a)
    {
        for (int i = 0; i < a; ++i)
        {
            std::cout<< a <<std::endl;
        }
    }
}

void for40 (int a, int b)
{
    for (int i = a; i <= b; ++i, ++a)
    {
        for (int j = 0; j < i; ++j)
        {
            std::cout<< a <<std::endl;
        }
    }
}

int ff (int n)
{
    int temp = 0;
    for ( ; n ; n /= 10)
    {
        ++temp;
    }
    return temp;
}

int sum_ch (int a)
{
    int t = 0;
    for (; a; a /= 10)
    t = t + a%10;
    return t;
}

void chet (int first, int last)
{
    int res = 0;
    if (first%2 == 0)
    {
        ++first;
    }
    for (int i = 1; first < last; ++i)
    {
        res += i;
        std::cout << res <<std::endl;
    }
}

int fuct (int value);

double for21 (int n)
{
    double res = 0;
    for (int i = 0; i <= n; ++i)
    {
        res += 1 / fuct(i);
    }
    return res;
}

int fuct (int value)
{
    int temp = 1;
    for (int i = 2; i <= value; ++i)
    {
        temp *= i;
    }
    return temp;
}

double fr (int a, int b, int c)
{
    double r = pow(a, 2)+ pow(b, 2);
    double d = a * b;
    return r/d;
}

int last_d(int a)
{
    int i = 0;
    for (; a != 0; a /= 10)
    {
        ++i;
    }
    return i;
}

void fibonacci (int n)
{
int a = 0;
int b = 1;
for (int i = 1; i <= n; ++i)
{
    b = a+b;
    a = b;
    std::cout << b << std::endl;
}
}

int pow (int a, int p)
{
    int temp = 1;
    for (int i = 0; i < p; ++i)
    {
        temp *= a;
    }
    return temp;
}

/*int fuct (int value)
{
    int temp = 1;
    for (int i = 2; i <= value; ++i)
    {
        temp *= i;
    }
    return temp;
}*/

void step_v (int value, int first, int last)
{
    for (; first < last; ++first)
        std::cout << std::pow(value, first) << std::endl;
}

#endif // FORE_H_INCLUDED
