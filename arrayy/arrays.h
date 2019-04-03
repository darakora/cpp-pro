#ifndef ARRAYS_H_INCLUDED
#define ARRAYS_H_INCLUDED
#include <cmath>
bool is_even (int value)
{
    return value % 2 == 0;
}

bool is_local_max_predic (int a, int b, int c)
{
    return(a < b && b > c);
}
//using BinaryOperation  = bool(*) (int, int, int);
//using BinaryPredicate = bool(*)(int, int);


/*void even_ar (int* array, int first, int last, UnaryPredicate p)
{
    for ( ; first < last; ++first)
    {
        if (p (array[first]))
        {
            std::cout << array[first] << std::endl;
        }
    }
}*/

void print_array (int* array, int size)
{
    for(int i = 0; i < size; ++i)
    {
        std::cout << array[i] <<std::endl;
    }
}

int sum_array (int* array, int size, int res)
{
    for(int i = 0; i < size; ++i)
    {
        if(array[i] % 2 == 0)
            res = res + array[i];
    }
    return res;
}

int print_even (int* array, int first, int last)
{
    int couter  = 0;
    for( ; first < last; ++first)
    {
        if (array[first] % 2 == 0)
        {
            ++couter;
            std::cout << array[first] << std::endl;
        }
    }
    return couter;
}

void print_even_9 (int* array, int first, int last)
{
    for( ; first < last; first += 2)
    {
        std::cout << array[first] << std::endl;
    }
}

void print_not_even (int* array, int first, int last)
{
    for( ; first < last; ++first)
    {
        if (array[first] % 2 != 0)
        {
            std::cout << array[first] << std::endl;
        }
    }
}

int task_8 (int* array, int first, int last)
{
    int counter = 0;
    for ( ; first < last; ++first)
    {
        if (array[first] % 2 != 0)
        {
            ++counter;
            std::cout << array[first] << std::endl;
        }
    }
    return counter;
}

int task_9 (int* array, int first, int last)
{
    int counter = 0;
    for ( ; last > first; )
    {
        if (array[--last] % 2 == 0)
        {
            ++counter;
            std::cout << array[last] << std::endl;
        }
    }
    return counter;
}

void task_10 (int* array, int first, int last)
{
    for (int i = first; i < last; ++i)
    {
        if (array[i] % 2 == 0)
        {
            std::cout << array[i] <<std::endl;
        }
    }
    for (int i = last-1; i > first; --i)
    {
        if (array[i] % 2 != 0)
        {
            std::cout << array[i] << std::endl;
        }
    }
}

void task_11 (int* array, int last, int k)
{
    for (int i = k; i < last; i += k)
    {
        std::cout << array[i] << std::endl;
    }
}

int max_element_mas (int* array, int first, int last)
{
    int maxelement = array[0];
    int index = 0;
    {
        for (; first < last; ++first)
        {
            if (array[first] > maxelement)
            {
                maxelement = array[first];
                index = first;
            }
        }
        return maxelement;
    }
}

int min_element_mas (int* array, int first, int last)
{
    int minelement = array[0];

    {
        for (int i = first; i < last; ++i)
        {
            if (array[i] < minelement)
            {
                minelement = array[i];
                index = i;
            }
        }
    }
    return minelement;
}

int polindrom (int* array, int size)
{
    int j = size - 1;
    for (int i = 0; i < j; ++i, --j)
    {
        if(array[i] != array[j])
            return false;
    }
    return true;
}

void fibonacce (int* array, int first, int last)
{
    array[0] = 0;
    array[1] = 1;
    for ( ; first < last; ++first)
    {
        array[first] = array[first - 1] + array[first - 2];
    }
}
void task_12 (int* array, int first, int last, int n)
{
    for ( ; first < last; first += n)
    {
        std::cout << array[first] <<std::endl;
    }
}

void task_13 (int* array, int first, int last, int n)
{
    for ( ; last - 1 >= first; last -= n, --last)
    {
        std::cout << array[last - 1] << std::endl;
    }
}

