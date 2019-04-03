#include <iostream>
#include <random>
#include <ctime>
#include "aldo_2d.h"
#include "functors.h"


int main()
{
    auto arr = new int[2][3] {{2, 6, 5},{4, 9, 8}};
    auto arr2 = new int[3][3]{{1, 1, 1},{1, 1, 1},{1, 1, 1}};
    generate_2d(arr, 2, 3, Functor());
    //for_each_2d(arr, 2, 3, [](int value){std::cout << value << " ";});
   // print_matix(arr, 2, 3);
   std::cout << task_1(arr, 3);

    return 0;
}
