#include <iostream>

int* arrays(int* array1,int size1, int*array2,int size2, int*array3)
{
    int k=0;
    int size3=size1+size2;
    for(int i=0; i!=size2; ++i)
    {
        array3[k++] = array2[i];
    }
    for(int i=0; i!=size1; ++i)
    {
        array3[k++] = array1[i];
    }
    for(int i=0; i!=size3; ++i)
    {
        std::cout<<array3[i]<< " ";
    }
    return array3;
}
void shell(int* array, int size)
{
    std::cout<<std::endl<<"Shell sort"<<std::endl;
    for(int d=size/2; d > 0; d/=2) //длина промежутков
    {
        for(int i=0; i!=size-d; ++i)
        {
            for(int j=i; j>=0; j-=d)
            {
                if(array[j]<array[j+d])
                {
                    std::swap(array[j],array[j+d]);
                }
            }
        }
    }
    for(int i=0; i!=size; ++i)
    {
        std::cout<<array[i]<<" ";
    }
}
int main()
{
    int array1[8] = {32,95,16,82,24,66,35,19};
    int array2[5] = {2,6,4,0,7};
    int array3[] = {};
    shell(arrays(array1,8,array2,5,array3),13);
    return 0;
}
