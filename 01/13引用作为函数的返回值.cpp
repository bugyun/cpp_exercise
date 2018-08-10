//
// Created by 若云 on 2018/8/10.
//

#include <iostream>

using namespace std;

char *getMem(int num) {
    char *p = NULL;
    p = (char *) malloc(num);
    return p;
}

int getA1() {
    int a = 10;
    return a;
}

int getA2(int *a) {
    *a = 10;
    return 0;
}

//引用作为返回值，不要返回局部变量的引用
int &getA3() {
    int a = 10;
    return a;
}

int main() {


    int main_a = 0;
    main_a = getA3();

}
