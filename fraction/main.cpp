#include <iostream>
#include <string>
struct Fraction
{
    int m_num;
    int m_denum;
    Fraction ()
    {
        m_num = 0;
        m_denum = 1;
    }
    Fraction(int n, int d)
    {
    m_num = n;
    m_denum = d;
    }

};

Fraction mul(Fraction a, Fraction b)
{
    Fraction result;
    result.m_num = a.num * b.num;
    result.m_denum = a.denum * b.denum;
    return result;
}

struct Human
{
    std::string first_name;
    std::string last_name;
    Human () = default;
    Human (std::string f, std::string l)
    {
        first_name = f;
        last_name = l;
    }
};

int main()
{
    Human arr[3];
    {
    Human ("popo", "shoko");
    Human ("lolo", "shoko");
    Human ("koko", "shoko");
    }

    std::cout <<arr[1].first_name <<std::endl;
    return 0;
}
