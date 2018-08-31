//
// Created by 若云 on 2018/8/31.
//
#include <iostream>

using namespace std;

template<class T>
class Person {
public:
    static int a;
};

template<class T> int Person<T>::a = 0;

int main() {

    Person<int> p1, p2, p3;
    cout << "p1 = " << p1.a << endl;

    Person<char> cp1, cp2, cp3;

    cp1.a = 11;

    cout << "p1 = " << p1.a << endl;
    cout << "cp1 = " << cp1.a << endl;
    return 0;
}
