//
// Created by 若云 on 2018/8/17.
//

#include <iostream>

using namespace std;

class Test {

public:
    Test(int a) {
        cout << "Test()..." << endl;
        m_a = a;
    }

    ~Test() {
        cout << "~Test()..." << endl;
    }

    void printTest() {
        cout << "a = " << m_a << endl;
    }

private:
    int m_a;

};

//c语言中在堆上创建对象
void testC() {
    //不能自动够执行有参数的构造函数，必须手动调用方法
    Test *tp = (Test *) malloc(sizeof(Test));
//    tp->setA();
    tp->printTest();
    if (tp != NULL) {
        free(tp);
        tp = NULL;
    }
}

//c++中在堆上创建对象
//new 在堆上初始化一个对象的时候，会触发对象的构造函数，malloc不能
//free不会触发析构函数
void testCPP() {
    Test *tp = new Test(10);//触发有参构造
    tp->printTest();
    //Test *tp2 = new Test;//触发无参构造
    if (tp != NULL) {
        delete tp;
        tp = NULL;
    }
}

int main() {
    testC();
    testCPP();
    return 0;
}

/**
 * 之前的都是在栈上分配空间，所以在方法执行完成之后，就会执行析构函数。
 * 如果是在堆上分配空间，如果不进行delete的话，不会执行析构函数。
 */


