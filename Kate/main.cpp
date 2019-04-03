#include <iostream>
#include <cstdlib>

int main() {
	int k = 0;
    int array_B[12] = {};
    int** array1 = new int*[3];
    for(int i = 0; i < 3; ++i)
    {
        array1[i] = new int [4];
        for(int j = 0; j < 4; ++j)
        {
            array_1[i][j] = rand()/1000;
            if(array1[i][j] % 3 == 0)
            {
                array_B[k] = array1[i][j];
                std::cout << array_B[k] << " ";
                ++k;
            }
        }
    }

return 0;
}
