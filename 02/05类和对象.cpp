//
// Created by 若云 on 2018/8/13.
//

#include <iostream>

using namespace std;

/**
 * struct 中所有行为和属性都是 public 的(默认)。C++中的 class 可以指定行 为和属性的访问方式
 */
struct People {
    char name[64];
    int age;
    int sex;

    void testPeople() {//c++中可以定义函数，但是c语言中，struct没有函数
        cout << "name people" << endl;
    }
};


class AdvHero {

public:
    char name[64];//不需要  malloc(),直接进行 strcpy(advHero.name, "nihao");
    int sex;

    void printHero() {
        cout << name << " " << sex << endl;
    }

    void printTest();//必须先要声明，才可以在类外面实现这个方法。

private://在private下面定义的成员变量和方法只能在类的内部访问
    int age;
};

void AdvHero::printTest() {
    cout << "test " << name << endl;
}

int main() {
    People people;
    people.testPeople();

    AdvHero advHero;
    advHero.sex = 12;
    strcpy(advHero.name, "nihao");
    advHero.printHero();
    advHero.printTest();
    return 0;
}
/**
 * struct和class关键字区别
 * 在用struct定义类时，所有成员的默认属性为public
 * 在用class定义类时，所有成员的默认属性为private
 */
