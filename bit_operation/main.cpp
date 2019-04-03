#include <iostream>
#define Male 1 //00000001
#define Business 2 //000000010
#define Old 4 //00000100
#include <string>
#include <fstream>

void f (std::string name, int flags)
{
    if(flags & 1)
    {
        std::cout << "Mr" << std::endl;
    }
    else {
        std::cout << "Ms" << std::endl;
    }
    if(flags & 2)
    {
        std::cout << "for Business" << std::endl;
    }
    else{
        std::cout << "not for Business" << std::endl;
    }
    if(flags & 4)
    {
        std::cout << "Old" << std::endl;
    }
    else{
        std::cout << "not Old" << std::endl;
    }
}

struct SingleTone{

    SingleTone() = default;
    void operator << (int a){std::cout << a ;};

}st;

int main()
{
    f("Dasha", 000);
    st<<4;
    std::cout<<std::endl;
    std::fstream fs("test.txt", fs.in | fs.out | fs.trunc);
    if(!fs.is_open())
    {
        std::cout << "Error" <<std::endl;
    }
    else{

        fs<<"Hello world";
    }
    std::string result;
    fs>>result;
    std::cout << fs.in << " " << fs.out << " " << fs.trunc << " " << fs.binary << " ";
    return 0;
}
