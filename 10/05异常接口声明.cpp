//
// Created by 若云 on 2018/9/6.
//
#include <iostream>

using namespace std;

//这个函数只能抛出int float char 三种类型异常，抛出其他的就报错
void func() throw(int, float, char) {
    throw "abc";// terminating with unexpected exception of type char const*
}


int main() {

    try {
        func();
    } catch (char *str) {
        cout << str << endl;
    } catch (int e) {
        cout << e << endl;
    } catch (...) {//捕获所有异常
        cout << "为知类型异常" << endl;
    }
    return 0;
}

/**
 * 1.为了加强程序的可读性，可以在函数声明中列出可能抛出异常的所有类型，例如：void func() throw(a,b,c); 这个函数func能够且只能抛出abc及其子类型的异常。
 * 2.如果在函数声明中没有包含异常接口声明，则此函数可以抛出任何类型的异常，例如： void func();
 * 3.一个不抛任何类型异常的函数可以声明为： void func() throw()
 * 4.如果一个函数抛出了它异常接口声明所不容许抛出的异常， unexpected 函数会被调用，该函数默认行为调用 terminate 函数中断程序。
 */


