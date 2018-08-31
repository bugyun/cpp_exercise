//
// Created by 若云 on 2018/8/31.
//

#include <iostream>
#include <string>

using namespace std;

//类内实现
template<class T1, class T2>
class Person {

public:
    Person(T1 name, T2 age) {
        this->age = age;
        this->name = name;
    }

    void show() {
        cout << "name = " << this->name << "  age = " << this->age << endl;
    }

public:
    T1 name;
    T2 age;
};

void test01() {
    Person<string, int> p("AAA", 20);
    p.show();
}

int main() {

    test01();
    return 0;
}