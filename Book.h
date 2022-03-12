//
// Created by Łukasz Matuszczak on 02/03/2022.
//

#ifndef UNTITLED13_BOOK_H
#define UNTITLED13_BOOK_H
#include <iostream>
#include "Author.h"
#include "Category.h"

using namespace std;

class Book {
    string title;
    Author author;
    Category category;
public:
    void show();
    Book(string title, Author author, Category category);
    ~Book();
};

#endif //UNTITLED13_BOOK_H
