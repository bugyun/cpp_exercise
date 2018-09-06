//
// Created by 若云 on 2018/9/5.
//
#include <iostream>

using namespace std;

int divide(int x, int y) {
    if (y == 0) {
        throw y;//抛异常
    }

    return x / y;
}

void test() {

    try {//试着去捕获异常
        divide(10, 0);
    } catch (int e) {//异常时根据类型进行匹配
        cout << "除数为0！ " << e << endl;
    }


}

//异常跨函数
//异常必须处理
int main() {

    test();
    return 0;
}

/**
 * c++异常机制 跨函数
 *
 *
 *
 */

