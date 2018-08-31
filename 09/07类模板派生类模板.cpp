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

template<class T>
class Child : public Person<T> {

};

