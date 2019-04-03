#include <iostream>

void f (int*array)
{
    for(int i = 0; i < 6 - 1; ++i)
    {
        if(array[i - 1] > array[i] && array[i + 1] > array[i])
        {
            std::cout << array[i] << std::endl;
        }
    }

}


int main()
{
    int array [6] = {8,2,3,6,5,9};
    f(array);

    return 0;
}
