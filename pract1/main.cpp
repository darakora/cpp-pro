#include <iostream>

//char* str = "Hello";
/*unsigned int f(char* str)
{
    int temp = 0;
    for(int i = 0; str[i] != 0; ++i)
    {
        if(is_vowe(str[i]))
        {
            ++temp;
        }
    }
    return temp;
}

unsigned int f_1(char* str)
{
    int temp = 0;
    for(; *str; ++str)
    {
        if(is_vowe(*str))
        {
            ++temp;
        }
    }
    return temp;
}*/

void strcpy (char* first, char* d_first)
{
    while(*d_first = *first)
    {
        ++d_first;
        ++first;
    }
}

unsigned int str(char* first)
{
    int counter = 0;
    for(; *first; ++first)
    {
        if(*first = ' ')
        {
            ++counter;
        }
    }
    return counter;
}

unsigned int str_lengs(char* first)
{
    int counter = 0;
    for(; *first; ++first)
    {
        ++counter;
    }
    return counter + 1;
}

char* r(char* str)
{
    char* result = new char[str_lengs(str) * 2];
    for(int i = 0, j = 0; str[i]; ++i, ++j)
    {
        result[j] = str[i];
        ++j;
        result[i] = ' ';
    }
    return result;
}

char* r_1(char* str)
{
    char* result = new char[str_lengs(str) * 2];
    char* temp = result;
    while(*str)
    {
        *temp++ = *str++;
        *temp++ = ' ';
        *temp = 0;
    }
    return result;
}


int main()
{
    char* str = "Hello world";
    char str1[12];
    strcpy(str, str1);
    std::cout << str1;


    return 0;
}
