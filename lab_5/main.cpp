#include <iostream>
#include<algorithm>
#define print_contener(first, last) \
std::for_each (first, last, [](int v){std::cout << v << " " ; });

template <class Iter>
void task14 (Iter first, Iter last)
{
    int sum_not_even = 0;
    std::for_each(first, last, [&sum_not_even](int v)
    {
        if(v % 2 != 0)
        {
            sum_not_even += v;
        }
    });
    std::for_each(first, last, [sum_not_even](int& v)
    {
        if(v % 3 == 0)
        {
            v = sum_not_even;
        }
    });
}

template <class Iter>
auto task13(Iter first, Iter last)
{
    Iter min_ = std::min(first, last);
    Iter max_ = std::max(first, last);
    return *max_ - *min_;
}

/*template <class Iter>
auto task12(Iter first, Iter last)
{
    std::sort(first, last, [](Iter a, Iter b){return *a > *b ;});
    return std::minmax_element(first, last);
}*/

template <class Iter, class T>
auto task11 (Iter first, Iter last, T init)
{
    std::count_if(first, last, [](int v)
    {
        return v % 2 == 0;
    });
    std::for_each(first, last, [&init](T value)
    {
        if(value > 0 && value % 2 == 0)
        {
            init += *value;
        }
    });
    return init;
}


using Pair = std::pair<std::ptrdiff_t, std::ptrdiff_t>;
template <class Iter>
Pair task8(Iter first, Iter last)
{
    Pair result;
    result.first = std::min_element(first, last) - first;
    result.second = std::max_element(first, last) - first;
    return result;
}

bool is_great (int a)
{
    return a > 0;
}

template <class Iter, class BP>
auto task7 (Iter first, Iter last, BP p)
{
    Iter first_ = first;
    return std::count_if(first, last, [&first_](int v)
    {
        if(*first_ < v)
        {
            return v;
        }
    });
}

template <class Iter>
void task5 (Iter first, Iter last)
{
    Iter res1 = std::min_element(first, last);
    Iter res2 = std::max_element(first, last);
    std::iter_swap(res1, res2);
    std::for_each(first, last, [](int v){std::cout << v << " " ;});
}

template <class Iter>
void task4 (Iter first, Iter last)
{
    Iter first_ = first;
    Iter max_ = std::max_element(first, last);
    std::iter_swap(first_, max_);
    std::for_each(first, last, [](int v){std::cout << v << " " ;});
}

template <class Iter>
auto task3 (Iter first, Iter last)
{
    int temp = 0;
    std::ptrdiff_t size = std::distance(first, last);
    int accum = std::accumulate(first, last, 0);
    int average = accum / size;
    std::cout << "average = " << average << std::endl;
    if (std::all_of(first, last, [average](int v)
    {
        if(v > average)
        {
            return v;
        }))
        {
            ++temp;
        }
    });
    return temp;
}

int main()
{
    std::cout << " vector : " << " " ;
    std::vector<int> v{2, 2, 3, 1};
    print_contener(v.begin(), v.end());
    std::cout << std::endl;
    Pair a = task8(v.begin(), v.end());
    std::cout << a.first << " " << a.second << std::endl;
    print_contener(v.begin(), v.end());
    std::cout << std::endl;
    task5(v.begin(), v.end());
    auto res = task7(v.begin(), v.end(), is_great);
    std::cout << res << std::endl;
    std::cout << "not 100% : 7" << std::endl;
    task4(v.begin(), v.end());
    std::cout << std::endl;
    std::cout << "task3" << std::endl;
    int res1 = task3(v.begin(), v.end());
    std::cout << res1 << std::endl;
    //    std::cout << *res.first << std::endl;
    //  std::cout << *res.second << std::endl;


    return 0;
}
