//
// Created by 若云 on 2018/9/6.
//
#include <iostream>
#include <exception>

using namespace std;


class MyOutOfRange : public exception {

public:

    MyOutOfRange(const char *error) _NOEXCEPT {
        this->error = new char[strlen(error) + 1];
        strcpy(this->error, error);
    }

    virtual ~MyOutOfRange() _NOEXCEPT{
        if (this->error != NULL) {
            delete[] error;
        }
    }

    virtual const char *what() const _NOEXCEPT{
        return this->error;
    }

private:
    char *error;
};


int main() {

    try {
        throw MyOutOfRange("发生错误了");
    } catch (MyOutOfRange &e) {
        cout << e.what() << endl;
    }


    return 0;
}
