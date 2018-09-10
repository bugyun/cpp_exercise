//
// Created by 若云 on 2018/9/10.
//

#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

/**
 *
 * vector容器
 * 动态数组，可变数组
 * 数组，连续的内存空间,单口容器
 *
 * pushback():存
 * pop_back():取
 *
 * insert():插入
 *
 *
 * vector动态增长的基本原理
 * 当插入新元素的时候，如果空间不足，那么vector会重新申请更大的一块内存空间，将原空间数据拷贝到新空间，释放旧空间的数据，在把新元素插入到新申请的空间。
 *
 * 构造方法：
 * vector<T> v;采用模板实现类实现，默认构造方法
 * vector(v.begin(),v.end());//将v[begin,end]区间中的元素拷贝到本身
 * vector(n,elem);//构造函数将n个elem拷贝给本身
 * vector(const vector &vec);//拷贝构造
 *
 * 例子：
 * int arr[] = {2,3,4,5,6};
 * vector<int> v1(arr,arr+sizeof(arr)/sizeof(int));
 */

void printVector(vector<int> &v) {
    //遍历
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

//默认构造
void test01() {
    vector<int> v1;
    int arr[] = {10, 20, 30};
    vector<int> v2(arr, arr + sizeof(arr) / sizeof(int));
    vector<int> v3(v2.begin(), v2.end());
    vector<int> v4(v3);

    printVector(v4);
}


void test02() {

}

/**
 * vector大小操作
 * size():
 * empty():
 * resize(int num):
 * resize(int num,elem):
 * capacity():容器的容量
 * reserve(int len):容器预留len个元素长度，预留位置不初始化，元素不可访问。
 *
 */
void test03() {


}

/**
 * vector数据存取操作
 * at(int idx);返回索引idx所指的数据，如果idx越界，抛出out_of_range 异常
 * operator[];返回索引idx所指的数据，越界时，运行直接报错
 * front();返回容器中第一个数据元素
 * back();返回容器最后一个数据元素
 */
void test04() {

}

/**
 * vector 插入和删除操作
 * insert(const_iterator pos,int count,ele);迭代器直线位置pos插入count 个元素ele
 * push_back(ele);尾部插入元素
 * pop_back();取出并删除最后一个元素
 * erase(const _iterator start,const _iterator end);删除迭代器从start 到 end之间的元素
 * erase(const_iterator pos);删除迭代器指向的元素
 * clear();删除容器所有元素
 */
void test05() {

}


/**
 * resize(int) 缩减 size
 * swap 缩减 capacity
 *
 */
void test06() {

}




int main() {
    test01();
    return 0;
}
/**
 * vector 是个动态数据，当空间不足的时候出入新元素，vector会重新申请一块更大的内存空间，将旧空间数据拷贝到新空间，然后释放旧空间。
 * vector 是单口容器，所以在尾端插入和删除元素效率高，在指定位置插入，势必会引起元素移动，效率较低。
 */


/**
 * reserve() 是容器预留空间，但在空间内不真正创建元素对象，所以在没有添加新的对象之前，不能引用容器内的元素,可以减少拷贝的时间。
 * resize() 是改变容器的大小，且在创建对象，因为，调用这个函数之后，就可以引用容器中的对象了。
 */





