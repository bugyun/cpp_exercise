//
// Created by 若云 on 2018/8/28.
//
#include <iostream>

using namespace std;


//如果类有纯虚函数，那么就称这个类为抽象类
//不管这个类中有没有成员函数，只要这个类有纯虚函数，就是一个抽象类，抽象类是不能够实例化的。
class Shape {

public:
    virtual double getArea() = 0;//纯虚函数 最后 = 0 表示一个纯虚函数

};

//如果一个普通类，继承拥有纯虚函数的类，必须要重写这个纯虚函数
class Rect : public Shape {

public:
};





