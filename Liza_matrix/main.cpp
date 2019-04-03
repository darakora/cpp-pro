#include <iostream>

bool is_pos(int a)
{
    return a>0;
}

template<class UP,class Matrix>
int counter_row(Matrix v, int n, int m, UP p)
{
    int temp = n;
    for(int i=0; i!=n; ++i)
    {
        for(int j=0; j!=m;++j)
        {
            if(!p(v[i][j]))
            {
                --temp;
                ++i;
                j=0;
            }
        }
    }
    return temp;
}
int main()
{
    int v[3][4] {{1,2,3,-3},{3,4,3,2},{4,3,2,1}};
    std::cout<<counter_row(v,3,4,is_pos)<<std::endl;
    return 0;
}
