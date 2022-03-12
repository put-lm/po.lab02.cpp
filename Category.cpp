//
// Created by Łukasz Matuszczak on 02/03/2022.
//

#include "Category.h"

Category::Category(string name, string description): name(name), description(description) {}

Category::~Category() {
    cout << "---Wywołano destruktor kategorii " << name << endl;
}

void Category::show() {
    cout << "Kategoria: " << name << " (" << description << ")" <<endl;
}
