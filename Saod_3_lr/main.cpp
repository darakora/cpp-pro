#include <fstream>
#include <iostream>
#include <conio.h>

int main()
{

    char S1[256];   //��� �������, ����� ������� ���������� ������,
    char S2[256];   //�������� � ����������
    char S3[256];
    char S4[256];
    char S5[256];
    char S6[256];

    std::cout << "input 3 non empty words: \n"; //������� 3 �������� �����

    std::cout << "1: ";
    std::cin >> S1;
    std::cout << "2: ";
    std::cin >> S2;
    std::cout << "3: ";
    std::cin >> S3;
    std::cout << "4: ";
    std::cin >> S4;
    std::cout << "5: ";
    std::cin >> S5;
    std::cout << "6: ";
    std::cin >> S6;
    /*������ � ������, ������ � ���� �������� ����������*/
        std::ofstream out("E:\project\c++\Saod_3_lr\Text.txt");
            out << S1 << '\n';
            out << S2 << '\n';
            out << S3 << '\n';
            out << S4 << '\n';
            out << S5 << '\n';
            out << S6 << '\n';

                        //��� out << S1 << S2 << S3;
        out.close();
    /*����� ������ � ������*/

    *S1 = 0, *S2 = 0, *S3 = 0; *S4 = 0; *S5 = 0; *S6 = 0;    //��������� �����, �� ��������� �������������

    /*������ � ������, ������ �� ����� ����������*/
        std::ifstream in("E:\project\c++\Saod_3_lr\Text.tx");
           in >> S1;
           in >> S2;
           in >> S3;
           in >> S4;
           in >> S5;
           in >> S6;
                        //��� in >> S1 >> S2 >> S3;
        in.close();
    /*����� ������ � ������*/

    /*������� ����������� ������ �� �����*/
    std::cout << S1 << '\n';
    std::cout << S2 << '\n';
    std::cout << S3 << '\n';
    std::cout << S4 << '\n';
    std::cout << S5 << '\n';
    std::cout << S6 << '\n';

return 0;
}
