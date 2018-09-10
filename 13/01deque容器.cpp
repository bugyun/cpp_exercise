//
// Created by 若云 on 2018/9/10.
//

/**
 * vetor 底层是连续数组实现的。
 * deque 底层是链表结构+连续数组，双端队列（deque，全名double-ended queue）是一种具有队列和栈性质的抽象数据类型。双端队列中的元素可以从两端弹出，插入和删除操作限定在队列的两边进行。
 *
 * 中控器    缓冲区
 *
 * 链表      连续内存
 *
 * 链表指向连续内存
 *
 * 特性总结：
 * 双端插入和删除元素效率较高
 * 指定位置插入也会导致数据元素移动，降低效率
 * 可随机存取，效率高。
 */


#include <iostream>
#include <deque>

using namespace std;

void printDeque(deque<int> &d) {
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

//初始化
void test01() {
    deque<int> d1;
    deque<int> d2(10, 5);
    deque<int> d3(d2.begin(), d2.end());
    deque<int> d4(d3);
    printDeque(d4);
}

//赋值 大小操作
void test02() {
    deque<int> d1;
    deque<int> d2;
    deque<int> d3;
    d1.assign(10, 6);
    d2.assign(d1.begin(), d1.end());
    d3 = d2;
    printDeque(d3);
    d1.swap(d2);//交换两个空间元素
}

//deque容器插入和删除
void test03() {
    deque<int> d1;
    d1.push_back(100);
    d1.push_front(200);
    d1.push_back(300);
    d1.push_front(400);
    printDeque(d1);

    int val = d1.front();//拿到被删除的数据
    d1.pop_front();//删除

    val = d1.back();
    d1.pop_back();//删除最后一个元素
}


int main() {
    test01();
    test02();
    test03();

    return 0;
}


