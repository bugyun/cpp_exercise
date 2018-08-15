//
// Created by 若云 on 2018/8/15.
//
#include <iostream>

using namespace std;


class Test {

private:
    int x;
    int y;

public:

    Test(int x, int y) {
        this->x = x;
        this->y = y;
    }

    //显示的拷贝构造函数，会有默认的拷贝构造函数，浅拷贝
    Test(const Test &another) {
        this->x = another.x;
        this->y = another.y;
    }

    void print() {
        cout << x << y << endl;
    }

    //=赋值操作符，有默认的，浅拷贝
    void operator=(const Test &another) {
        this->x = another.x;
        this->y = another.y;
    }
};

int main() {

    Test t1(10, 15);
    t1.print();

    Test t2(t1);
    t2.print();

    //构造函数是对象初始化的时候调用
    Test t3 = t2;//依然是初始化t3的时候调用t3构造函数，依然是调用t3的拷贝构造函数

    t3 = t1;//调用的不是t3拷贝构造函数，而是t3的赋值操作函数,operator=
    return 0;
}


/**
 * 由已存在的对象，创建新对象。
 * 也就是说新对象，不由构造器来构造，而是由拷贝来完成。拷贝构造器的格式是固定的。
 *
    class 类名 {
        类名(const 类名 & another) {
            拷⻉贝构造体
        }
    }
 *
 */


