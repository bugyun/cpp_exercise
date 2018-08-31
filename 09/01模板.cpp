//
// Created by 若云 on 2018/8/30.
//

/**
 * c++提供两种模板机制：函数模板和类模板
 */


#include <iostream>

using namespace std;
#if 0
//int类型
void MySwap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

//double类型
void MySwap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

#endif

//模板技术  类型参数化 编写代码可以忽略类型
//为了让编译器区分是普通函数  模板函数
template<class T>
// = template<typename T>
//告诉编译器 我下面写模板函数，看到奇怪的符号别报错
void MySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<class T1, class T2, class T3>
//参数随便写
void MySwap(T &a, T &b) {


}

template<typename T>
void MySwapT(T &a, T &b) {

}


void test01() {

    int a = 10;
    int b = 20;
    //自动类型推导
    MySwap(a, b);//编译器根据你传的值 进行类型自动推导
    //显示指定类型
    MySwap<int>(a, b);//编译器根据你传的值 进行类型自动推导

}

int main() {


    return 0;
}