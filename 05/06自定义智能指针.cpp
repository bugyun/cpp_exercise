//
// Created by 若云 on 2018/8/23.
//

#include <iostream>
#include <memory>//系统的万能指针库

using namespace std;


class A {
public:
    A(int a) {
        cout << "A()..." << endl;
        this->a = a;
    }

    ~A() {
        cout << "~A()..." << endl;
    }

    void func() {

    }

private:
    int a;


};


//自定义智能指针
class MyAutoPtr {

public:

    MyAutoPtr(A *ptr) {
        this->ptr = ptr;
    }

    ~MyAutoPtr() {
        if (this->ptr != NULL) {
            cout << "delete ptr" << endl;
            delete ptr;
            this->ptr = NULL;
        }
    }

private:
    A *ptr;
};


int main() {
    int *p = new int;
    //智能指针
    auto_ptr<int> ptr(new int);
    *ptr = 20;


    //
    auto_ptr <A> ptrA(new A(12));
    ptrA->func();
    (*ptrA).func();





    return 0;
}