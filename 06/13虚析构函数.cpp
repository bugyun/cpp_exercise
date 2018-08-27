//
// Created by 若云 on 2018/8/27.
//
#include <iostream>

using namespace std;

class A {

public:

    A() {
        cout << "A()..." << endl;
        this->p = new char[64];
        memset(this->p, 0, 64);
        strcpy(this->p, "A String...");
    }

    virtual void print() {
        cout << "A: " << this->p << endl;
    }

    virtual  ~A() {
        cout << "~A()..." << endl;
        if (this->p != NULL) {
            delete[] this->p;
            this->p = NULL;
        }
    }

private:
    char *p;
};

class B : public A {
public:
    B() {//此刻会触发父类的构造方法
        cout << "B()..." << endl;
        this->p = new char[64];
        memset(this->p, 0, 64);
        strcpy(this->p, "B String...");
    }

    virtual void print() {
        cout << "B: " << this->p << endl;
    }

    ~B() {
        cout << "~B()..." << endl;
        if (this->p != NULL) {
            delete[] this->p;
            this->p = NULL;
        }
    }

private:
    char *p;
};

void func(A *ap) {//在此发生多态
    ap->print();
    //如果在这delete
    delete ap;
}

/**
 *  如果在这delete,不会执行多态中的虚构方法
 *  A()...
    A: A String...
    ~A()...
    A()...
    B()...
    B: B String...
    ~A()...

    怎么来解决这种问题呢？
    在父类析构函数的前面添加 virtual
 */

void test() {
    A *ap = new A;
    func(ap);
//    delete ap;

    B *bp = new B;
    func(bp);
//    delete bp;
}

/**
 * 如果在外面执行 delete，是没有问题的
 *  A()...
    A: A String...
    ~A()...

    A()...
    B()...
    B: B String...
    ~B()...
    ~A()...
 */

int main() {

    test();

    return 0;
}
