//
// Created by 若云 on 2018/9/12.
//

#include <iostream>
#include <map>
#include <string>
#include <iterator>


using namespace std;

//排序
struct mycompare {
    bool operator()(const MyKey &v1, const MyKey &v2) const {
        return v1.index > v2.index;
    }
};

class MyKey {
public:
    MyKey(int index, int id) {
        this->id = id;
        this->index = index;
    }

public:
    int index;
    int id;
};

void printMap(map<MyKey, int> &m) {
    for (map<int, MyKey>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "key: " << (it->first).index << "  value: " << (*it).second << endl;
    }
}


void test01() {
    map<MyKey, int, mycompare> m;
    m.insert(make_pair(MyKey(3, 1), 3));//如果key不存在，创建pair插入到map容器中，如果key存在，不会插入成功
    printMap(m);
}


int main() {
    test01();
    return 0;
}
