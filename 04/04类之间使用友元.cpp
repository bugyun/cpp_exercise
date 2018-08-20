//
// Created by 若云 on 2018/8/20.
//
#include <iostream>
#include <cmath>

using namespace std;

//----------先声明--------------------
class Point;

class PointManager {
public:
    double PointDistance(Point &p1, Point &p2);
};
//------------------------------------
/**
 *  如果不声明的话：报错
 *  error: unknown type name 'Point'
 */

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

    friend double PointManager::PointDistance(Point &p1, Point &p2);//放到哪都行，只要在类内部

private:
    int x;
    int y;
};

int main() {
    return 0;
}