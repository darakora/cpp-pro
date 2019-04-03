#include <iostream>
#include <cassert>

struct Date
{
    int m_day;
    int m_month;
    Date(){
    m_day = 1;
    m_month = 1;
    }
    Date(int day, int month)
    {
        m_day = day;
        m_month = month;
    }
};

bool operator == (Date a, Date b)
{
    return a.m_month == b.m_month && a.m_day == b.m_day;
}

bool operator != (Date a, Date b)
{
    return !(a == b);
}

bool operator > (Date a, Date b)
{
    if (a.m_month > b.m_month)
    {
         return true;
    }
    if (a.m_month < b.m_month)
    {
        return false;
    }
    return a.m_day  > b.m_day;
}

bool operator >= (Date a, Date b)
{
    return a > b && a == b;
}

struct Astrological_sign
{
    std::string name;
    Date start;
    Date end;
    Astrological_sign() = default;
    Astrological_sign(std::string n, Date s, Date e)
    {
        name = n;
        start = s;
        e = end;
    }
};

int main()
{
    struct Astrological_sign_arr
{
    Astrological_sign_arr array[12] = Astrological_sign_arr{"Aries", Date(22, 3), Date(21, 4)),
    Astrological_sign_arr("Tauras", Date(22, 12), Date(21,1))}
    std::find_if(arr, arr + 12, [d](Astrological_sign_arr value){if(value.start <= d) && v.end >= d});
    Astrological_sign_arr result;
};
    assert(Date(1, 1) == Date());
    assert(Date(2, 12) == Date(2, 12));
    assert(!(Date(3, 12) == Date(2, 12));//проверить другие опраторы
    return 0;
}
