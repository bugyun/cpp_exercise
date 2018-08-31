//
// Created by 若云 on 2018/8/31.
//
#include <iostream>
#include <string>
#include "Person.hpp"//改成cpp,就可以解决编译错误问题

using namespace std;

int main() {

    //构造函数定义在当前文件没有找到，编译认为这个函数在其他文件
    Person<int> p(11);
    p.show();

    return 0;
}
