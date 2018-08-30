//
// Created by 若云 on 2018/8/30.
//

#include <iostream>

using namespace std;

int func(int a, int b) {
    cout << "func" << endl;
    return 0;
}

int func2(int a, int b) {
    cout << "func" << endl;
    return 0;
}

int func3(int a, int b) {
    cout << "func" << endl;
    return 0;
}


//定义一个统一的接口 将他们全部调用起来。
void my_function(int(*fp)(int, int), int a, int b) {
    fp(a, b);
}


//方法一：函数的返回值   函数的参数列表（形参的个数，类型，顺序）

//定义一个函数类型。
typedef int(FUNC)(int, int);

//方法二 ：定义一个函数指针
typedef int(*FUNC_P)(int, int);


int main() {
    //方法一：
    FUNC *fp = NULL;
    fp = func;
    fp(10, 20);
    (*fp)(10, 20);


    FUNC_P fp2 = NULL;
    fp2 = func;
    fp2(100, 200);


    //方法三：
    int (*fp3)(int, int) = NULL;
    //int (*)(int, int) fp3= NULL;//可以看成这样
    fp3 = func;
    fp3(200, 300);


    //
    my_function(func3, 100, 200);


    return 0;
}