#include <iostream>

struct Vector
{
    int* arr;
    int m_size;
    int m_cap;
    Vector()
    {
        std::cout << "Vector()" << std::endl;
        m_size = 0;
        m_cap = 10;
        arr = new int [m_cap];
    }
    void push_back (int value)
    {
        arr[m_size++] = value;
    }
};

void f (int* arr, int size)
{
    Vector result;
    for(int i = 0; i != size; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            result.push_back(arr[i]);
        }
        return Vector. result;
    }
}

int main()
{
    Vector a;
    return 0;
}
