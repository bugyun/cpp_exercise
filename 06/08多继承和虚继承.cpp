//
// Created by 若云 on 2018/8/27.
//
#include <iostream>

using namespace std;

//家具类
class Furniture {

public:
    int m;
};

//床
//将父亲类继承爷爷类 改成徐继承，防止儿子在多继承这个类的时候，出现爷爷中的变量会拷贝多份。
class Bed : virtual public Furniture {
public:

    void sleep() {
        cout << "在床上睡觉" << endl;
    }

private:
};


//沙发
class Sofa : virtual public Furniture {
public:
    void sit() {
        cout << "在沙发上睡觉" << endl;
    }

private:

};

class SofaBed : public Sofa, public Bed {
public:
    void sleepAndSit() {
        cout << "在沙发床上睡觉" << endl;
    }

};


int main() {

    Bed b;
    b.sleep();

    Sofa s;
    s.sit();

    cout << "--------" << endl;


    SofaBed sb;
    sb.sleepAndSit();
    //sb.m = 100;//如果在父类中不添加 virtual 的话，会报错 :non-static member 'm' found in multiple base-class subobjects of type 'Furniture':
    //此时只有一个m

    sb.Bed::m = 300;//如果父类添加的 virtual 操作的是同一个m,如果不添加，操作的是不同的对象
    sb.Sofa::m = 500;//如果父类添加的 virtual 操作的是同一个m,如果不添加，操作的是不同的对象
    cout << "sb.Bed::m : " << sb.Bed::m << endl;
    cout << "sb.Sofa::m : " << sb.Sofa::m << endl;
    cout << "sb.m : " << sb.m << endl;//如果在父类中不添加 virtual 的话，会报错
    return 0;
}






