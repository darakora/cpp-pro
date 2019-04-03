#include <iostream>

int f(int* arr, int first, int last)
{
    int maxelement = arr[0];
        for (; first < last; ++first)
        {
            if (arr[first] < arr[first-1] && arr[first] < arr[first+1])
            {
            maxelement = arr[first];
            std::cout << maxelement << "max" << std::endl;
            }
        }
    return maxelement;
}

int main()
{
    int arr[9] = {8, 5, 9, 7, 4, 9, 10, 2, 8};
    int res = f(arr, 0, 9);
    std::cout << res << std::endl;
    return 0;
}
