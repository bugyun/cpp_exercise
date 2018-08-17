
//
// Created by 若云 on 2018/8/17.
//
#include <iostream>

using namespace std;

class Test {
public:
    Test(int i) {
        this->mI = i;
        mI = i;
    }

    int getI() {
        return this->mI;//this代表对象的地址
    }

    int getK() const //成员函数尾部出现const 修饰的是this指针
    {
        //this->m_k = 100;//this指针不是const Test *
        //this++;//this 指针是一个常指针，Test *const
        //地址不能修改，但是内容是可以修改的
        //this->mI = 100;// member function 'Test::getK' is declared const here,因为在上面函数方法中有const 字段，所以表示不能修改指针里面的内容
        //const Test *const
        return this->mI;
    }

    static int s_getK() {
        //return this->mI;//报错，静态方法只能返回静态的参数
        return m_k;
    }

private:
    int mI;
    static int m_k;
};

int Test::m_k = 10;


int main() {


    return 0;
}


