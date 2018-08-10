//
// Created by 若云 on 2018/8/9.
//

#include <iostream>

/**
 * 1.C语⾔言中的变量都必须在作⽤用域开始的位置定义!!
 * 2.C++中更强调语⾔言的“实⽤用性”，所有的变量都可以在需要使⽤用时再定义。
 */
using namespace std;

int g_val;//bss段

void main() {
    //定义一个变量 可以随用随定义
    int i = 0;
    for (int i = 0; i < 10; i++) {

    }
    int b = 20;
    cout << b << endl;
}

