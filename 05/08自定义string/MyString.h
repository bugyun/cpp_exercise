//
// Created by 若云 on 2018/8/23.
//
#ifndef CPP_EXERCISE_MYSTRING_H
#define CPP_EXERCISE_MYSTRING_H

#include <iostream>

using namespace std;

class MyString {

public:
    MyString();

    MyString(int len);

    MyString(const char *str);

    MyString(const MyString &another);

    ~MyString();

    //重载操作符 []
    //重载操作符 <<
    //重载操作符 >>
    //重载操作符 =
    //重载操作符 +
    //重载操作符 ==
    //重载操作符 !=


private:
    int len;
    char *str;
};


#endif //CPP_EXERCISE_MYSTRING_H
