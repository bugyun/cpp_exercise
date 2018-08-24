//
// Created by 若云 on 2018/8/24.
//
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    Student(int id, string name) {
        this->name = name;
        this->id = id;
    }

    void printS() {
        cout << "id = " << this->id << ",name = " << this->name << endl;
    }

private:
    int id;
    string name;
};

//创建一个新的学生类，增加source 功能，通过继承
class Student2 : public Student {
public:

    Student2(int id, string name, int score) : Student(id, name) {
        this->score = score;
    }

    void printS() {
        Student::printS();
        cout << "score = " << this->score << endl;
    }

private:
    int score;
};

int main() {



    return 0;
}





