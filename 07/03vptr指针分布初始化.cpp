//
// Created by 若云 on 2018/8/28.
//

#include <iostream>

using namespace std;

class Parent {

public:

    Parent(int a) {
        this->a = a;
        func();
    }

    virtual void func() {
        cout << "Parent::func()... a = " << a << endl;
    }

private:
    int a;
};

class Child : public Parent {

public:

    Child(int a, int b) : Parent(a) {//在调用父类的构造器的时候，会将vptr指针当做父类来处理。此时会临时指向父类的虚函数表。
        //将子类对象的空间有变成子类对象处理，vptr指针就从指向父类的表 变成 指向子类的表
        cout << "Child(int,int)" << endl;
        this->b = b;
        func();
    }

    virtual void func() {
        cout << "Child::func()... b = " << b << endl;
    }

private:
    int b;
};

int main() {

    //Parent p(10);
    Child child(19, 20);


    return 0;
}
/**
 * vptr 是 分步 初始化的。
 */


