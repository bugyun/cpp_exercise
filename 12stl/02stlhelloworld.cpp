//
// Created by 若云 on 2018/9/8.
//
#include <iostream>

#include <vector>//动态数组 可变数组
#include <algorithm>//算法

using namespace std;


void PrintVector(int v) {
    cout << v << " ";
}

void test01() {
    vector<int> v;//定义一个容器，并且指定这个容器存放到的元素类型是int
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    vector<int>::iterator pBegin = v.begin();
    vector<int>::iterator pEnd = v.end();

    //通过stl提供的for_each算法
    for_each(pBegin, pEnd, PrintVector);
    cout << endl;
}

class People {
public:
    People(int a) {
        this->a = a;
    }

public:
    int a;
};

void test02() {
    vector<People> v;
    People p1(1), p2(2), p3(3);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    //遍历
    for (vector<People>::iterator it = v.begin(); it != v.end(); it++) {
        cout << (*it).a << " ";
    }
    cout << endl;
}

int main() {
    test01();
    test02();

    return 0;
}
