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

    friend Complex complexAdd(Complex &c1, Complex &c2);

    //friend Complex operator+(Complex &c1, Complex &c2);

    Complex complexAdd(Complex &c2) {
        Complex temp(a + c2.a, c2.b + b);
        return temp;
    }

    Complex operator+(Complex &c2) {
        Complex temp(a + c2.a, c2.b + b);
        return temp;
    }

    const Complex &operator++() {//重载的是前++,const关键字 不让连续++，++++c3; cannot increment value of type 'const Complex'
        a++;
        b++;
        return *this;
    }

    const Complex &operator++(int) {//重载的是后++
        a++;
        b++;
        return *this;
    }


    Complex &operator--() {
        a--;
        b--;
        return *this;
    }

    Complex &operator--(int) {//int  亚元：是一种没有参数名的参数，主要是为了函数间的区别以及向前兼容
        a--;
        b--;
        return *this;
    }

private:
    int a;//实数
    int b;//虚数
};

Complex complexAdd(Complex &c1, Complex &c2) {
    Complex temp(c1.a + c2.a, c2.b + c1.b);
    return temp;
}

//全局重载+
//Complex operator+(Complex &c1, Complex &c2) {
//    Complex temp(c1.a + c2.a, c2.b + c1.b);
//    return temp;
//}


int main() {
    Complex c1(1, 2);
    Complex c2(2, 4);
    c1.printComplex();
    c2.printComplex();

    Complex c3 = complexAdd(c1, c2);
    c3.printComplex();

    ++c3;
    c3.printComplex();
    c3++;
    c3.printComplex();

//    Complex c4 = operator+(c1, c2);//operator+等价于下面的方式
    Complex c4 = c1 + c2;
    c4.printComplex();
    return 0;
}