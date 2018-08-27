//
// Created by 若云 on 2018/8/27.
//
#include <iostream>

using namespace std;


/**
 * C++中通过virtual关键字对多态进行支持
   使用virtual声明的函数被重写后即可展现多态特性
 */
class People {
public:
    virtual void fight() {//标识修饰一个成员方法是一个虚函数。
        cout << "人类打" << endl;
    }
};

class ZhangA : public People {
public:
    void fight() {//如果父类中有一个虚函数是fight(),子类如果去重写这个虚函数
        cout << "zhanga打" << endl;
    }
};

class ZhangB : public People {
public:
    void fight() {
        cout << "zhangb打" << endl;
    }
};

/**
 *多态发生的三个必要条件：
 * 1.要有继承
 * 2.要有虚函数重写
 * 3.要有父类指针（父类引用）指向子类对象
 */

void fight(People &people) {
    people.fight();
}

int main() {

    ZhangA *zhangA = new ZhangA();
    zhangA->fight();

    ZhangB *zhangB = new ZhangB();
    zhangB->fight();

    fight(*zhangA);
    fight(*zhangB);

    delete zhangA;
    delete zhangB;
    return 0;
}

/**
 * 结果：
 *  zhanga打
    zhangb打
    zhanga打
    zhangb打
 */

