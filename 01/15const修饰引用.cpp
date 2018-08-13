//
// Created by 若云 on 2018/8/13.
//

#include <iostream>

using namespace std;

int main() {

    const int a = 10;
    //int &re = a;//error
    const int &re = a;//right


    //普通引⽤用
    int a = 10;
    int &b = a;
    cout << "b = " << b << endl;
    //常引⽤用
    int x = 20;
    const int &y = x; //常引⽤用是限制变量为只读 不能通过y去修改x了
    //y = 21;//error

    return 0;
}