#include <iostream>

int** array_ (size_t row, size_t column)
{
    int** arr = new int *[row];
    for(size_t i = 0; i != row; ++i)
    {
        m[i] = new int [column];
    }
}

void free_array (int** arr, size_t row, size_t column)
{
    for(size_t i  = 0; i != row; ++i)
    {
        delete [] arr[i];
        delete [] m;
    }
}

int main()
{

    return 0;
}
