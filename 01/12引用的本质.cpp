//
// Created by 若云 on 2018/8/10.
//

#include <iostream>

using namespace std;

struct typeA {
    int &a;
};

struct typeB {
    int *a;
};

void nofity1(int *const a) {
    *a = 100;
}

//当我们将引用作为函数参数传递的时候，编译器会替我们将实参，取地址给引用
void nofity2(int &a) {//int &a = main::&a;
    a = 300;//对一个引用操作赋值的时候，编译器替我们隐藏*操作
}

//如果我们在研究引用的时候，你可以将引用当做一个常指针去研究
//当你在使用引用编程的时候，你就把引用理解为变量的别名就可以了。


int main() {
    cout << "sizeof(struct typeA)" << sizeof(struct typeA) << endl;
    cout << "sizeof(struct typeB)" << sizeof(struct typeB) << endl;

    //引用所占用的大小跟指针是相等的。
    int a = 10;
    int &re = a;//常量要初始化，引用也要初始化，引用可能是常量。

    //综上两点，引用可能是一个常指针。
    int *const p = &a;

    nofity1(&a);
    nofity2(a);

    return 0;
}
/**
 * 如果是64位电脑的话为8
 * sizeof(struct typeA)8
   sizeof(struct typeB)8

   如果是32位电脑的话为4
   sizeof(struct typeA)4
   sizeof(struct typeB)4

    和java中引用的对比
 *  http://www.cnblogs.com/vamei/archive/2013/04/01/2992484.html
 */
