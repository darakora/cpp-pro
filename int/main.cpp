#include <iostream>
#include <cmath>
int f1 (int L)
{
    int m = L/100;
    return m;
}
int f2 (int M)
{
    int t = M/1000;
    return t;
}
int f3 (int b)
{
    int k = b/1024;
    return k;
}
int f4 (int a, int b)
{
    int k = a/b;
    return k;
}
int f5 (int a, int b)
{
    int t = a%b;
    return t;
}
int f6 (int value)
{
    int a = (value/10);
    int b = value%10;
    std::cout<<a<< " " ;
    return b;
}
int f7 (int a)
{
    int b = a/10;
    int c = a%10;
    std::cout<<b+c<< " " ;
    return b*c;
}
int f8 (int a)
{
    int b = a/10;
    int c = a%10;
    int d = c*10;
    return b+d;
}
int f9 (int a)
{
 return (a/100)%10;
}
int f10 (int value)
{
    int a = (value/100)%10;
    int b = value%10;
    std::cout<<a<< " ";
    return b;
}
int f11 (int value)
{
    std::cout << "write value"<<std::endl;
    std::cin>>value;
    int a = value%10;
    int b = (value/10)%10;
    int c = (value/100)%10;
    int p = a * b *c;
    std::cout<< a + b + c<<" ";
    return p;
}
int f12 (int value)
{
    int a = value%10;
    int b = (value/10)%10;
    int c = (value/100)%10;
    int b2 = (b*10)+c;
    int c2 = a*100;
    return b2+c2;
}
int f13(int value)
{
    int a = (value/100)%10;
    int b = (value/10)%10;
    int c = value%10;
    std::cout << b<<c;
    return a;
}
int f14 (int value)
{
    int a = (value/100)%10;
    int b = (value/10)%10;
    int c = value%10;
    std::cout << a << c;
    return b;
}
int f15 (int value)
{
    int a = (value/100)%10;
    int b = (value/10)%10;
    int c = value%10;
    std::cout << b << c;
    return a;
}
int f16 (int value)
{
    int a = (value/100)%10;
    int b = (value/10)%10;
    int c = value%10;
    std::cout << a << c;
    return b;
}
int f17 (int value)
{
    int a = (value/100)%10;
    return a;
}
int f18 (int value)
{
    int a = (value/1000)%10;
    return a;
}
int f19 (int sek)
{
    int minut = sek /60;
    return minut;
}
int f20 (int sek)
{
    int hours = sek/3600;
 return hours;
}
//21 22 23
int f24 (int day)
{
    int a = day%7;
    return a;
}
int f25 (int day)
{
    int a = (day + 3)%7;
    return a;
}
int f26 (int day)
{
    int a = (day + 1)%7;
    return a;
}
int f27 (int day)
{
    int a = (day + 5)%7;
    return a;
}
int f28 (int day,int day_in_week)
{
    int a = (day+ day_in_week -2)%7;
    return a;
}
int f29 (int a, int b,  int c)
{
    int t = (a/c) * (a/c);
    double st = t*sqrt(c);
    int st2 = a*b - t;
    std::cout << t << " " ;
    return st;
}
int f30 (int n)
{
    int t = (n-1) / 100+1;
    return t;
}
int main()
{
    int res1 = f1(4000);
    std::cout<< res1 <<std::endl;
    int res2 = f2(6000);
    std::cout<< res2 << std::endl;
    int res3 = f3(1645);
    std::cout<< res3 << std::endl;
    int res4 = f4(600, 30);
    std::cout<< res4 << std::endl;
    int res5 = f5(65, 14);
    std::cout<< res5 << std::endl;
    int res6 = f6(61);
    std::cout<< res6 << std::endl;
    int res7 = f7(23);
    std::cout<< res7 << std::endl;
    int res8 = f8(23);
    std::cout<< res8 << std::endl;
    int res9 = f9(236);
    std::cout<< res9 <<std::endl;
    int res10 = f10(645);
    std::cout << res10 << std::endl;
    int res11 = f11(645);
    std::cout << res11 << std::endl;
    int res12 = f12(986);
    std::cout<< res12 << std::endl;
    int res13 = f13(685);
    std::cout<< res13 << std::endl;
    int res14 = f14(381);
    std::cout<< res14 << std::endl;
    int res15 = f15(123);
    std::cout<< res15 << std::endl;
    int res16 = f16(645);
    std::cout << res16 << std::endl;
    int res17 = f17(1311);
    std::cout << res17 << std::endl;
    int res18 = f18(3111);
    std::cout << res18 << std::endl;
    int res19 = f19(300);
    std::cout << res19 << std::endl;
    int res20 = f20(456789);
    std::cout << res20 << std::endl;
    int res24 = f24(360);
    std::cout << res24 << std::endl;
    int res25 = f25(360);
    std::cout << res25 << std::endl;
    int res26 = f26(360);
    std::cout << res26 << std::endl;
    int res27 = f27(32);
    std::cout << res27 << std::endl;
    int res28 = f28(1, 4);
    std::cout << res28 << std::endl;
    int res29 = f29(8, 8, 6);
    std::cout << res29 << std::endl;
    int res30 = f30(2008);
    std::cout << res30 << std::endl;
    return 0;
    }
