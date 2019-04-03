#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

template <class Iterator>
bool is_valid_btackets (Iterator first, Iterator last)
{
    using value_type = typename std::remove_reference<decltype(*first)>::type;
    std::stack<value_type> st;
    for(; first != last; ++first)
    {
        if(*first == '{')
        {
            st.push(*first);
        }
        if(*first == '}')
        {
            if(st.empty() || st.top == '}')
            {
                return false;
                st.pop();
            }
            return st.size() == 0;
        }
    }
}

struct Generator
{
    int m_start;
    int m_step;
    Generator(int step = 1, int start = 0):m_step(step), m_start(start){}

    int operator()()
    {
        m_start += m_step;
        return m_start;
    }
};

template <class InputIt, class Generator>
void _generate(InputIt first, InputIt  last, Generator g)
{
    for(; first != last; ++first)
    {
        *first = g();
    }
}

int main()
{
    std::vector<int> a(100);
    std::stack<int> st;
    _generate(a.begin(), a.end(), Generator(5, 0));
    int result = std::count_if(a.begin(), a.end(), [](int v){return v % 5 == 0;});
    for(auto i = a.begin(); i != a.end(); ++i)
    {
        st.push(*i);
    }
    int temp = 0;
    while(st.size())
    {
        if(st.top() % 5 == 0)
        {
            ++temp;
        }
        st.pop();
    }
    return temp;
    return 0;
}
