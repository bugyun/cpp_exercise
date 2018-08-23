//
// Created by 若云 on 2018/8/23.
//

#include "MyString.h"

MyString::MyString() {
    this->len = 0;
    this->str = NULL;
}

MyString::MyString(int len) {


}

MyString::MyString(const char *str) {
    if (str == NULL) {
        this->len = 0;
        this->str = new char[0 + 1];
        strcpy(this->str, "");
    } else {
        int len = strlen(str);
        this->len = len;
        this->str = new char[len + 1];
        strcpy(this->str, str);
    }
}

//初始化的时候调用
MyString::MyString(const MyString &another) {
    this->len = another.len;
    this->str = new char[len + 1];
    strcpy(this->str, another.str);


}

MyString::~MyString() {
    if (this->str != NULL) {
        delete this->str;
        this->str = NULL;
        this->len = 0;
    }
}

