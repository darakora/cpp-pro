#include <iostream>
#include <fstream>

struct Fraction
{
    int m_num;
    int m_denum;
    Fraction() : m_num(0), m_denum(1){}
    Fraction(int num, int denum) : m_num(num), m_denum(denum){}
    operator bool()
    {
        std::cout << "operator bool" << std::endl;
        return m_num != 0;
    }
};

std::ostream& operator << (std::ostream& out, const Fraction& f)
{
    return out << f.num << "/" << f.denum << ;
}

int main()
{
    Fraction a(1, 2);
    Fraction b;
    if(b)
    {
        std::cout << "Hello world";
    }
    bool result = (bool)a;
    return 0;
}
