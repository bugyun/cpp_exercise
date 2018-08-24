//
// Created by 若云 on 2018/8/24.
//
#include <iostream>

using namespace std;


class Parent {
public:
    Parent() {
        cout << "Parent()..." << endl;
        a = 0;
    }

    Parent(int a) {
        cout << "Parent(int)..." << endl;
        this->a = a;
    }

    ~Parent() {
        cout << "~Parent()..." << endl;
    }

    int a;

};

class Child : public Parent {
public:

    //在调用子类的构造函数的时候，一定会调用父类的构造函数
    //父类先构造，子类后构造
    Child(int a, int b) {
        cout << "Child(int,int)..." << endl;
        this->a = a;
        this->b = b;
    }


    ~Child() {
        cout << "~Child()..." << endl;
    }

    void print() {
        cout << "b = " << b << endl;
    }

    int b;
};

int main() {
    Child child(1, 2);
    child.print();

    return 0;
}


/**
 *  Parent()...
    Child(int,int)...
    b = 2
    ~Child()...
    ~Parent()...
 */
