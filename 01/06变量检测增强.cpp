//
// Created by 若云 on 2018/8/9.
//

#include <iostream>

/**
 *
 *  在C语⾔言中，重复定义多个同名的全局变量是合法的
 *  在C++中，不允许定义多个同名的全局变量
 *  C语⾔言中多个同名的全局变量最终会被链接到全局数据区的同⼀一个地址空间上
 *  int g_var;
 *  int g_var = 1;
 *  C++直接拒绝这种⼆二义性的做法。
 *
 *  struct 加强，不需要添加 struct 前缀
 */

struct People {
    char name[64];
    int age;
};

int main() {
    People p1 = {"wang", 1};
    p1.age = 20;

    //c语言中必须要有struct  People p1;
    //struct People p1;
    return 0;
}

