#include <iostream>

template <typename T>
T sum (T a, T b)
{
    return a + b;
}

template <typename T>
T sum (T a, T b)
{

}

int main()
{
    std::cout << sum(1, 2) << std::endl;
    std::cout << sum(1.1, 2.2) << std::endl;
    std::cout << sum('a', 'b') << std::endl;
    return 0;
}
