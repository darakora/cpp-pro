#include <iostream>

namespace stu
{
template <class T, class Container = std::vector<T>

          private:
          Container cont;

public:
using container_type = Container;
using value_type = typename Container::value_type;
using reference = typename Container::reference;
using size_type = typename Container::size_type;
using const_reference = typename Container::const_reference;

bool empty()
{
    return cont.empty;
}

reference top() const
{
    return cont.back();
}

size_type size() const
{
    cont.size();
}

}

void swap(Stack& other) noexcept
{
    using std::swap;
    swap(cont, other.cont);
}

void pop() noexcept
{
    cont.pop();
}

template <class TP, class Cont>
bool operator==(const Stack<TP, Cont>& lhs, const Stack<TP, Cont>& rhs)
{
    return lhs.cont == rhs.cont;
}

template< class Tp, class Cont >
bool operator!=( const Stack<Tp,Cont>& lhs,const Stack<Tp,Cont>& rhs )
{
    return lhs.cont != rhs.cont;
}
};
}

int main()
{


    return 0;
}
