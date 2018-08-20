//
// Created by 若云 on 2018/8/20.
//

#include <iostream>

using namespace std;

class A {

public:
    A(int a) {
        this->a = a;
    }

    void printA() {
        cout << "a = " << this->a << endl;
    }

    ~A() {

    }

    //声明一个友元类, 友元关系是单向的,不具有交换性。
    friend class B;

private:
    int a;
};

class B {
public:
    B(int b) {
        this->b = b;
    }

    void printB() {
        A objA(100);
        cout << objA.a << endl;
        cout << "b = " << this->b << endl;
    }

    ~B() {

    }

private:
    int b;
};

/**
 *   注意事项：
(1) 友元关系不能被继承。
(2) 友元关系是单向的,不具有交换性。若类 B 是类 A 的友元,类 A 不一定是类 B 的友元,要看在类中是否有相应的声明。
(3) 友元关系不具有传递性。若类 B 是类 A 的友元,类 C 是 B 的友元,类 C 不一 定 是类 A 的友元,同样要看类中是否有相应的声明。
    声明位置：
  友元声明以关键字 friend 开始,它只能出现在类定义中。因为友元不是授 权类的 成员,
所以它不受其所在类的声明区域 public private 和 protected 的影 响。通常我们 选择把所有友元声明组织在一起并放在类头之后.
    友元利弊：
  友元不是类成员,但是它可以访问类中的私有成员。友元的作用在于提高 程序的运 行效率,
但是,它破坏了类的封装性和隐藏性,使得非成员函数可以访问 类的私有成员。
不过,类的访问权限确实在某些应用场合显得有些呆板,从而容 忍了友元这一特别语法 现象。

 */

