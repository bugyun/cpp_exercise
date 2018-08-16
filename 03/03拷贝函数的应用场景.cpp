//
// Created by 若云 on 2018/8/15.
//
#include <iostream>

using namespace std;

class Test {

private:
    int x;
    int y;

public:

    Test(int x, int y) {
        this->x = x;
        this->y = y;
    }

    //显示的拷贝构造函数，会有默认的拷贝构造函数，浅拷贝
    Test(const Test &another) {
        this->x = another.x;
        this->y = another.y;
    }

    void print() {
        cout << x << y << endl;
    }

    //=赋值操作符，有默认的，浅拷贝
    void operator=(const Test &another) {
        this->x = another.x;
        this->y = another.y;
    }

    ~Test() {
        cout << "~Test.." << endl;
    }
};


Test fun1() {
    Test temp(1, 2);
    return temp;
}//匿名的对象 = temp

void test1() {
    cout << "test1 begin" << endl;

    fun1();//返回一个匿名对象。当一个函数返回一个匿名对象的时候，函数外部没有任何变量去接收它，
    // 这个匿名对象将不会再被使用，编译会直接将这个匿名对象回收掉，而不是等待整改函数执行完毕在回收。会在下面代码执行之前回收
    // 匿名对象被回收


    Test t1 = fun1();//会不会触发t1拷贝构造   t1.拷贝（匿名）？
    //并不会触发t1拷贝，而是将匿名对象转正 t1，把这个匿名对象起名字叫t1。

    t1 = fun1();//t1已经被初始化了，所以func1返回的匿名对象不会再次转正，而依然是匿名对象。
    //所以t1会调用等号操作符，t1.operator=(匿名对象)，然后编译器会立刻回收掉匿名对象


    cout << "test1 end" << endl;
}


