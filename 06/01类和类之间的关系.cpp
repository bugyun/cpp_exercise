//
// Created by 若云 on 2018/8/24.
//

#include <iostream>

using namespace std;

class A {

public:
    int a;
private:
    int b;
};

class D : public A {

public:
    void funD() {
        cout << a << endl;
    }

    void funB() {
        cout << "" << endl;
    }
};

class E : public D {

};

int main() {

    return 0;
}
