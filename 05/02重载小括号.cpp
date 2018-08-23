//
// Created by 若云 on 2018/8/23.
//

#include <iostream>

using namespace std;

class Sqr {

public:

    Sqr(int a) {
        this->a = a;
    }

    int operator()(int value) {
        return value * value;
    }

private:
    int a;
};

int main() {
    Sqr s(10);
    int value = s(2);//将一个对象当成一个普通函数来调用。称这种对象是伪函数。
    cout << value << endl;
    return 0;
}



