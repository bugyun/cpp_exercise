//
// Created by 若云 on 2018/8/24.
//
#include <iostream>

using namespace std;

class Parent {


public:
    Parent(int pub, int pro, int pri) {
        this->pub = pub;
        this->pri = pri;
        this->pro = pro;
    }

    int pub;//在类的内部和外部 都能访问。

protected:
    int pro;//在类的内部可以访问，在类的外部不可以

private:
    int pri;//在类的内部可以访问，在类的外部不可以
};

//公有继承，public protected   private
/**
 * 用来控制子类继承 父类的 成员函数和变量的访问权限。
 * public  ：子类按照原来父类中的访问权限不变
 * protected：降级 public->protected
 * private： 降级 public,protected->private
 */
class Child : public Parent {

public:

    Child(int pub, int pro, int pri) : Parent(pub, pro, pri) {

    }

    void funC() {
        cout << pub << endl;//pub父类的 public 成员变量，在public继承类的【内部 外部】可以访问

        cout << pro << endl;//pro父类的 protected 成员变量，在public继承类的【内部】可以访问

        cout << pri << endl;//pub父类的 private 成员变量，在public继承类的【内部 外部】不可以访问

    }


};


int main() {
    Child child(1, 2, 3);
    child.funC();


    return 0;
}


