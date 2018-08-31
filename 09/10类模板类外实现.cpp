//
// Created by 若云 on 2018/8/31.
//

#include <iostream>
#include <string>

using namespace std;
//-----友元和类模板------先声明--------

template<class T1, class T2>
class Person;

template<class T1, class T2>
void printPerson(Person<T1, T2> &p);

template<class T1, class T2>
ostream &operator<<(ostream &os, Person<T1, T2> &p);

//-----------后使用---------------

//实现在类的外面,类模板和友元一起使用的实例，
//需要在类外部声明，所以说 不要滥用友元
template<class T1, class T2>
class Person {

public:
    Person(T1 name, T2 age);

    void show();

    //template<class T1, class T2> //Windows 系统中这样是可以的编译成功的。
    friend ostream &operator<<<T1, T2>(ostream &os, Person<T1, T2> &p);

    //template<typename T1, typename T2> //Windows 系统中这样是可以的编译成功的。
    friend void printPerson<T1, T2>(Person<T1, T2> &p);

private:
    T1 name;
    T2 age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
    this->age = age;
    this->name = name;
}

template<class T1, class T2>
void Person<T1, T2>::show() {
    cout << "name = " << this->name << "  age = " << this->age << endl;
}

template<class T1, class T2>
ostream &operator<<(ostream &os, Person<T1, T2> &p) {
    os << "name = " << p.name << "  age = " << p.age << endl;
    return os;
}

template<class T1, class T2>
void printPerson(Person<T1, T2> &p) {
    cout << "name = " << p.name << "  age = " << p.age << endl;

}

void test01() {
    Person<string, int> p("AAA", 20);
    p.show();
    cout << p;
    printPerson(p);
}


int main() {
    test01();
    return 0;
}