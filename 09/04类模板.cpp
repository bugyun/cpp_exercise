//
// Created by 若云 on 2018/8/31.
//
#include <iostream>

using namespace std;

template<class T>
class Person {
public:

    Person(T id, T age) {
        this->id = id;
        this->age = age;
    }

    void print() {
        cout << "id = " << this->id << " age = " << this->age << endl;
    }

private:
    T id;
    T age;
};

int main() {
    //函数模板在调用的时候，可以自动类型推导
    //类模板必须显示指定类型
    Person<int> p(10, 20);
    p.print();

    return 0;
}




