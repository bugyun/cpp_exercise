//
// Created by 若云 on 2018/8/27.
//
#include <iostream>

using namespace std;

class People {
public:
    void fight() {
        cout << "人类打" << endl;
    }
};

class ZhangA : public People {
public:
    void fight() {
        cout << "zhanga打" << endl;
    }
};

class ZhangB : public People {
public:
    void fight() {
        cout << "zhangb打" << endl;
    }
};

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
    //编译器默认做了一个安全的处理。编译器认为：不管传递是子类对象还是父类对象，如果统一执行父类的方法，那么是一定可以被成功执行的。

    /**
     * 编译器做了一个安全的考虑
     * 因为父类和子类都有相同的fight函数
     */

    delete zhangA;
    delete zhangB;
    return 0;
}

/**
 * 结果：
 * zhanga打
   zhangb打
   人类打
   人类打
 *
 *
 * 我们想的是传递是哪个对象，就调用哪个对象的方法，但是没有，全是调用父类的方法。
 * 编译器的做法不是我们期望的。
 */

