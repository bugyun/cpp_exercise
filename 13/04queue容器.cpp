//
// Created by 若云 on 2018/9/10.
//
/**
 * queue 容器 队列容器  先进先出
 * 不能进行遍历 - 不提供迭代器
 * 不支持随机访问
 *
 *
 * push()
 * pop()
 * back()
 * front()
 *
 * empty()
 * size()
 */

#include <iostream>
#include <queue>

using namespace std;


int main() {

    quene<int> q;

    q.push(19);
    q.push(20);
    q.push(25);
    q.push(30);
    while (q.size() > 0) {
        cout << q.front() << " ";
        q.pop();
    }


    return 0;
}






