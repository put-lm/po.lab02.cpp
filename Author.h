//
// Created by Łukasz Matuszczak on 02/03/2022.
//

#ifndef UNTITLED13_AUTHOR_H
#define UNTITLED13_AUTHOR_H
#include <iostream>

using namespace std;
class Author {
    string name;
    string surname;
public:
    void show();
    Author(string name, string surname);
    ~Author();
};

#endif //UNTITLED13_AUTHOR_H
