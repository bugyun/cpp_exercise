//
// Created by 若云 on 2018/9/3.
//
/**
 * c语言只有强制转化
 * Type a = (Type)b;
 *
 * C++语言有4中类型转换方式：
 * 1.一般的转换
 * 2.
 *
 *
 *
 */
#include <iostream>

using namespace std;

class Building {

};

class Animal {

};

class Cat : public Animal {

};

// static_cast:
// 1.用于基本数据类型
// 2.具有继承关系的指针或引用
void test01() {
    //基本数据类型
    int a = 90;
    char c = static_cast<char>(a);
    cout << "值为： " << c << endl;

    //基础数据类型指针，有问题，不能转换
    //int *p = NULL;
    //char *sp = static_cast<char *>(p);//static_cast from 'int *' to 'char *' is not allowed

    //对象指针
    //非继承关系的指针，有问题，不能转换
    //Building building = NULL;
    //Animal *animal = static_cast<Animal *>(building);

    //转换具有继承关系的对象指针
    //父类指针转成子类指针
    Animal *ani = NULL;
    Cat *cat = static_cast<Cat *> (ani);
    //子类指针转成父类指针
    Cat *cat1 = NULL;
    Animal *ani1 = static_cast<Animal *>(cat1);

    //引用
    Animal aniobj;
    Animal &aniref = aniobj;
    Cat &cat2 = static_cast<Cat &>(aniref);
}

//dynamic_cast 转换具有继承关系的指针或引用，在转换前会进行对象类型检测
//只能转换具有继承关系的指针或引用
//只能由子类转成父类型
void test02() {
    //基本数据类型
    //int a = 90;
    //char c = dynamic_cast<char>(a);
    //cout << "值为： " << c << endl;

    //对象指针
    //非继承关系的指针，有问题，不能转换
    //Building building = NULL;
    //Animal *animal = dynamic_cast<Animal *>(building);

    //转换具有继承关系的对象指针
    //父类指针转成子类指针,不能，因为 dynamic_cast 做了类型安全检查，父类不能转成子类
    //Animal *ani = NULL;
    //Cat *cat = dynamic_cast<Cat *> (ani);
    //子类指针转成父类指针
    Cat *cat1 = NULL;
    Animal *ani1 = dynamic_cast<Animal *>(cat1);

    //引用
    Cat aniobj;
    Cat &aniref = aniobj;
    Animal &cat2 = dynamic_cast<Animal &>(aniref);
}


//const_cast 指针 引用 或者 对象指针
//增加或者去除变量的const性
void test03() {
    //基本数据类型
    int a = 10;
    const int &b = a;
    int &c = const_cast<int &>(b);
    c = 20;
    cout << "c: " << c << endl;

    //看指针
    const int *p = NULL;
    int *p2 = const_cast<int *>(p);

    int *p3 = NULL;
    const int *p4 = const_cast<const int *>(p3);
}

typedef void(*FUNC1)(int, int);

typedef int(*FUNC2)(int, char *);

//reinterpret_cast 强制类型转换
//无关的指针类型，包括函数指针都可以进行转换
void test04() {
    //1.无关的指针类型都可以进行转换
    Building *building = NULL;
    Animal *ani = reinterpret_cast<Animal *>(building);

    //2.函数指针转换
    FUNC1 func1;
    FUNC2 func2 = reinterpret_cast<FUNC2>(func1);
}


int main() {

    test01();
    test02();
    test03();
    test04();
    return 0;
}

/**
 * 总结：
 * 1.程序猿必须清楚的知道要转变的变量，转换前是什么类型，转换后是什么类型，以及转换后还有什么后果。
 * 2.一般情况下，不建议类型转换，避免进行类型转换
 */






