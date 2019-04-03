#include <iostream>

int count_bg(int v)
{
    int digit = v % 10;
    int count = 1;
    v = v / 10;
    for(; v; v /= 10)
    {
        if(v % 10 == digit)
        {
            ++count;
        }
        if(v % 10 > digit)
        {
            digit  = v % 10;
            count = 1;
        }
    }
    return count;
}

int main()
{
    std::cout << count_bg(15663) << std::endl;
    return 0;
}
