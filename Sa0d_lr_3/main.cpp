#include <iostream>
#include <fstream>
#include <string>


void Natural_Merging_Sort(const char *name);
bool End_Range(FILE * f);


void Natural_Merging_Sort(const char *name)
{
    int s1, s2, a1, a2 = 0, mark; int a = 0; int b = 0;
    FILE f, f1, *f2;
    s1 = s2 = 1;
    while (s1 > 0 && s2 > 0)
    {
        mark = 1;
        s1 = 0;
        s2 = 0;
        f = fopen(name, "r");
        f1 = fopen("nmsort_1", "w");
        f2 = fopen("nmsort_2", "w");
        fscanf(f, "%d", &a1);
        if (!feof(f))
        {
            fprintf(f1, "%d ", a1);
        }
        if (!feof(f)) fscanf(f, "%d", &a2);
        while (!feof(f))
        {
            if (a2 <= a1) //первое место замены для убывания
            {
                a++;
                switch (mark)
                {
                    case 1:
                    {
                        fprintf(f1, "' "); mark = 2; s1++; break;
                    }
                    case 2:
                    {
                        fprintf(f2, "' "); mark = 1; s2++; break;
                    }
                }
            }
            if (mark == 1)
            {
                fprintf(f1, "%d ", a2); s1++;
            }
            else
            {
                fprintf(f2, "%d ", a2); s2++;
            }
            a1 = a2;
            fscanf(f, "%d", &a2);
        }
        if (s2 > 0 && mark == 2)
        {
            fprintf(f2, "'");
        }
        if (s1 > 0 && mark == 1)
        {
            fprintf(f1, "'");
        }
        fclose(f2);
        fclose(f1);
        fclose(f);
        f = fopen(name, "w");
        f1 = fopen("nmsort_1", "r");
        f2 = fopen("nmsort_2", "r");
        if (!feof(f1)) fscanf(f1, "%d", &a1);
        if (!feof(f2)) fscanf(f2, "%d", &a2);
        bool file1, file2;
        while (!feof(f1) && !feof(f2)) {
            file1 = file2 = false;
            while (!file1 && !file2)
            {
                a++;
                if (a1 <= a2) //второе место замены для убывания
                {

                    fprintf(f, "%d ", a1);
                    file1 = End_Range(f1);
                    fscanf(f1, "%d", &a1);
                }
                else
                {
                    b++;
                    fprintf(f, "%d ", a2);
                    file2 = End_Range(f2);
                    fscanf(f2, "%d", &a2);
                }
            }
            while (!file1) {
                fprintf(f, "%d ", a1);
                file1 = End_Range(f1);
                fscanf(f1, "%d", &a1);
            }
            while (!file2) {
                fprintf(f, "%d ", a2);
                file2 = End_Range(f2);
                fscanf(f2, "%d", &a2);
            }
        }
        file1 = file2 = false;
        while (!file1 && !feof(f1)) {
            fprintf(f, "%d ", a1);
            file1 = End_Range(f1);
            fscanf(f1, "%d", &a1);
        }
        while (!file2 && !feof(f2)) {
            fprintf(f, "%d ", a2);
            file2 = End_Range(f2);
            fscanf(f2, "%d", &a2);
        }
        fclose(f2);
        fclose(f1);
        fclose(f);
    }
    std::cout << "Количество сравнений: " << a << "\n";
    std::cout << "Количество перестановок: " << b << "\n";
    std::cout <<
    remove("nmsort_1");
    remove("nmsort_2");
}

bool End_Range(FILE * f)
{
    int tmp;
    tmp = fgetc(f);
    tmp = fgetc(f);
    if (tmp != '\'') fseek(f, -2, 1);
    else fseek(f, 1, 1);
    return tmp == '\'' ? true : false;
}


int main()
{
    setlocale(0, "");
    std::fstream one;
    std::string one1 = ("one.txt");
    one.open(one1, std::fstream::out);
    if (!one.is_open())
    {
        std::cout << "Error open file\n";
        system("Pause");
        return 0;
    }
    else
    {
        std::string str;
        std::cout << "Enter the number in ascending order:";
        std::getline(std::cin, str);
        one << str;
    }
    one.close();
    std::fstream tworead;
    tworead.open(one1, std::fstream::in);
    if (!tworead.is_open())
    {
        std::cout << "Error open file\n";
        system("Pause");
        return 0;
    }
    else
    {
        std::cout << "До сортировки: ";
        char arr1;
        while (tworead.get(arr1))
        {
            std::cout << arr1 << " ";
        }
    }
    std::cout << "\n";
    tworead.close();
    std::fstream oneread;
    oneread.open(one1, std::fstream::in);
    if (!oneread.is_open())
    {
        std::cout << "Error open file\n";
        system("Pause");
        return 0;
    }
    else
    {
        Natural_Merging_Sort("one.txt");
    }
    std::cout << "После сортировки: ";
    char arr;
    while (oneread.get(arr))
    {
        std::cout << arr << " ";
    }
    std::cout << "\n";
    oneread.close();
    system("Pause");
    return 0;
}
