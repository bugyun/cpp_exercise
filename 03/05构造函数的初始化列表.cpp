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
        cout << "a = " << m_a << endl;
    }

private:
    int m_a;

};


class B {
public:
    B(A &a1, A &a2, int b) : m_a1(a1), m_a2(a2) {//构造函数的初始化列表
        m_b = b;
    }

    //构造对象成员的顺序跟初始化列表的顺序无关
    //而是根成员对象的定义顺序有关
    // A m_a1;//如果想初始化对象
    // A m_a2;
    B(int a1, int a2, int b, int c) : m_a1(a1), m_a2(a2), m_c(c) {
        m_b = b;
    }

    B(const B &another) : m_a1(another.m_a1), m_a2(another.m_a2), m_c(another.m_c) {//拷贝构造

    }

    ~B() {
        cout << "~B()..." << endl;
    }

    void printB() {
        cout << "b = " << m_b << endl;
        m_a1.printA();
        m_a2.printA();
    }


private:
    int m_b;
    A m_a1;//如果想初始化对象
    A m_a2;
    const int m_c;//不能在这初始化数据，有的编译器会报错,应该在构造函数时初始化，
};

int main() {

    A a1(10), a2(100);
    B b(a1, a2, 3);
    b.printB();


    return 0;
}



