#include <iostream>
#include <string>

class Animal
{
public:
    void say_hello ()
    {
        std::cout << "HELLO, how are you? " << std::endl;
    }
};

class smth
{
public:
    int age;
    std::string name;
};

class point
{
public:
    int x;
    int y;
};


int main()
{
    Animal a;
    a.say_hello();
    smth firstname;
    firstname.age = 30;
    firstname.name = "i don't no who is it";
    std::cout<< firstname.age <<std::endl;
    std::cout<< firstname.name <<std::endl;

    smth secondname;
    secondname.age = 18;
    secondname.name = "Papasisi";
    std::cout<< secondname.age <<std::endl;
    std::cout<< secondname.name <<std::endl;

    point o;
    o.x = 1;
    o.y = 3;
    std::cout << o.x << " and " << o.y << std::endl;


    return 0;
}
