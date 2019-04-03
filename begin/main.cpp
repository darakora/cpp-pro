#include <iostream>
#include <cmath>
#define Pi 3.14
using namespace std;

int f(int a)
{
    return 4*a;
}
int f2(int a)
{
    return pow(a,2);
}
int f3(int a, int b)
{
    int s= a*b;
    int p= 2*(a+b);
    std::cout << s <<" ";
    return p;
}
double f4(double d)
{
    return Pi*d;
}
int f5(int a)
{
    int s= 6*pow(a,2);
    int v= pow(a,3);
    std::cout << s <<" ";
    return v;
}
int f6(int a, int b, int c)
{
    int s= 2*(a*b+b*c+a*c);
    int v= a*b*c;
    std::cout << s <<" ";
    return v;
}
double f7(double r)
{
    double l=2*Pi*r;
    double s=Pi*pow(r,2);
    std::cout << s <<" ";
    return s;
}
int f8(int a, int b)
{
    int t=(a+b)/2;
    std::cout <<"Среднее арифметическое a и b: ";
    return t;
}
double f9(double a, double b)
{

    double t=sqrt(a*b);
    std::cout <<"Среднее геометрическое a и b: ";
    return t;
}
int f10(int a, int b)
{
    int sum=pow(a,2)+pow(b,2);
    int raz=pow(a,2)-pow(b,2);
    int pro=pow(a,2)*pow(b,2);
    int cha=pow(a,2)/pow(b,2);
    std::cout<<sum<<" ";
    std::cout<<raz<<" ";
    std::cout<<pro<<" ";
    return cha;
}
int f11(int a, int b)
{
    int sum=abs(a)+abs(b);
    int raz=abs(a)-abs(b);
    int pro=abs(a)*abs(b);
    int cha=abs(a)/abs(b);
    std::cout<<sum<<" ";
    std::cout<<raz<<" ";
    std::cout<<pro<<" ";
    return cha;
}
int f12(int a, int b)
{
    int c=sqrt(pow(a,2)+pow(b,2));
    int p=a+b+c;
    std::cout<<c<<" ";
    return p;
}
double f13(double r1,double r2)
{
    double s1=Pi*pow(r1,2);
    double s2=Pi*pow(r2,2);
    double s3=s1-s2;
    std::cout<<s1<<" ";
    std::cout<<s2<<" ";
    return s3;
}
double f14(int l)
{
    double r=l/(2*Pi);
    double s=Pi*pow(r,2);
    std::cout<<r<<" ";
    return s;
}
double f15(double s)
{
    double d=sqrt(4*s/Pi);
    double l=Pi*d;
    std::cout<<d<<" ";
    return l;
}
double f16(double x1, double x2)
{
    return abs(x2-x1);
}
int f17(int a, int b, int c)
{
    int ac=c-a;
    int bc=c-b;
    int sum=ac+bc;
    std::cout<<ac<<" ";
    std::cout<<bc<<" ";
    return sum;
}
int f18(int a, int b, int c)
{
    int ac=c-a;
    int bc=c-b;
    int pro=ac*bc;
    std::cout<<ac<<" ";
    std::cout<<bc<<" ";
    return pro;
}
int f19(int x1, int x2, int y1, int y2)
{
    int a=y2-y1;
    int b=x2-x1;
    int p=2*(a+b);
    int s=a*b;
    std::cout<<p<<" ";
    return s;
}
int f20(int x1, int x2, int y1, int y2)
{
    int a=pow((x2-x1),2);
    int b=pow((y2-y1),2);
    return sqrt(a+b);
}
int f27(int a)
{
    int a2=pow(a,2);
    int a4=pow(a,4);
    int a8=pow(a,8);
    std::cout<<a2<<" ";
    std::cout<<a4<<" ";
    return a8;
}
int f28(int a)
{
    int a2=pow(a,2);
    int a3=pow(a,3);
    int a5=pow(a,5);
    int a10=pow(a,10);
    int a15=pow(a,15);
    std::cout<<a2<<" ";
    std::cout<<a3<<" ";
    std::cout<<a5<<" ";
    std::cout<<a10<<" ";
    return a15;
}
int f29(int a)
{
    int rad = (a*Pi)/180;
    return rad;
}
int f30 (int a)
{
    int grad = a*(180/Pi);
    return grad;
}
int f31 (int tF)
{
    int tC = (tF - 32)*5/9;
    return tC;
}
int f32(int tC)
{
    int tF = 32+(5/9)*tC;
    return tF;
}

int main()
{
    int res=f(2);
    std::cout<<res<<std::endl;
    int res2=f2(4);
    std::cout<<res2<<std::endl;
    int res3=f3(2,4);
    std::cout<<res3<<std::endl;
    double res4=f4(2);
    std::cout<<res4<<std::endl;
    int res5=f5(2);
    std::cout<<res5<<std::endl;
    int res6=f6(2,3,4);
    std::cout<<res6<<std::endl;
    double res7=f7(4);
    std::cout<<res7<<std::endl;
    int res8=f8(3,4);
    std::cout<<res8<<std::endl;
    double res9=f9(10,2);
    std::cout<<res9<<std::endl;
    int res10=f10(2,4);
    std::cout<<res10<<std::endl;
    int res11=f11(4,2);
    std::cout<<res11<<std::endl;
    int res12=f12(4,3);
    std::cout<<res12<<std::endl;
    double res13=f13(4,2);
    std::cout<<res13<<std::endl;
    double res14=f14(4);
    std::cout<<res14<<std::endl;
    double res15=f15(4);
    std::cout<<res15<<std::endl;
    double res16=f16(15,-67);
    std::cout<<res16<<std::endl;
    int res17=f17(4,5,8);
    std::cout<<res17<<std::endl;
    int res18=f18(4,8,5);
    std::cout<<res18<<std::endl;
    int res19=f19(3,6,2,8);
    std::cout<<res19<<std::endl;
    int res20=f20(2,4,6,8);
    std::cout<<res20<<std::endl;
    int res27=f27(2);
    std::cout<<res27<<endl;
    int res28=f28(2);
    std::cout<<res28<<endl;
    int res29 = f29(644);
    std::cout << res29 <<std::endl;
    int res30 = f30(180);
    std::cout << res30 <<std::endl;
    int res31 = f31(644);
    std::cout << res31 <<std::endl;
    int res32 = f32(86);
    std::cout << res32 <<std::endl;

    return 0;
}
