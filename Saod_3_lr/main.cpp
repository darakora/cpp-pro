#include <fstream>
#include <iostream>
#include <conio.h>

int main()
{

    char S1[256];   //Три массива, будут хранить символьные строки,
    char S2[256];   //введённые с клавиатуры
    char S3[256];
    char S4[256];
    char S5[256];
    char S6[256];

    std::cout << "input 3 non empty words: \n"; //Введите 3 непустых слова

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
    /*РАБОТА С ФАЙЛОМ, ЗАПИСЬ В ФАЙЛ ЗНАЧЕНИЙ ПЕРЕМЕННЫХ*/
        std::ofstream out("E:\project\c++\Saod_3_lr\Text.txt");
            out << S1 << '\n';
            out << S2 << '\n';
            out << S3 << '\n';
            out << S4 << '\n';
            out << S5 << '\n';
            out << S6 << '\n';

                        //или out << S1 << S2 << S3;
        out.close();
    /*КОНЕЦ РАБОТЫ С ФАЙЛОМ*/

    *S1 = 0, *S2 = 0, *S3 = 0; *S4 = 0; *S5 = 0; *S6 = 0;    //обнуление строк, во избежание недоразумений

    /*РАБОТА С ФАЙЛОМ, ЧТЕНИЕ ИЗ ФАЙЛА ПЕРЕМЕННЫХ*/
        std::ifstream in("E:\project\c++\Saod_3_lr\Text.tx");
           in >> S1;
           in >> S2;
           in >> S3;
           in >> S4;
           in >> S5;
           in >> S6;
                        //или in >> S1 >> S2 >> S3;
        in.close();
    /*КОНЕЦ РАБОТЫ С ФАЙЛОМ*/

    /*Выводим прочитанные строки на экран*/
    std::cout << S1 << '\n';
    std::cout << S2 << '\n';
    std::cout << S3 << '\n';
    std::cout << S4 << '\n';
    std::cout << S5 << '\n';
    std::cout << S6 << '\n';

return 0;
}
