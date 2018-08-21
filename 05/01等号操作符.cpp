//
// Created by 若云 on 2018/8/21.
//
#include <iostream>

using namespace std;


class Student {

public:

    Student() {
        this->id = 0;
        this->name = NULL;
    }

    Student(int id, const char *name) {
        this->id = id;
        int len = strlen(name);
        this->name = new char[len + 1];
        strcpy(this->name, name);
    }

    Student(const Student &another) {
        this->id = another.id;
        int len = strlen(another.name);
        this->name = new char[len + 1];
        strcpy(this->name, another.name);
    }

    ~Student() {
        if (this->name != NULL) {
            delete[] this->name;
            this->id = 0;
            this->name = NULL;
        }
    }


    void printS() {
        cout << id << "  " << name << endl;
    }

    Student &operator=(const Student &another) {
        if (this == &another) {//防止自身赋值
            return *this;
        }
        //先将自身的额外开辟的空间回收掉
        if (this->name != NULL) {
            delete[] this->name;
            this->id = 0;
            this->name = NULL;
        }
        //执行深拷贝
        this->id = another.id;
        int len = strlen(another.name);
        this->name = new char[len + 1];
        strcpy(this->name, another.name);
        return *this;
    }

private:
    int id;
    char *name;
};


int main() {
    Student s1(1, "zhang3");

    s1.printS();
    Student s2 = s1;
    s2.printS();

    s2 = s2;

    Student s3(2, "lisi8");

    s2 = s3;//s2 = 赋值操作

    s2.printS();

    return 0;
}






