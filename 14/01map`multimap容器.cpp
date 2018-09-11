//
// Created by 若云 on 2018/9/11.
//

/**
 * map相对于set区别，map有键值对，所有的元素根据键值自动排序。map是以红黑树为底层实现机制。
 * multimap，允许重复键
 *
 *
 *
 *
 *
 *
 */

#include <iostream>
#include <map>
#include <string>

using namespace std;


void printMap(map<int, string> &m) {
    for (map<int, string>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "key: " << it->first << "  value: " << (*it).second << endl;
    }
}

void test01() {
    map<int, string> m;
//    m.insert(1, "2123");错误，不能这样使用
    m.insert(pair<int, string>(2, "11"));//如果key不存在，创建pair插入到map容器中，如果key存在，不会插入成功
    m.insert(make_pair(3, "312"));
    m.insert(map<int, string>::value_type(4, "ssd"));
    m[5] = "ldldl";//如果key不存在，创建pair插入到map容器中，如果key存在，那么会修改key对应的value

    pair<map<int, string>::iterator, bool> ret = m.insert(pair<int, string>(6, "11"));
    if (ret.second) {
        cout << "插入成功" << endl;
    } else {
        cout << "插入失败" << endl;
    }

    printMap(m);

    cout << "m[60]" << m[60] << endl;//如果通过[]方式去访问map中一个不存在的key,那么map会将整个访问的key插入到map中

    printMap(m);


}


int main() {
    test01();

    return 0;
}

