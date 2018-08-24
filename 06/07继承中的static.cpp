//
// Created by 若云 on 2018/8/24.
//

#include <iostream>

using namespace std;


class Parent {
public:
    static int a;
};

int Parent::a = 100;

class Child : public Parent {
public:

};

int main() {

    Parent p1;
    Parent p2;

    cout << p1.a << endl;
    cout << p2.a << endl;

    Parent::a = 300;

    cout << p1.a << endl;
    cout << p2.a << endl;

    Child c1;
    Child c2;

    cout << c1.a << endl;
    cout << c2.a << endl;


    return 0;
}



