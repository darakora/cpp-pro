#include <iostream>

struct Vector
{
    int* arr;
    int m_size;
    int m_copasity;
    Vector (int size, int capasity)
    {
        int m_size = size;
        int m_copasity = capasity;
    }
    Vector()
    {
        m_size = 0;
        m_copasity = 100;
        arr = new int;
    }
};

/*Void resize()
{
    int* temp = new int[m_capasity];
    copy(arr, arr+m_capasity, m_capasity);
    delete[]arr;
    arr = temp;
}

Void push_back (int value)
{
    if (m_size == m_capasity)
    {
        m_capasity *= 2;
        resize();
    }
}

struct String
{
    char* str;
    int = size;
    int = m _capasity;
    String()
    {
        m_capasity = 100;
        m_size = 0;
        str = new int [m_capasity];
    }
};

struct Date
{
    int day;
    int month;
    int year;
Date (int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}
};

struct Person
{
    Date bd;
    std::string sex;
    std::string first_name;
    std:string second_name;
Person(std::string s, std::string f, std::string s_n)
{
    sex = s;
    first_name = f;
    second_name = s_n;
}
};

struct Point
{
    int x;
    int y;
    Point (int x_, int y_)
    {
        x = x_;
        y = y_;
    }
Point()
{
    int x = 0;
    int y = 0;
}
};*/

struct Integer
{
    int m_value;
    Integer operator + (Integer *this, const Integer &that)const
    {
        return Integer (this -> value + that.value);
        Integer (int value = 0):m_value(value)[];
    }
};

int main()
{
    Integer a;
    /*Vector a();
    std::cout << a << std::endl;
    Point b (2, 4);
    Date bd(27, 11, 2001);
    std::cout << bd.day << " . " << bd.month << " . " << bd.year <<
    std::cout << b.x << " " << b.y <<std::endl;*/
    return 0;
}
