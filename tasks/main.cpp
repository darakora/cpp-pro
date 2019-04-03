#include <iostream>
#include "Books.h"
#include <algorithm>

int main()
{
    Genre key = Genre::Adventure;
    Person a("le", "Tolstoy");
    std::cout << a << std::endl;
    Book b("Forest Cump", Genre::Comedy, Person ("Grum", "Tropik"));
    std::cout << b << std::endl;
    std::for_each(books.begin(), books.end(), [](Book b){std::cout << b << std::endl;});
    std::for_each(books.begin(), books.end(), [key](const Book& b){if(b.genre == key){std::cout<<b;}});
    return 0;
}
