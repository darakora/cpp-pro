#ifndef BEGIN_H_INCLUDED
#define BEGIN_H_INCLUDED


int f (int a)
{
    return 4 * a;
}
int f2 (int a)
{
    return std::pow(a, 2);
}
int f3 (int a, int b)
{
    int s = a * b;
    int p = 2 * (a + b);
    std::cout << s << " ";
    return p;
}
double f4 (double d)
{
    return Pi * d;
}
int f5 (int a)
{
    int s = 6 * pow(a, 2);
    int v = std::pow(a, 3);
    std::cout << s << " ";
    return v;
}
int f6 (int a, int b, int c)
{
    int s = 2 * (a * b + b * c + a * c);
    int v = a * b * c;
    std::cout << s << " ";
    return v;
}
double f7 (double r)
{
    double l = 2 * Pi * r;
    double s = Pi * std::pow(r, 2);
    std::cout << l << " ";
    return s;
}
int f8 (int a, int b)
{
    int t = (a + b) / 2;
    std::cout << "Среднее арифметическое a и b: ";
    return t;
}
double f9 (double a, double b)
{

    double t = std::sqrt(a * b);
    std::cout << "Среднее геометрическое a и b: ";
    return t;
}
int f10 (int a, int b)
{
    int sum = std::pow (a, 2) + pow(b, 2);
    int raz = std::pow(a, 2) - pow(b, 2);
    int pro = std::pow(a,2) * pow(b, 2);
    int cha = std::pow(a,2) / pow(b, 2);
    std::cout << sum <<" ";
    std::cout << raz << " ";
    std::cout << pro << " ";
    return cha;
}
int f11 (int a, int b)
{
    int sum = std::abs(a) + std::abs(b);
    int raz = std::abs(a) - std::abs(b);
    int pro = std::abs(a) * std::abs(b);
    int cha = std::abs(a) / std::abs(b);
    std::cout << sum<<" ";
    std::cout << raz << " ";
    std::cout << pro << " ";
    return cha;
}
int f12 (int a, int b)
{
    int c = std::sqrt(std::pow(a, 2)+std::pow(b, 2));
    int p = a + b + c;
    std::cout << c << " ";
    return p;
}
double f13 (double r1,double r2)
{
    double s1 = Pi * std::pow(r1, 2);
    double s2 = Pi * std::pow(r2, 2);
    double s3 = s1 - s2;
    std::cout << s1 << " ";
    std::cout << s2 << " ";
    return s3;
}
double f14 (int l)
{
    double r = l / (2 * Pi);
    double s = Pi * std::pow(r, 2);
    std::cout << r << " ";
    return s;
}
double f15 (double s)
{
    double d = std::sqrt(4 * s / Pi);
    double l = Pi * d;
    std::cout << d << " ";
    return l;
}
double f16 (double x1, double x2)
{
    return std::abs(x2 - x1);
}
int f17 (int a, int b, int c)
{
    int ac = c - a;
    int bc = c - b;
    int sum = ac + bc;
    std::cout << ac << " ";
    std::cout << bc << " ";
    return sum;
}
int f18 (int a, int b, int c)
{
    int ac = c - a;
    int bc = c - b;
    int pro = ac * bc;
    std::cout << ac << " ";
    std::cout << bc << " ";
    return pro;
}
int f19 (int x1, int x2, int y1, int y2)
{
    int a = y2 - y1;
    int b = x2 - x1;
    int p = 2 * (a + b);
    int s = a * b;
    std::cout << p << " ";
    return s;
}
int f20 (int x1, int x2, int y1, int y2)
{
    int a = std::pow((x2 - x1), 2);
    int b = std::pow((y2 - y1), 2);
    return std::sqrt(a + b);
}
int f21 (int x1, int x2, int x3, int y1, int y2, int y3)
{
    int a = std::pow((x2 - x1),2);
    int b = std::pow((y2 - y1), 2);
    int s1 = std::sqrt(a + b);
    int c = std::pow((x2 - x3), 2);
    int d = std::pow((y2 - y3), 2);
    int s2 = std::sqrt(c + d);
    int g = std::pow((x3 - x1), 2);
    int f = std::pow((y3 - y1), 2);
    int s3 = std::sqrt(g + f);
    int p =(s1 + s2 + s3) / 2;
    int P = s1 + s2 + s3;
    int S = std::sqrt(p * (p - s1) * (p - s2) * (p - s3));
    std::cout << P << " ";
    return S;
}
void f22 (int a, int b)
{
    int c = a;
    int d = b;
    std::cout << d << " " << c;
}
void f23 (int a, int b, int c)
{
    int a1 = a;
    int b1 = b;
    int c1 = c;
    b = a1;
    c = b1;
    a = c1;
    std::cout << a << " " << b << " " << c << std::endl;
}
void f24 (int a, int b, int c)
{
    int a1 = a;
    int b1 = b;
    int c1 = c;
    b = c1;
    c = a1;
    a = b1;
    std::cout << a << " " << b << " " << c <<std::endl;
}
int f25 (int x)
{
    return 3 * std::pow(x, 6) - 6 * std::pow(x, 2) - 7;
}
int f26 (int x)
{
    return 4 * std::pow (x - 6, 6) - 7 * (x - 3, 3) + 2;
}

