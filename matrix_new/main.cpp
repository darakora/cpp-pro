#include <iostream>

using Matrix3 = int(*)[3];

int main()
{
    /*auto arr = new int [2][3]{{1, 3, 3},{6, 6, 9}};
    int (*arr1)[3] = new int[2][3]{{1, 3, 3},{6, 6, 9}};//1 способ (тип данных внутри - обтекающий)*/
    Matrix3 arr2 = new int [2][3]{{1, 3, 3},{6, 6, 9}};//2 способ (тип данных Matrix)
   /* for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            std::cout << arr2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for(int i = 0; i < 6; ++i)
    {
        //std::cout << arr2[0][i] << " ";
        std::cout << *(*(arr2 + 0) + i) << " ";
    }
    std::cout << std::endl;
    */

    //std::cout << arr2[0][3] << std::endl;
    int** arr = new int* [4];
    for(int i = 0; i < 4; ++i)
    {
        arr[i] = new int[2];
    }

    return 0;
}
