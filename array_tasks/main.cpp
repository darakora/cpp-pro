#include <iostream>
#include <set>
#include <cmath>

struct Point
{
    int x;
    int y;
    Point()= default;
    Point(int _x, int _y):x(_x), y(_y){}

    void distanse(const Point& that)
    {
        std::cout << std::sqrt(std::pow(that.x - this->x, 2) + std::pow(that.y - this->y,2)) << std::endl;
    }
};

int main()
{

    return 0;
}
