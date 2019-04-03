#include <iostream>
#include <string>
#include <fstream>


int main()
{
    std::string path = "MyFile.txt";
    std::ofstream fout;

    fout.open(path);
    if(!fout.is_open())
    {
        std::cout << "Error" << std::endl;
    }
    else
    {
        fout << "This my file";
    }
    fout.close();


    return 0;
}
