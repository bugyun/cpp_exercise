//
// Created by 若云 on 2018/8/13.
//

#include <iostream>

using namespace std;

//1 若 你填写参数,使⽤用你填写的,不填写默认
void myPrint(int x = 3) {
    cout << "x: " << x << endl;
}

//2 在默认参数规则 ，如果默认参数出现，那么右边的都必须有默认参数
float volume(float length, float weight = 4, float high = 5) {
    return length * weight * high;
}

/**
  函数占位参数
  占位参数只有参数类型声明，⽽没有参数名声明
  一般情况下，在函数体内部⽆法使用占位参数
*/
int func(int a, int b, int = 0) {
    return a + b;
}

int main() {
    float v = volume(10);
    float v1 = volume(10, 20);
    float v2 = volume(10, 20, 30);
    cout << v << endl;
    cout << v1 << endl;
    cout << v2 << endl;

    func(10, 20);
    return 0;
}