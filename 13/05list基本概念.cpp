//
// Created by 若云 on 2018/9/10.
//
/**
 * 链表是由一系列的节点组成，节点包含了两个域，一个数据域，一个指针域.
 * 1.内存是非连续的，添加和删除元素 时间复杂度都是常数项，不需要移动元素，比数组添加删除效率高
 * 2.链表是在需要的时候，才分配内存空间
 *
 * push_back(ele);
 * pop_back();
 * push_front(ele);
 * pop_front();
 * insert(pos,ele);
 * insert(pos,n,ele);
 * clear();
 * erase();删除元素
 * remove();
 *
 * size();
 * empty();
 * resize(num);
 *
 * assign(beg,end);赋值
 * assign(n,ele);赋值
 * swap(list);交换
 *
 * front()返回第一个元素
 * back()返回最后一个元素
 *
 * reverse()反转链表
 * sort();排序
 */

#include <iostream>
#include <list>

using namespace std;

void printList(list<int> &d) {
    for (list<int>::iterator it = d.begin(); it != d.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {

    list<int> mlist1;
    list<int> mlist2(10, 10);
    list<int> mlist3(mlist2);
    list<int> mlist4(mlist2.begin(), mlist2.end());

    printList(mlist4);
}


int main() {

    test01();
    return 0;
}









