//
// Created by 若云 on 2018/8/28.
//
#include <iostream>

using namespace std;

class Parent {

public:

    Parent(int a) {
        this->a = a;
    }

    virtual void print() {
        cout << "Parent::func()...  " << endl;
    }

    int a;
};

class Child : public Parent {

public:

    Child(int a) : Parent(a) {
        cout << "Child(int)" << endl;
    }

    virtual void print() {
        cout << "Child::func()... " << a << endl;
    }

    int b;
    int c;
    int d;
};

int main() {

    Child array[] = {Child(0), Child(1), Child(2)};
    Parent *pp = &array[0];
    // pp->print();

//    for (int i = 0; i < 3; i++) {
//        pp = &array[i];
//        pp->print();
//    }

    //报错：[1]    24048 segmentation fault   因为子类和父类的步长不一样
    pp++;
    pp->print();
    pp++;
    pp->print();


    return 0;
}
