//
// Created by 若云 on 2018/8/13.
//
#include <iostream>

using namespace std;

typedef int(MY_FUNC)(int, int);

int func(int a, int b) {
    cout << "func" << endl;
    return 0;
}

typedef int (*MY_FUNC_P)(int, int);

void test() {
    //1
    MY_FUNC *fp = NULL;
    fp = func;
    fp(10, 100);

    //2
    MY_FUNC_P fp1 = NULL;
    fp1 = func;
    fp1(20, 200);

    //3
    int (*fp3)(int, int) =func;
    fp3(30, 300);

    //实际上在给函数指针赋值的时候，是会发生函数重载匹配的。
    //在调用函数指针的时候，所调用的函数就已经固定了。
}

int main() {
    test();
    return 0;
}


