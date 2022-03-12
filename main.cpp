#include <iostream>
#include "Author.h"
#include "Category.h"
#include "Book.h"

using namespace std;

int main() {
    // Zadanie 1
    // Author rowling {"J.K.", "Rowling"}; - powinno wypisać "Wywołano konstruktor"

    // Zadanie 2
    // Author rowling {"J.K.", "Rowling"}; - powinno wypisać "Wywołano konstruktor"
    // Następnie destruktor wywołany zostanie na zakończenie programu
    // Jawne wywołanie destruktora przez wkaźnik to:
    // Author *rowling = new Author {"J.K.", "Rowling"};
    // delete rowling; // i tutaj wykona się destruktor

    // Zadanie 3:
    // Autorzy
    Author rowling {"J.K.", "Rowling"};
    Author brett {"Peter", " Brett"};

    // Kategorie
    Category fantasy {"Fantasy", "Gatunek literacki lub filmowy używający magicznych i innych nadprzyrodzonych form."};

    // Książki
    Book books[3] {
        {"Harry Potter", rowling, fantasy},
        {"The Warded Man", brett, fantasy},
        {"Fantastic Beasts and Where to Find Them", rowling, fantasy}
    };

    // Zadanie 4, 5 i 6
    cout << "Półka z książkami:" << endl;
    for (int i = 0; i < 3; i++) {
        books[i].show();
    }
    cout << "-------------------" << endl;

    return 0;
}