int f27 (int a)
{
    int a2 = std::pow(a, 2);
    int a4 = std::pow(a, 4);
    int a8 = std::pow(a, 8);
    std::cout << a2 << " ";
    std::cout << a4 << " ";
    return a8;
}
int f28 (int a)
{
    int a2 = std::pow(a, 2);
    int a3 = std::pow(a, 3);
    int a5 = std::pow(a, 5);
    int a10 = std::pow(a, 10);
    int a15 = std::pow(a, 15);
    std::cout << a2 << " ";
    std::cout << a3 << " ";
    std::cout << a5 << " ";
    std::cout << a10 << " ";
    return a15;
}
double f29(double a)
{
    double rad = (a * Pi) / 180;
    return rad;
}
double f30 (double a)
{
    double rad = (a * 180) / Pi;
    return rad;
}
double f31 (double f)
{
    return (f - 32) * (5.0 / 9.0);
}
double f32 (double c)
{
    return (c * 9.0 / 5.0) + 32;
}
int f33 (int x, int a, int y)
{
    int kg = a / x;
    int c = (y * a) / x;
    std::cout << kg << " ";
    return c;
}
double f34 (double x, double a, double y, double b)
{
    double kg_c = a / x;
    double kg_i = b / y;
    double r = a / b;
    std::cout << kg_c << " " << kg_i << " ";
    return r;
}
double f35 (double v,double u,double t1,double t2)
{
    double k = v * t1;
    double vk = v - u;
    double s = k * vk * t2;
    std::cout << s << std::endl;
}
double f36 (double v1,double v2,double s,double t)
{
    double v3 = v1 + v2;
    double s1 = v3 * t + s;
    std::cout << s1 << std::endl;
}
double f37 (double v1,double v2,double s,double t)
{
    double r = std::abs(s- (v1 + v2) * t);
    std::cout<< r <<std::endl;
}
double f38 (double a,double b)
{
    double x = ( - b) / a;
    std::cout << x << std::endl;
}
double f39 (double a,double b,double c)
{
    double d = std::pow(b,2) - 4 * a * c;
    double x1 = (-b + std::sqrt(d)) / 2 * a;
    double x2 = (-b - std::sqrt(d)) / 2 * a;
    std::cout << std::min(x1,x2) << std::endl;
    std::cout << std::max(x1,x2) << std::endl;
}
double f40 (double a1,double b1,double c1,double a2,double b2,double c2)
{
    double d = a1 * b2 - a2 * b1;
    double x = (c1 * b2 - c2 *b1) / d;
    double y = (a1 * c2 - a2 * c1) / d;
    std::cout << x <<std::endl;
    std::cout << y << std::endl;
}

#endif // BEGIN_H_INCLUDED
