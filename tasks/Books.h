#ifndef BOOKS_H_INCLUDED
#define BOOKS_H_INCLUDED
#include <iostream>
#include <ostream>
#include <vector>

enum Genre{Comedy, Horror, Adventure, Romantic};

struct Person{
std::string name;
std::string surname;
Person () = default;
Person(std::string S_N)
{
    surname = S_N;
}
Person (std::string n, std::string s) : name(n), surname(s) {};
};
std::ostream& operator << (std::ostream& out, const Person& p)
{
    return out << "name: " << p.name << "; surname: " << p.surname;
}

struct Book{
std::string name;
Genre genre;
Person author;
Book () = default;
Book (std::string n, Genre g, Person a): name(n), genre(g), author(a){};
};

std::ostream& operator << (std::ostream& out, const Book& b)
{
    return out << "name of book: "  << b.name << "; genre: " << b.genre << "; author " << b.author;
}

std::vector<Book> books{
Book {"Jungle Book", Genre::Adventure, Person("Kipling")},
Book{"War and Peace", Genre::Horror, Person("Tolstoy")},
Book{"Forest Cump", Genre::Comedy, Person("Grum")},
Book{"shades of Grey", Genre::Adventure, Person("James")}
};
Genre key = Genre::Adventure;


#endif // BOOKS_H_INCLUDED