void task_14 (int* array, int first, int last)
{
    for (int i = first; i <= last; ++i)
    {
        if (i % 2 == 0)
            std::cout << array[i] << std::endl;
    }
    std::cout << std::endl;
    for ( int i = first; i <= last - 1; ++i)
    {
        if (i % 2 != 0)
            std::cout << array[i] << std::endl;
    }

}

void task_15 (int* array, int first, int last)
{
    for ( int i = first; i <= last - 1; ++i)
    {
        if (i % 2 != 0)
            std::cout << array[i] << std::endl;
    }
    std::cout << std::endl;
    for (; last >= first; last -= 1, --last)
    {
        if (first % 2 == 0)
            std::cout << array[last - 1] << std::endl;
    }
}

void task_16 (int* array, int first, int last)
{
    int i = first;
    int j = last - 1;
    for ( ; i < j; ++i, --j)
    {
        std::cout << array[i] << " " << array[j] << std::endl;
    }
}

void task_17 (int* array, int first, int last)
{
    int i = first;
    int i2 = first+1;
    int j = last - 1;
    int j2 = last - 2;
    for ( ; i < j; ++i, ++i2, --j, -- j2)
    {
        std::cout << array[i] << array[i2] << " " << array[j]<< array[j2] << std::endl;
    }
}

int more_10 (int* arr, int first, int last)
{
    for ( ; first < last; ++first)
    {
        if(arr[first] > 10)
            return arr[first];
    }
    return 0;
}

int task_19 (int* arr, int first, int last)
{
    int element = arr[first];
    int index = first;
    {
        for (; first < last; ++first)
        {
            if (element < arr[first] < arr[last])
            {
                element = arr[first];
                index = first;
            }
        }
        return index;
    }
}

int task_20 (int* arr, int first, int last)
{
    int sum = 0;
    for ( ; first < last; ++first)
    {
        sum += arr[first];
    }
    return sum;
}

int task_21 (int* arr, int first, int last)
{
    int sum = 0;
    int size = last - first;
    for ( ; first < last; ++first)
    {
        sum += arr[first];
    }
    return sum / size;
}

int task_22 (int* arr, int first, int last)\
{
    first = first+1;
    last = last- 1;
    int sum = 0;
    for ( ; first < last; ++first)
    {
        sum += arr[first];
    }
    return sum;
}

int task_23 (int* arr, int first, int last)
{
    first = first+1;
    last = last- 1;
    int sum = 0;
    int size = last - first;
    for ( ; first < last; ++first)
    {
        sum += arr[first];
    }
    return sum / size;
}

void zapoln_ar_chet (int* array, int size)
{
    int temp = 0;
    for (int i = 0; i < size; ++i, temp += 2)
    {
        array[i] = temp;
        std::cout << array[i] << std::endl;
    }
}

void zapoln_step_2 (int* array, int size)
{
    for(int i = 0; i < size; ++i)
    {
       array[i] = std::pow(2, i);
       std::cout << array[i] << std::endl;
    }
}

int razradn (int a)
{
    int temp = 0;
    for (; a; a /= 10)
    {
        temp += a%10;
    }
    return temp;
}

int sum_elem_men_chisla (int* array, int first, int last, int chislo)
{
    int sum = 0;
    for ( ; first < last; ++first)
    {
        if (array[first] < chislo)
        {
            ++sum;
        }
    }
    return sum;
}

bool el_mas_na_5 (int* array, int first, int last)
{
    for ( ;first < last; ++first)
    {
        if(array[first]%10 != 5)
            return false;
    }
    return true;
}

int one_el_mas_na_5 (int* array, int first, int last)
{
    for ( ; first < last; ++first)
    {
        if (array[first]%10 == 5)
            return true;

    }
    return false;
}

int fuct (int a)
{
    int temp = 1;
    for (int i = 2; i <= a; ++i)
    {
        temp *= i;
    }
    return temp;
}

bool elem_mas_chered (int* array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (array[i] > 0 ^ array[i + 1] > 0)
        {
            return 1;
        }
    }
    return 0;
}

