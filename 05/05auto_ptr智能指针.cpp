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