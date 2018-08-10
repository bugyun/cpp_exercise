//
// Created by 若云 on 2018/8/8.
//

#include <iostream>

using namespace std;

class circle {
public:
    double r;
    double pi = 3.1415;
    double area = pi * r * r;

private:
    int age;
public:
    char name[];

    circle() {//构造函数

    }

    ~circle() { //析构函数

    }


    circle(const circle &another) {

    }

};

int main() {

    circle pi;
    cout << "11212" << endl;
    cin >> pi.r;

    cout << pi.area << endl;
    return 0;
}



