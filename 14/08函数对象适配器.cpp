//
// Created by 若云 on 2018/9/12.
//
/**
 * 函数对象适配器是完成一些配接工作，这些配接包括 绑定（bind），否定（negate），以及对一般函数或成员函数的修饰，使其成为函数对象，重点掌握函数对象适配器。
 *
 * bind1st:将参数绑定为函数对象的第一个参数
 * bind2nd:将参数绑定为函数对象的第二个参数
 * not1:对一元函数对象取反
 * not2:对二元函数对象取反
 * ptr_fun:将普通函数修饰成函数对象
 * men_fun:修饰成员函数
 * men_fun_ref:修饰成员函数
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

struct MyPrint {
    void operator()(int v) {
        cout << v << endl;
    }
};


struct MyPrint2 : public binary_function<int, int, void> {
    void operator()(int v, int val) const {
        cout << v + val << endl;
    }
};

//bind1st:将参数绑定为函数对象的第一个参数
//bind2nd:将参数绑定为函数对象的第二个参数
void test01() {
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    for_each(v.begin(), v.end(), MyPrint());
    //绑定适配器
    for_each(v.begin(), v.end(), bind1st(MyPrint2(), 100)); // bind1st  deprecated in C++11, removed in C++17
    for_each(v.begin(), v.end(), bind2nd(MyPrint2(), 100)); // bind2nd  deprecated in C++11, removed in C++17
    //将一个二元函数对象转变为一元函数对象
}


struct MyCompare : public binary_function<int, int, bool> {
    bool operator()(int v, int val) const {
        return v1 > v2;
    }
};

struct MyGreater {
    bool operator()(int v) {
        return v > 5;
    }
};

//仿函数适配器 not1 not2 取反适配器
void test02() {

    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    for_each(v.begin(), v.end(), MyPrint());
    //绑定适配器
    for_each(v.begin(), v.end(), MyPrint());
    sort(v.begin(), v.end(), not1(MyCompare()));

    //not1 not2
    //如果对二元谓词取反，用not2
    //如果对一元谓词取反，用not1


    find_if(v.begin(), v.end(), MyGreater());

}


int main() {
    test01();
    return 0;
}





