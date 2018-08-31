//
// Created by 若云 on 2018/8/30.
//

/**
 * 1.函数模板不容许自动类型转化
 * 2.普通函数能够自动进行类型转化
 */
#include <iostream>

using namespace std;

//函数模板必须严格类型匹配
template<class T>
int MyAdd(T a, T b) {
    return a + b;
}

//普通函数可以进行自动类型转换
int MyAdd(int a, char c) {
    return a + c;
}


void test02() {
    int a = 10;
    int b = 20;
    char c1 = 'a';
    char c2 = 'b';
    MyAdd(a, c1);//普通
    MyAdd(a, b);//模板
    MyAdd(c1, b);//普通


    //强制调用模板函数
    MyAdd<>(a, b);
}

int main() {

    test02();

    return 0;
}

/**
 * 函数模板和普通函数在一起调用规则
 *
 * 1.函数模板可以像普通函数那样可以被重载
 * 2.c++编译器优先考虑普通函数
 * 3.如果函数模板可以产生一个更好的匹配，那么选择模板
 * 4.
 *
 *
 *
 *
 *
 */



