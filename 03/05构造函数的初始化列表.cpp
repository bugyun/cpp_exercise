//
// Created by 若云 on 2018/8/16.
//
#include <iostream>

using namespace std;

class A {

public:
    A(int a) {
        cout << "A()..." << endl;
        m_a = a;
    }

    ~A() {
        cout << "~A()..." << endl;
    }

    void printA() {
        cout << "a = " << a << endl;
    }

private:
    int m_a;

};



class B {
public:
    B(A &a1, A &a2, int b) : m_a1(a1), m_a2(a2) {//构造函数的初始化列表
        m_b = b;
    }


private:
    int m_b;
    A m_a1;//如果想初始化对象
    A m_a2;
};



