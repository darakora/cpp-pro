#include <iostream>

void print_matrix (int** arr, int column, int row)
{
    for(int i = 0; i < column; ++i)
    {
        for(int j = 0; j < row; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int** f (int** m, int column, int row)
{
    int** m1 = new int*[column - 1];
    for(int i = 0; i < row; ++i)
    {
        m1[i] = new int[row];
    }
    for (int i = 0; i < column - 1; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            m1[i][j] = m[i + 1][j];
        }
    }
    return m1;
}
int main()
{
    int** arr = new int*[3];
    for(int i = 0; i < 3; ++i)
    {
        arr[i] = new int[3];
    }
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            arr[i][j] = i + j;
        }
    }
    auto result = f(arr, 3, 3);
    print_matrix(arr, 2, 3);
    return 0;
}
