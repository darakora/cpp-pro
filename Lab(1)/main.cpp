#include <iostream>
#include <cstdlib>

void task_1 (int* array,int* array_2, int size_1, int size_2)
{
    int counter_1 = 0;
    for (int i = 0; i != size_1; ++i)
    {
        if(array[i] % 3 == 0)
        {
            ++counter_1;
        }
    }
    int counter_2 = 0;
    for (int i = 0; i != size_2; ++i)
    {
        if(array_2[i] % 3 == 0)
        {
            ++counter_2;
        }
    }
    if (counter_1 > counter_2)
    {
        for(int i = 0; i < size_1; ++i)
        {
            std::cout << array[i] <<std::endl;
        }
    }
    else
    {
        for(int i = 0; i < size_2; ++i)
        {
            std::cout << array_2[i] <<std::endl;
        }
    }
}


int main()
{
    /*int array[6] = {1, 5, 1, 8, 15, 20};
    int array_2[5] = {1, 15, 9, 5, 1};
    task_1(array, array_2, 6, 5);*/
    int** array_3 = new int* [3];
    for (int i = 0; i < ; ++i)
    {
        array_3[i] = new int [4];
        for(int j = 0; j < 4; ++j)
        {
            array_3[i][j] = rand()/10000;
            std::cout << array_3[i][j] << " " ;
        }
        std::cout << " " << std::endl;
    }
    return 0;
}
