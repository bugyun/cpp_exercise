//
// Created by 若云 on 2018/8/31.
//
#pragma once//防止头文件被重复包含

#include <iostream>
#include <string>

using namespace std;

template<class T>
class Person {

public:
    Person(T name);

    void show();

public:
    T name;
};