//
// Created by 若云 on 2018/8/17.
//
#include <iostream>

using namespace std;

class Test {
public:
    Test(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void printT() {
        cout << "a = " << this->a << " b = " << this->b << endl;
    }

    int getA() {
        return this->a;
    }

    int getB() {
        return this->b;
    }

    Test testAdd(Test &t) {
        Test temp(this->a + t.a, this->b + t.b);
        return temp;
    }

    Test &testAdd2(Test &t) {
        this->a += t.a;
        this->b += t.b;
        return *this;//如果想返回一个对象的本身，在成员方法中，用*this返回
    }

private:
    int a;
    int b;
};

//1.在全局提供一个两个Test想加的函数
Test TestAdd(Test &t1, Test &t2) {
    Test temp(t1.getA() + t2.getA(), t1.getB() + t2.getB());
    return temp;
}


int main() {
    Test t1(10, 20);
    Test t2(100, 200);

    Test t3 = TestAdd(t1, t2);

    //如果想对一个对象连续调用成员方法，每次都会返回对象本身，成员方法需要返回引用
    Test t4 = t1.testAdd2(t2).testAdd2(t3);
    t4.printT();

    return 0;
}


