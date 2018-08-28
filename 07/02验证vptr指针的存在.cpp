//
// Created by 若云 on 2018/8/28.
//
#include <iostream>

using namespace std;

class Parent1 {

public:
    void func() {
        cout << "Parent1::func()..." << endl;
    }

    void func(int a) {
        cout << "Parent1::func(int)..." << endl;
    }

private:
    int a;
};

class Parent2 {

public:
    virtual void func() {
        cout << "Parent2::func()..." << endl;
    }

    virtual void func(int a) {
        cout << "Parent2::func(int)..." << endl;
    }

    virtual void func(int a, int b) {
        cout << "Parent2::func(int,int)..." << endl;
    }

private:
    int a;
};

int main() {

    Parent1 p1;
    Parent2 p2;

    cout << " sizeof(p1) " << sizeof(p1) << endl;
    cout << " sizeof(p2) " << sizeof(p2) << endl;


    return 0;
}

/**
 * 未加 virtual 字段
 *  sizeof(p1) 4
    sizeof(p2) 4

   加上 virtual 字段
    sizeof(p1) 4
    sizeof(p2) 16
 */

