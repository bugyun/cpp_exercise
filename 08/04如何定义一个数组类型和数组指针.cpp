//
// Created by 若云 on 2018/8/30.
//

#include <iostream>

using namespace std;


//方法一:直接定义一个数组类型
typedef int(ARRAY_INT_10)[10];


int main() {

    int array[10];//array 应该是一个指向int类型的指针

    ARRAY_INT_10 *array_int_10 = &array;

    return 0;
}
