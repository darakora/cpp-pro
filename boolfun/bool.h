#ifndef BOOL_H_INCLUDED
#define BOOL_H_INCLUDED

bool more_than_2 (int value)
{
    return value > 2;
}
bool less_than_minus_2(int value)
{
    return value < -2;
}
bool less_num (int value1,int value2)
{
    return value1 < value2;
}
bool more_or_equal_0( int value)
{
    return value >= 0;
}
bool less_or_equal_3 (int value)
{
    return value <= 3;
}
bool is_even (int value)
{
    return value % 2 == 0;
}
bool is_not_even (int value)
{
    return !is_even(value);
}
bool great (int value1, int value2)
{
    return value1 > value2;
}
bool  less_or_equal (int value1, int value2)
{
    return value1 <= value2;
}
bool ends_zero (int value)
{
    return value % 10 == 0;
}
bool is_pos (int value1)
{
    return value1 > 0;
}
bool great_or_equal (int value1, int value2)
{
    return value1 >= value2;
}
int min (int value1, int value2)
{
    if (value1 < value2)
    {
        return value1;
    }
    return value2;
}
bool double_inequality (int value1,int value2,int value3)
{
    return value1 < value2 < value3;
}
bool f7 (int value1, int value2, int value3)
{
    return value3 < value2 < value1;
}
bool two_valued (int value)
{
    return (value >= 10 && value < 100);
}
bool the_same_pair (int value1, int value2, int value3)
{
    return value1 == value2 || value1 == value3 || value2 == value3;
}
bool is_not_the_same_pair (int value1, int value2, int value3)
{
    return value1!= value2 || value1 != value3 || value2 != value3;
}
bool all_not_the_same_pair (int value1, int value2, int value3)
{
    return value1!= value2 && value1 != value3 && value2 != value3;
}
bool ascending_sequense (int value1, int value2, int value3)
{
    return value1 < value2 && value2 < value3;
}
bool decreasing_sequense (int value1, int value2, int value3)
{
    return value1 > value2 && value2 > value3;
}
bool polindrom_6 (int x)
{
    return  x/100000 == x % 10 && x / 10000 % 10 == x / 1000 % 10 && x / 100 % 10 == x / 10 % 10;
}
bool polindrom_4 (int x)
{
    return x/1000 == x%10 && (x/100)%10 == (x/100)%10;
}
bool vesh (int a, int b, int c)
{
    double d = pow(b, 2) - 4*a *c;
    return d > 0;
}

bool second_chet(int x, int y)
{
    return x < 0 && y > 0;
}
bool fourth_chet(int x, int y)
{
    return x > 0 && y < 0;
}
bool second_and_third_chet(int x, int y)
{
    return x < 0 && y > 0;
}
bool first_and_fourth_chet (int x, int y)
{
    return x > 0 && y < 0;
}
bool coord (int x,int y, int x1,int y1, int x2,int y2)
{
    return ((y < y1) && (y > y2) && (x > x1) && (x < x2));
}
bool equilateral_triangle (int a, int b, int c)
{
    return a == b && a == c;
}
bool isosceles_triangle (int a, int b, int c)
{
    return a == b || a == c || b == c;
}
bool right_traingle (int a, int b, int c)
{
    bool t = b == a/2;
    return t;
}
bool abc (int a, int b, int c)
{
    int t = a != 0  && b != 0 && c != 0;
    return t;
}
bool chess_white (int x,int y)
{
    return (x + y) %2 == 0;
}
bool one_color_chess (int x, int y, int x1, int y1)
{
    return (x + y + x1 + y1) % 2 == 0;
}



#endif // BOOL_H_INCLUDED
