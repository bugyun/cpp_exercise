//
// Created by 若云 on 2018/8/10.
//

#include <iostream>

using namespace std;

struct student {
    int age;
    char name[20];
};


void printS1(struct student s) {// student s = s1;结构体整个值拷贝的动作
    cout << s.age << endl;
}

void printS2(struct student *s) {
    cout << s->age << endl;
}

void printS3(struct student &s) {
    count << s.age << endl;
}

void main() {

    student s1 = {10, "zhang"};

    printS1(s1);
    printS2(&s1);
    printS3(s1);
}
/**
 *  1 引用没有定义,是一种关系型声明。声明它和原有某一变量(实体)的关系。故而类型与原类型保持一致,且不分配内存。与被引用的变量有相同的地址。
 *  2 声明的时候必须初始化,一经声明,不可变更。
 *  3 可对引用,再次引用。多次引用的结果,是某一变量具有多个别名。
 *  4 &符号前有数据类型时,是引用。其它皆为取地址。
 *
 *  java中引用
 *  http://www.cnblogs.com/vamei/archive/2013/04/01/2992484.html
 */



