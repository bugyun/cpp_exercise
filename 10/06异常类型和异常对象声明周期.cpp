//
// Created by 若云 on 2018/9/6.
//
#include <iostream>

using namespace std;


class MyException {
public:

    MyException(const char *str) {
        cout << "MyException()" << endl;

        this->error = new char[strlen(str) + 1];
        strcpy(this->error, str);
    }

    void what() {
        cout << "未知异常！" << this->error << endl;
    }

    ~MyException() {
        cout << "~MyException()" << endl;
        if (this->error != NULL) {
            delete[] this->error;
        }
    }

    //报错： error for object 0x7fd7d44028d0: pointer being freed was not allocated
    MyException(const MyException &ex) {
        this->error = new char[strlen(ex.error) + 1];
        strcpy(this->error, ex.error);
    }


    MyException &operator=(const MyException &ex) {
        if (this->error != NULL) {
            delete[] this->error;
            this->error = NULL;
        }
        this->error = new char[strlen(ex.error) + 1];
        strcpy(this->error, ex.error);
        return *this;
    }

private:
    char *error;
};

void func() {
    throw MyException("哈哈~~");
}

void func1() {
    throw new MyException("哈哈~~");
}

void func2() {
    throw MyException("哈哈~~");
}

int main() {

    try {
        func();
    } catch (MyException e) {
        e.what();
    }
    //MyException()
    //未知异常！哈哈~~
    //~MyException()
    //~MyException()

    try {
        func1();
    } catch (MyException *e) {
        e->what();
        delete e;
    }
    //MyException()
    //未知异常！哈哈~~
    //~MyException()


    try {
        func2();
    } catch (MyException &e) {
        e.what();
    }
    //MyException()
    //未知异常！哈哈~~
    //~MyException()
    return 0;
}
