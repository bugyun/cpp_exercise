//
// Created by 若云 on 2018/8/9.
//

#include <iostream>

/**
 * iostream 提供一个命名空间的东西，标准的命名空间是 std
 */
int method1() {//方式一：
    std::cout << "" << std::endl;
    return 0;
}

int method2() {//方式二
    using std::cout;//声明命名空间中的一个变量
    using std::endl;
    cout << "" << endl;
    return 0;
}

int method3() { //方式三
    using namespace std;
    cout << "" << endl;
    return 0;
}

int main(void) {
    method1();
    method2();
    method3();
}

