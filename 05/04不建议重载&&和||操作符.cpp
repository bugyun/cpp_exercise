//
// Created by 若云 on 2018/8/23.
//
#include <iostream>

using namespace std;

class Test {
public:
    Test(int a) {
        this->a = a;
    }

private:
    int a;
};


int main() {

    int a = 0;
    int b = 20;


    Test t1(0);
    Test t2(20);

    //&& 操作符  如果前面为假，后面就不执行了，但是如果是重写了操作符，那么就都会执行
    if (t1 && (t1 + t2)) {//t1.operator&&(t1.operator+(t2))
        cout << "为真" << endl;
    } else {
        cout << "为假" << endl;
    }
    return 0;
}