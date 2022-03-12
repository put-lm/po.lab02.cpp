//
// Created by Łukasz Matuszczak on 02/03/2022.
//

#ifndef UNTITLED13_CATEGORY_H
#define UNTITLED13_CATEGORY_H
#include <iostream>

using namespace std;

class Category {
    string name;
    string description;
public:
    void show();
    Category(string name, string description);
    ~Category();
};


#endif //UNTITLED13_CATEGORY_H
