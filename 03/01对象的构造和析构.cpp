//
// Created by 若云 on 2018/8/15.
//
#include <iostream>

using namespace std;


class Test {


private:
    int x;
    int y;
    char *name;

public://如果不定义public 默认函数、构造方法和普通方法都是private的

    Test() {//无参的构造函数

    }

    Test(int x, int y) {
        this->x = x;
        this->y = y;
        name = (char *) malloc(100);
        strcpy(name, "zhang3");
    }

    void printTest() {
        cout << "x = " << x << " y = " << y << "name " << name << endl;
    }

    //析构函数和构造函数都没有返回值
    //析构函数没有形参
    ~Test() {
        cout << "Test 析构函数" << x << endl;
        if (name != NULL) {
            free(name);
        }
    }
};

void test01() {
    Test t;//调用无参构造函数
    Test test(10, 100);//创建对象，并调用构造函数
    test.printTest();
}


int main() {
    test01();
    return 0;
}

/**
 * x = 10 y = 100
    Test 析构函数10
    Test 析构函数0

    栈：后进先出
 */

