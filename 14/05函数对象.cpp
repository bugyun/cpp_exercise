//
// Created by 若云 on 2018/9/12.
//

/**
 * 函数对象的概念
 * 重载函数调用操作符的类，其对象常称为函数对象（function object），即它们是行为类似函数的对象，也叫仿函数（function）,
 * 其实就是重载 () 操作符，使得类对象可以像函数那样调用。
 *
 * 注意：
 * 1.函数对象（仿函数）是一个类，不是一个函数
 * 2.函数对象（仿函数）重载了 () 操作符，使得它可以像函数一样调用。
 *
 * 如果有1个参数，叫做 一元仿函数，有2个参数，叫做 二元仿函数。
 */


#include <iostream>

using namespace std;

class Test {

public:
    Test(){
        cout << "Test()" << endl;
    }

    void operator()() {
        cout << "仿函数" << endl;
    }

    void operator()(int val) {
        cout << "一元仿函数  val : " << val << endl;
    }
};

int main() {

    Test test;
    test();
    test(1);
    //函数对象可以像普通函数一样调用
    //函数对象可以像普通函数那样接受参数
    //函数对象超出了函数的概念，函数对象可以保存函数调用的状态
    Test();
//    Test()
//    仿函数
//    一元仿函数  val : 1
//    Test()

    return 0;
}

