//
// Created by 若云 on 2018/9/10.
//
/**
 * set/multiset容器
 * 特性：所有元素会根据元素的值自动进行排序
 * set是以RB-tree(红黑树，平衡二叉树的一种)为底层机制，查找效率非常好。
 * set容器中不容许重复元素，multiset容许重复元素。
 *
 * insert()
 * clear()
 * erase(pos)
 * erase(beg,end)
 * erase(ele)
 *
 * find(key)
 * lower_bound(keyElem)
 * upper_bound(keyElem)
 * equal_range(keyElem)
 */

#include <iostream>
#include <set>

using namespace std;

void printSet(set<int> &s) {
    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    set<int> s1;
    s1.insert(7);
    s1.insert(4);
    s1.insert(2);
    s1.insert(1);
    s1.insert(9);
    printSet(s1);//1 2 4 7 9
}

int main() {
    test01();
    return 0;
}


//仿函数
class mycompare {
public:
    bool operator()(int v1, int v2) {
        return v1 > v2;
    }
};

void test02() {
    mycompare com;
    com(10, 12);

    set<int, mycompare> s1;//设置排序规则
    s1.insert(7);
    s1.insert(4);
    s1.insert(2);
    s1.insert(1);
    s1.insert(9);
    printSet(s1);//1 2 4 7 9
}

//对象排序
class mycompare2 {
public:
    bool operator()(Person &p1, Person &p2) {
        return p1.age > p2.age;
    }
};


void test03() {
    set<People, mycompare2> s1;//设置排序规则
}
