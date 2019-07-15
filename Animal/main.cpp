#include <iostream>


struct Food
{
    virtual int get_calories() = 0;
};

struct Fish:Food
{
    int calories;
    int get_calories()
    {
        return calories;
    }
};


struct Animal
{
    virtual void feed(Food* food) = 0;
    virtual void walk() = 0;
    virtual void wash() = 0;

};

struct Cat:Animal
{
    int health;
    int happiness;
    int clean;
    void feed(Food* food)override
    {
        health += food.get_calories();
        happiness += food.get_calories();
    }
    void wash()override
    {
        clean += 10;
        happiness += 20;
    }
    void walk()override
    {
        happiness += 150;
    }
};

enam Animal{Cat, Dog};
Animal* Create_animal(Animal type)
{
    switch (type)
    {
        case(Animals::Cat)
        {
            return new Cat();
        }
        case(Animal::Dog)
        {
            return new Dog();
        }
    }
}


int main()
{
    Animal* a = Create_animal(Cat);
    return 0;
}
