#include <iostream>

int sam_arr (int** arr, int row, int collumn)
{
    int temp = 0;
    for(int i = 0; i < row; ++i)
        for(int j = 0; j < collumn; ++j)
    {
        temp += arr[i][j];
    }
    return temp;
}
int main()
{
    int** arr = new int*[2];
    for(int i = 0; i < 2; ++i)
    {
        arr[i] = new int [2];
    }
    std::cout << sam_arr(arr, 2, 2) << std::endl;
    return 0;
}
