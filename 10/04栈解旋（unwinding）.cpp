//
// Created by 若云 on 2018/9/6.
//

/**
 * 异常被抛出后，从进入 try 块起，到异常被抛出前，这期间在栈上构造的所有对象，都会被自动析构。析构的顺序与构造顺序相反，这一过程称为栈的解旋。
 */
#include <iostream>

using namespace std;

//异常类
class MyException {

public:
    MyException(int x) {
        this->x = x;
        cout << "MyException ::构造方法" << this->x << endl;
    }

    ~MyException() {
        cout << "~MyException ::析构方法" << this->x << endl;
    }

private:
    int x;
};

int divide() {
    MyException ex1(1), ex2(2);
    cout << "要发生异常了" << endl;
    throw 1;
}


int main() {

    try {
        divide();
    } catch (int e) {
        cout << "捕获异常" << endl;
    }
    return 0;
}


/**
 *  MyException ::构造方法
    MyException ::构造方法
    要发生异常了
    ~MyException ::析构方法2
    ~MyException ::析构方法1
    捕获异常
 */


