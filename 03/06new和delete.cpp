//
// Created by 若云 on 2018/8/17.
//

#include <iostream>

using namespace std;

//c语言中
void testC() {
    int *p = (int *) malloc(sizeof(int));
    *p = 10;
    if (p != NULL) {
        free(p);
        p = NULL;
    }

    //开辟数组
    int *array_p = (int *) malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; ++i) {
        array_p[i] = i + 1;
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d", array_p[i]);
    }
    printf("\n");
}

//c++中
void testCPP() {
    int *p = new int;
    char *ch = new char;
    if (p != NULL) {
        delete p;
        p = NULL;
    }

    //开辟数组
    int *array_p = new int[10];
    for (int i = 0; i < 10; ++i) {
        array_p[i] = i + 1;
    }
    for (int i = 0; i < 10; ++i) {
        cout << array_p[i];
    }
    cout << endl;
}

int main() {
    testC();
    testCPP();

    return 0;
}

/**
 * malloc free是函数，标准库，stdlib.h
 *
 * new和delete是运算符，不是函数，因此执行效率高。
 *
 * 对于一般数据来说，free 和 delete 是一样的效果。
 * 但是对于class 来说，delete会执行析构函数，free不会执行析构函数。
 */
