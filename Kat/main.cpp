#include <iostream>
#include <cstdlib>
#include <algorithm>
//#define sum(a , b) (a) + (b)
//#define print (f, l) for_each (f, l)

void task_1 (int* array1,int* array2, int size_1, int size_2)
{
    int counter_1 = 0;
    for (int i = 0; i != size_1; ++i)
    {
        if(array1[i]  < 0)
        {
            ++counter_1;
        }
    }
    int counter_2 = 0;
    for (int i = 0; i != size_2; ++i)
    {
        if(array2[i] < 0)
        {
            ++counter_2;
        }
    }
    if (counter_1 < counter_2)
    {
        for(int i = 0; i < size_1; ++i)
        {
            std::cout << array1[i] <<std::endl;
        }
    }
    else
    {
        for(int i = 0; i < size_2; ++i)
        {
            std::cout << array2[i] <<std::endl;
        }
    }
}

int binary_search (int* arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int m;
    while(start < end)
    {
        m = (start + end) / 2;
        if (arr[m] == key)
        {
            return m;
        }
        if (arr[m] < key)
        {
            start = m +1;
        }
        if (arr[m] > key)
        {
            end = m - 1;
        }
    }
    return -1;
}

int average (int* arr, int first, int last)
{
    int size = last - first;
    int sum = 0;
    for(;first < last; ++first)
    {
        sum += arr[first] / size;
    }
    return sum;
}

int** start (int n, int m)
{
    int** A = new int *[n];
    for(int i = 0; i < n; ++i)
    {
        A[i] = new int [m];
    }
    return A;
}

void initializer (int** A, int n, int m)
{
    int sum_0 = 0;
    int sum_1 = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            A[i][j] = rand()/ 10000;
            std::cout << A[i][j] << " ";
            if(A[i][j] == 0)
            {
                ++sum_0;
            }
            if(A[i][j] == 1)
            {
                ++sum_1;
            }
        }
        std::cout << std::endl;
    }
    std::cout << sum_0 << " " << "sum_0" << " " << sum_1 << " " << "sum_1" << std::endl;
}


int** start2 (int n, int m)
{
    int** A = new int *[n];
    for(int i = 0; i < n; ++i)
    {
        A[i] = new int [m];
    }
    return A;
}

void initializer2 (int** A, int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            A[i][j] = rand ()%10;
            std::cout << A[i][j] << " ";
            if(A[i][j] == 0)
            {
                std::cout << A[i][j] <<std::endl;
            }
        }
        std::cout << std::endl;
    }

}
int main()
{
   /*int arr[10] = {1, 6, 3, 9, 68, 8};
    std::cout << average(arr, 0, 10) << " " << " : is " << "average"<< std::endl;
    std::cout << binary_search(arr,10, average(arr, 0, 10)) << " " << " : is index of binary_search for average" << std::endl;
    std::cout <<"first"<< std::endl;*/
    initializer(start(2, 6), 2, 6);
    std::cout <<" : is arr with 0 and 1 "<< std::endl;
    int array1[6] = {5, -6, 15, -20, 25, 30};
    int array2[5] = {30, -20, 50, -1, -2};
    task_1(array1, array2, 6, 5);
    std::cout <<" : is array witch have more number < 0) "<< std::endl;
    /*initializer2(start(2, 6), 2, 6);
    std::cout <<" : is array witch have number == 0 or no "<< std::endl;
    //initializer2(start2(2, 3), 2, );*/
   // std::cout <<" : is is array witch have number == 0 "<< std::endl;
    //std::vector <int> v1{1, 2, 3, 2, 6,1}
    //task_1(array, array_2, 6, 5);
    //mas_5(start2(12),12,start2(6),6); //для проверкb
   //mas_5(start(12),12,start(6),6, 5);
    //std::cout << binary_search(start(16),16, 2) << std::endl;
    //std::cout << binary_search(start(4),4, 5) << std::endl;

    return 0;
}
