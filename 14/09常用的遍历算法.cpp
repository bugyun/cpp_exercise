//
// Created by 若云 on 2018/9/12.
//

/**
 * find  查找元素
 * adjacent_find 查找相邻重复元素
 * binary_search 二分查找
 */

#include <iostream>
#include <functional>

using namespace std;


void test01() {
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    vector<int>::iterator ret = find(v.begin(), v.end(), 5);
    if (ret == v.end()) {
        cout << "没有找到" << endl;
    } else {
        cout << "找到" << endl;
    }
    binary_search(v.begin(), v.end(), 5);
}

int main() {


    return 0;
}







