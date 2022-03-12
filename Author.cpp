//
// Created by Łukasz Matuszczak on 02/03/2022.
//

#include "Author.h"

Author::Author(string name, string surname) : name(name), surname(surname) {}

Author::~Author() {
    cout << "---Wywołano destruktor autora " << surname << endl;
}

void Author::show() {
    cout << "Autor: " << name << " " << surname << endl;
}
