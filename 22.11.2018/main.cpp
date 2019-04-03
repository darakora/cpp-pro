#include <iostream>
#include <cmath>

struct Pair
{
    double first;
    double second;
};

double get_d (int a, int b, int c)
{
    double d = std::pow(b, 2) - a * c;
    return d;
}

/*struct Point
{
    int x;
    int y;
};

double lengs (Point p1, Point p2)
{
    return sqrt(std::pow(p2.x - p1.x , 2) + std::pow(p2.y - p1.y , 2));
}

Pair f (double a, double b, double c)
{
   Pair result;
   double d = get_d(a, b, c);
   result.first = -b - sqrt(d) / 2 * a;
   result.second = -b + sqrt(d) / 2 * a;
   return result;
}*/


int main()
{
/*    Pair res = f(5, 25, 2);
    std::cout << res.first << std::endl;
    std::cout << res.second << std::endl;
    /*Point result = f_2(2, 4);
    std::cout << result.x << std::endl;
    std::cout << result.y << std::endl;*/
    Vector a;

    return 0;
}