void zapoln_mas_chisl_fib (int* array, int size)
{
    array[0]  = 0;
    array[1] = 1;
    for (int i = 2 ; i < size; ++i)
    {
    array[i] = array[i - 1] + array[i - 2];
    std::cout << array[i] <<std::endl;
    }
}

int elem_men_loc_min (int* array, int size)
{
    int counter = 0;
    for (int i = 1; i < size-1; ++i)
    {
        if(array[i] < array[i - 1] && array[i] < array[i + 1])
        {
            ++counter;
        }
    }
    return counter;
}

int less_posled (int* array, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        if (array[i] > array[i + 1])
        {
            return true;
        }
    }
    return false;
}

/*int is_local_max (int* array, int first, int last, BinaryOperation o)
{
    int max = array[first];
    int result = 0;
    for ( ; first < last; ++first)
    {
        if(!o(array[first-1], array[first], array[first + 1]) && array[first] > max);
        {
            ++result;
        }
    }
    return result;
}*/


int min (int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else {
        return b;
    }
}

void swap (int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*void geometr_progr (int* array, int size)
{
    for (int i = 0, int j = size - 1; ++i, --j)
        {
        swap(array + i, array + j);
        }
}*/

int* f (int* first, int* last)
{
    for ( ; first < last; ++first)
    {
        if (*first > 0);
    }
    return first;
}

int fill_array(int* first, int* last)
{
    int temp = 7;
    for ( ; first < last; ++first, temp += 10)
    {
        *first = temp;
    }
}

int sum_cif_chisla (int a)
{
    int temp = 0;
    for (int i = 0; a ; i /= 10)
    {
        temp += a % 10;
    }
    return temp;
}

int task_24(int* array, int size)
{
    int d = array[1] - array[0];
    for (int i = 1; i < size; ++i)
    {
        if(array[i] - array[i - 1] != d)
        {
            return false;
        }
    }
    return d;
}

int task_25 (int* array, int size)
{
    double q = array[1] / array[0];
    for (int i = 1; i < size; ++i)
    {
        if(array [i] / array[i - 1] != q)
        {
            return false;
        }
    }
    return q;
}

int for_21 (int n)
{
    int temp = 1;
    int res = 0;
    for (int i = 1; i <= n; ++i)
    {
        temp *= i;
        res += 1/temp;
    }
    return res;
}

int for_22 (double x, int n)
{
    int temp = 1;
    int res = 1;
    for (int i = 1; i <= n; ++i)
    {
        temp *= i;
        res += std::pow(x, i)/temp;
    }
    return res;
}

int for_23 (double x, int n)
{
    int temp = 0;
    int fuct = 1;
    for (int i = 3; i <= n; ++i)
    {
        fuct *= i;
        temp += std::pow(-1, i) *std::pow(x , 2 * i + 1) / fuct;
    }
    return temp;
}

void for_33 (int n)
{
    int temp1 = 0;
    int temp2 = 1;
    int temp;
    for (int i = 2; i < n; ++i)
    {
        temp = temp1 + temp2;
        std::cout << temp << std::endl;
        temp1 = temp2;
        temp2 = temp;
    }
}

void for_39 (int a, int b)
{
    for (; a <= b; ++a)
    {
        for (int i = 0; i < a; ++i)
          {
              std::cout << a << std::endl;
          }
    }
}

bool pol (int* array, int size)
{
    int j = size - 1;
    {
        for (int i = 0; i < size; ++i, --j)
            if(array[i] != array[j])
        {
            return false;
        }
    }
    return true;
}

int arik (int* array, int first, int last)
{
    int temp = 0;
    for ( ; first < last; ++first)
    {
        temp += array[first];
    }
    return temp;
}

int swap_2 (int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int ror (int* array, int first, int last)
{
    int counter = 0;
    for ( ; first < last -1 ;)
    {
        if(array[++first] % 2 == 0)
        {
            ++counter;
            std::cout << array[first] <<std::endl;
        }
    }
    return counter;
}

void zapol (int* array, int size)
{
    int temp = 0;
    for (int i = 0; i < size; ++i, temp +=2)
    {
        array[i] = temp;
         std::cout << array[i] <<std::endl;
    }

}
#endif // ARRAYS_H_INCLUDED
