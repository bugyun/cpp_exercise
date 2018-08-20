//
// Created by 若云 on 2018/8/20.
//

#include <iostream>
#include <cmath>

using namespace std;

class Point {
public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    ~Point() {

    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    friend double PointDistance(Point &p1, Point &p2);//放到哪都行，只要在类内部

private:
    int x;
    int y;
};

double PointDistance(Point &p1, Point &p2) {
    double dis;
    int dd_x = p1.x - p2.x;
    int dd_y = p1.y - p2.y;
    dis = sqrt(dd_x * dd_x + dd_y * dd_y);
    return dis;
}

double PointDistance01(Point &p1, Point &p2) {//如果在类内部没有声明友元的话，就不能直接调用类内部的函数，只能通过暴露出的方法
    double dis;
    int dd_x = p1.getX() - p2.getX();//'x' is a private member of 'Point'
    int dd_y = p1.getY() - p2.getY();
    dis = sqrt(dd_x * dd_x + dd_y * dd_y);
    return dis;
}

int main() {
    return 0;
}





/**
 * 友元的作用是提高了程序的运行效率(即减少了类型检查和安全性检查等都需要时间开销),
 * 但它破坏了类的封装性和隐藏性,使得非成员函数可以访问类的私有成员。
 */


