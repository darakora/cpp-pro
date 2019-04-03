#include <iostream>
#include <stdexcept>

struct Date
{
    private :
    unsigned int m_day;
    Month m_month;
    public:
    set_day(unsigned int d)
    {
        m_day = d;
        if(!is_valid_day(d))
        {
            throw std::out_of_range("Ex");
        }
    }
};

void set_moth(Month m)
    m_month = m;
}
{

enum Month{Jan, Fab};

bool is_valid_day(unsigned int day, unsigned int month)
{
    Pair temp[12] = {31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19};
    return day <= arr[month - 1];
}

int main()
{
    return 0;
}
