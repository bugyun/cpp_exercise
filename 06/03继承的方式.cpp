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

/**
 * 规则1：只要是父类中private成员，不管是什么继承方式，儿子都访问不了
 * 规则2：如果是公有（public）继承，儿子中的访问控制权限保持不变
 * 规则3：如果是保护（protected)继承，儿子中父类中除了private成员，其余在儿子中都是protected
 * 规则4：如果是私有(private)继承，儿子中的父类的除了private成员，其余在儿子中都是private成员
 */

/**
 * 三看原则：
 * 1.看调用的成员变量在类的内部还是类的外部
 * 2.看儿子继承方式
 * 3.当前变量在儿子中的访问控制权限
 */

