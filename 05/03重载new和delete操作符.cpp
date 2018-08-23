//
// Created by 若云 on 2018/8/23.
//
#include <iostream>

using namespace std;

class A {

public:

    A(int a) {
        cout << "A(int)..." << endl;
        this->a = a;
    }

    void *operator new(size_t size) {
        cout << "重载了new 操作符" << endl;
        return malloc(size);
    }

    void *operator new(size_t size) {
        cout << "重载了new []操作符" << endl;
        return malloc(size);
    }

    void operator delete(void *p) {
        cout << "重载了delete操作符" << endl;
        if (p != NULL) {
            free(p);
            p = NULL;
        }
    }

    ~A() {
        cout << "~A()..." << endl;
    }

private:
    int a;
};

int main() {
    A(5);
    A *a = new A(10);
    delete (a);

    A *array_p = new A[20];
    delete[] array_p;

    return 0;
}
