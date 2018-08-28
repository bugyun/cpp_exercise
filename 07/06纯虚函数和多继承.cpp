//
// Created by 若云 on 2018/8/28.
//
#include <iostream>

using namespace std;

class Interface1 {
public:
    virtual void func1() = 0;
};


class Interface2 {
public:
    virtual void func2() = 0;
};


class Test : public Interface1, public Interface2 {
public:
    virtual void func1() {
        cout << "func1..." << endl;
    }

    virtual void func2() {
        cout << "func2..." << endl;
    }
};

int main() {
    Interface1 *p1 = new Test;
    p1->func1();
    Interface2 *p2 = new Test;
    p2->func2();


    return 0;
}