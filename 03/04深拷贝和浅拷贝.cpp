//
// Created by 若云 on 2018/8/15.
//

#include <iostream>

using namespace std;

class Teacher {

public:

    Teacher(int id, char const *name) {
        m_id = id;
        int len = strlen(name);
        m_name = (char *) malloc(len + 1);
        strcpy(m_name, name);
    }

    ~Teacher() {
        cout << "~Teacher" << endl;
        if (m_name != NULL) {
            free(m_name);
            m_name = NULL;
        }
    }

    void printT() {
        cout << "id = " << m_id << ", name = " << m_name << endl;
    }

    Teacher(const Teacher &another) {//默认方法，浅拷贝
        m_id = another.m_id;
//        m_name = another.m_name;
        //深拷贝动作
        int len = strlen(another.m_name);
        m_name = (char *) malloc(len + 1);
        strcpy(m_name, another.m_name);
    }

private:
    int m_id;
    char *m_name;
};


void test1() {
    Teacher t1(1, "zhang3");
    t1.printT();

    Teacher t2(t1);
    t2.printT();
}


int main() {

    test1();//这样使用的话 会报错，为什么呢？因为默认的拷贝方法是浅拷贝，
    // 同一个指针指向的是同一个地址空间，所以在释放的时候，t2先释放了堆，但是t1还有堆的引用。在free的时候，会报错。
    //怎么来解决? 显示提供一个拷贝的构造函数，来完成深拷贝动作


    return 0;
}


