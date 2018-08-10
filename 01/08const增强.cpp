//
// Created by 若云 on 2018/8/9.
//

#include <iostream>

int main() {

    //const 定义常量 -> const 意味只读
    const int a;
    int const b;
    //第⼀个第二个意思⼀样 代表⼀个常整形数
    const int *c;
    //第三个 c是一个指向常整形数的指针(所指向的内存数据不能被修改，但是本⾝身可以修改)
    int *const d;
    //第四个 d 常指针(指针变量不能被修改，但是它所指向内存空间可以被修改)
    const int *const e;
    //第五个 e一个指向常整形的常指针(指针和它所指向的内存空间，均不能被修改)
    return 0;
}

/**
 * 合理的利用const的好处，
 * 1.指针做函数参数，可以有效的提高代码可读性，减少bug;
 * 2.清楚的分清参数的输入和输出特性
 *
 * C语言中的const变量
 *   C语言中const变量是只读变量，有自己的存储空间，在栈中
 *
 * C++中的const常量
 *   可能分配存储空间,也可能不分配存储空间，可能在字符常量区
 *   当const常量为全局，并且需要在其它文件中使用，会分配存储空间
 *   当使用&操作符，取const常量的地址时，会分配存储空间
 *   当const int &a = 10; const修饰引用时，也会分配存储空间
 */

//------------------------
using namespace std;

int method() {
    const int a = 10;//c++ a 是真正的常量
    int *p = (int *) &a;
    *p = 20;//改变的是临时开辟的temp变量
    cout << p << endl;//20
    cout << a << endl;//10
    return 0;
}

/**
 * 临时常量赋值的时候，会开辟一个新的内存空间，赋值给其他对象。
 */

int method2() {

    const int a = 10;
    int array[a] = {0};//在c语言中不能进行赋值，因为c语言中const是假的常量，只是告诉编译器 它是一个不可以修改的变量

    return 0;
}


