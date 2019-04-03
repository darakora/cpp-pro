#ifndef ALDO_2D_H_INCLUDED
#define ALDO_2D_H_INCLUDED
#include <random>
#include <ctime>
#include <iostream>

template <class Matrix, class Generator>
void generate_2d(Matrix m, int column, int row, Generator g) //функция чем-то заполняет массив
{
    for(int i = 0; i < column; ++i)
    {
        for(int j = 0; j < row; ++j)
        {
            m[i][j] = g();
        }
    }
}

template <class Matrix, class UF>
void for_each_2d(Matrix m, int column, int row, UF f)
{
    for(int i = 0; i < column; ++i)
    {
        for(int j = 0; j < row; ++j)
        {
            f(m[i][j]);
        }
    }
}

template <class Matrix>
void print_matix(Matrix m, int column, int row)
{

    for(int i = 0; i < column; ++i)
    {
        for(int j = 0; j < row; ++j)
        {
            std::cout << m[i][j] << " ";
            //std::cout.width(4);//увеличить размер между пробелами
        }
        std::cout << std::endl;
    }
}

template <class Matrix>
int task_1(Matrix m, int size)
{
    int counter = 0;
    int result = 0;
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            if(m[i][j] == m[j][i])
            {
                ++counter;
            }
        }
        if(counter == size)
        {
            result++;
        }
        counter = 0;
    }
}



#endif // ALDO_2D_H_INCLUDED
