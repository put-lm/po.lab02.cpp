//
// Created by Łukasz Matuszczak on 02/03/2022.
//

#include "Book.h"

Book::Book(string title, Author author, Category category): title(title), author(author), category(category) {}
Book::~Book() {
    cout << "---Wywołano destruktor książki " << title << endl;
}

void Book::show() {
    cout << "Tytuł: " << title << endl;
    author.show();
    category.show();
}
