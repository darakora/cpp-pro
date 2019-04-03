#ifndef FUNCTORS_H_INCLUDED
#define FUNCTORS_H_INCLUDED
#include <random>
#include <ctime>

struct Functor
{
    int value = 0;
    Functor () = default;
    Functor(int v):value(v){}
    int operator()()
    {
        value += 2;
        return value;
    }
};

struct Random
{
    std::mt19937 gen;
    int m_min = 0;
    int m_max = 100;
    Random():gen(time(0)){};//вщзвращает текущее время
    Random(int min, int max):m_min(min),m_max(max){};
    int operator()()
    {
        std::uniform_int_distribution<> uid(m_min, m_max);
        return uid(gen);
    }
};



#endif // FUNCTORS_H_INCLUDED
