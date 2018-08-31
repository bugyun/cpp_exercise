//
// Created by 若云 on 2018/8/31.
//
//#pragma once//防止头文件被重复包含
#ifndef CPP_EXERCISE_PERSON_H
#define CPP_EXERCISE_PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {

public:
    Person(string name, int age, int id);

    void show();

private:
    string name;
    int age;
    int id;
};

#endif //CPP_EXERCISE_PERSON_H
