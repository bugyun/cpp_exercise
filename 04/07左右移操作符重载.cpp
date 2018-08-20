//
// Created by 若云 on 2018/8/20.
//
#include <iostream>

using namespace std;

class Complex {

public:

    Complex(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void printComplex() {
        cout << "a = " << a << " b = " << b << endl;
    }

    //左操作符只能写在全局，如果写在类中的话，调用的顺序会变反 c1 << cout << endl;
//    ostream &operator<<(ostream &os) {
//        os << "(" << a << "  " << b << "i)";
//        return os;
//    }

    friend ostream &operator<<(ostream &os, Complex &c);

    friend istream &operator>>(istream &is, Complex &c);

private:
    int a;//实数
    int b;//虚数
};

ostream &operator<<(ostream &os, Complex &c) {
    os << "(" << c.a << "  " << c.b << "i)";
    return os;
}

istream &operator>>(istream &is, Complex &c) {
    cout << "a:";
    is >> c.a;
    cout << "b:";
    is >> c.b;
    return is;
}

int main() {

    Complex c1(1, 2);
    cin >> c1;
    cout << c1 << endl;

//    c1 << cout << endl;

    return 0;
}
