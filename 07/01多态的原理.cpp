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

    virtual void func(int a) {
        cout << "Parent::func(int)..." << endl;
    }

private:
    int a;
};

class Child : public Parent {
public:

    Child(int a, int b) : Parent(a) {
        this->b = b;
    }

    virtual void func(int a) {
        cout << "Child::func(int)..." << endl;
    }

    void func(int a, int b) {
        cout << "Child::func(int,int)..." << endl;
    }

private:
    int b;
};

void myFunc(Parent *pp) {
    pp->func(10);
}

int main() {

    Parent *pp = new Parent(10);
    Parent *cp = new Child(20, 30);

    myFunc(pp);
    myFunc(cp);
    return 0;
}


/**
 * vptr 指针 在类的结构中，指向 类::虚函数表
 *
 */



