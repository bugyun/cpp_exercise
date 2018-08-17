//
// Created by 若云 on 2018/8/17.
//

#include <iostream>

using namespace std;

class AA {

public:
    AA(int a, int b) {
        m_a = a;
        m_b = b;
    }

    ////声明
    static int m_c;//在全局静态区开辟空间

    int getC() {
        m_c++;
        return m_c;
    }

private:
    int m_a;
    int m_b;
};

////初始化
//静态成员变量的初始化，一定写在类的外面，不能写在函数方法里面，会报错
//error: definition or redeclaration of 'm_c' not allowed inside a function
//必须初始化之后才能使用
int AA::m_c = 10;

void test() {
    static int a = 10; //不会重新复制,只会保留一份
    a++;
    cout << a << endl;
}


void TestStatic() {
    //调⽤
    // AA::m_c;

}

int main() {

    test(); //11
    test();//12

    AA a1(10, 100);
    AA a2(100, 200);
    cout << a1.getC() << endl;
    cout << a2.getC() << endl;


    return 0;
}

/**
 *  //声明
    static 数据类型 成员变量; //在类的内部
    //初始化
    数据类型 类名::静态数据成员 = 初值; //在类的外部
    //调⽤
    类名::静态数据成员
    类对象.静态数据成员
 */
