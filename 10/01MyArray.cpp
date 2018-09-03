//
// Created by 若云 on 2018/9/3.
//

#include <iostream>

using namespace std;

template<class T>
class MyArray {
public:
    MyArray(int capacity) {
        this->mCapacity = capacity;
        this->mSize = 0;
        this->pAddr = new T[capacity];
    }

    MyArray(const MyArray<T> &arr) {
        this->mCapacity = arr.capacity;
        this->mSize = arr.mSize;
        this->pAddr = new T[this->mCapacity];//申请内存空间
        //数据拷贝
        for (int i = 0; i < this->mSize; i++) {
            this->pAddr[i] = arr.pAddr[i];
        }
    }

    T &operator[](int index) {
        return this->pAddr[index];
    }

    MyArray<T> &operator=(const MyArray<T> &arr) {
        if (this->pAddr != NULL) {
            delete[] this->pAddr;
        }
        this->mCapacity = arr.capacity;
        this->mSize = arr.mSize;
        this->pAddr = new T[this->mCapacity];//申请内存空间
        //数据拷贝
        for (int i = 0; i < this->mSize; i++) {
            this->pAddr[i] = arr.pAddr[i];
        }
        return *this;
    }

    void pushBack(T &data) {
        if (this->mSize >= this->mCapacity) {//判断容器中是否有位置
            return;
        }
        //调用拷贝构造 =号操作符
        //1.对象元素必须能够被拷贝
        //2.容器都是值语义，而非引用语义 向容器中放入元素，都是放入值
        //3.如果元素的成员有指针，注意深拷贝和浅拷贝问题
        this->pAddr[this->mSize] = data;
        this->mSize++;
    }

    //T&& 对右值去引用
    void pushBack(T &&data) {
        if (this->mSize >= this->mCapacity) {//判断容器中是否有位置
            return;
        }
        this->pAddr[this->mSize] = data;
        this->mSize++;
    }

    ~MyArray() {
        if (this->pAddr != NULL) {
            delete[] this->pAddr;
        }
    }

public:
    int mCapacity;//一个可以容下多少个元素
    int mSize;//当前数组有多少元素
    T *pAddr;//保存数据的首地址
};

void test01() {
    MyArray<int> myArray(20);
    int a = 10, b = 20, c = 30, d = 40;
    myArray.pushBack(a);
    myArray.pushBack(b);
    myArray.pushBack(c);
    myArray.pushBack(d);
    //不能对右值取引用
    //左值 可以在多行使用
    //右值  零时变量 只能当前行使用
    myArray.pushBack(100);
    myArray.pushBack(200);
    myArray.pushBack(300);

    for (int i = 0; i < myArray.mSize; i++) {
        cout << myArray[i] << "  ";
    }
    cout << endl;
}


int main() {
    test01();

    return 0;
}

