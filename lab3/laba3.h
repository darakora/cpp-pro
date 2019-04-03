#ifndef LABA3_H_INCLUDED
#define LABA3_H_INCLUDED

bool f1 (int a, int b, int c)
{
    return a > 7 && b > 7 && c > 7;
}

bool f2 (int value)
{
    return value % 5 == 0 && value % 10 == 0;
}

bool f3 (int value)
{
    return value > 9999 && value < 100000 && value % 10 == 5;
}

void f4 (int value)
{
    if (value < 99  || value > 999 && value % 2 == 0)
    {
        std::cout << value + 1 << std::endl;
    }
    else
    {
        std::cout << value - 2 << std::endl;
    }
    std::cout << value * 5 << std::endl;
}


#endif // LABA3_H_INCLUDED
