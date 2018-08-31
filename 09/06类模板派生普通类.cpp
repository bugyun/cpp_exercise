//
// Created by 若云 on 2018/8/31.
//

#include <iostream>

using namespace std;


template<class T>
class Person {

public:
    Person() {

    }

public:
    T age;
};

//为什么要这样写？
//定义对象，需要分配内存，所以需要声明类型
class SubPerson : public Person<int> {



};
