//
// Created by 若云 on 2018/8/31.
//

#include "Person.h"

//函数模板 经过2次编译
//并没有生成具体的函数
template<class T>
Person<T>::Person(T name) {
    this->name = name;
}

template<class T>
void Person<T>::show() {


}