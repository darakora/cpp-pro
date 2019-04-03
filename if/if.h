#ifndef IF_H_INCLUDED
#define IF_H_INCLUDED

void f1 (int a)
{
    if (a > 0)
    {
        std::cout << a + 1 <<std::endl;
    }
    else {std::cout << a <<std::endl;}
}

void f2 (int a)
{
    if (a > 0)
    {
        std::cout << a + 1 <<std::endl;
    }
    else {std::cout << a - 2 <<std::endl;}
}

void f3 (int a)
{
    if (a > 0)
    {
        std::cout << a + 1 <<std::endl;
    }
    if (a < 0)
    {
            std::cout << a - 2 <<std::endl;
    }
    if (a == 0)
    {
        std::cout << 10 << std::endl;
    }
}

void f6 (int a, int b)
{
    if (a > b)
    {
        std::cout << a <<std::endl;
    }
    else
     {
        std::cout << b <<std::endl;
     }
}

void f11 (int a, int b)
{
    if (a != b)
    {
        if (a > b)
        {
            std::cout << a << std::endl;
        }
        else
        {
            std::cout << b << std::endl;
        }
    }
    else
    {
        a = 0;
        b = 0;
        std::cout << a  << " " << b << std::endl;
    }
}

void f12 (int a, int b, int c)
{
    if (a < b && a < c)
    {
        std::cout << a << std::endl;
    }
    if (b < a && b < c)
    {
        std::cout << b << std::endl;
    }
    if (c < a && c < b)
    {
        std::cout << c << std::endl;
    }
}

int f15 (int a, int b, int c)
{
    int sum = 0;
    if (a > c && b > c)
    {
        sum += a + b ;
    }
    if (a > b && c > b)
    {
        sum += a + c;
    }
    if (c > a && b > a)
    {
      sum +=  b + c;
    }
    return sum;
}
#endif // IF_H_INCLUDED
