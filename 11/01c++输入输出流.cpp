//
// Created by 若云 on 2018/9/6.
//
#include <iostream>

using namespace std;

void test01() {
    char ch;
    while ((ch = cin.get()) != EOF) {
        cout << ch << endl;
    }
}


void test02() {
    char ch2;
    //cin.get(ch2);//读取一个字符
    char buf[256] = {0};
    //cin.get(buf, 256);//从缓冲区读一个字符串
    cin.getline(buf, 256);//读取一行数据 不读换行符
    cout << buf;
}

//cin.ignore 忽略当前的字符
void test03() {
    char ch;
    cin.get(ch);//读取一个字符
    cout << ch << endl;
    cin.ignore();
    cin.get(ch);
    cout << ch << endl;
}

void test04() {

}

void test05() {
    int number = 10;
    //格式化输出
    cout.unsetf(ios::dec);//卸载当前默认的10进制输出方式
    cout.setf(ios::oct);//八进制输出
    cout.setf(ios::showbase);//显示多余的0
    cout << number << endl;
}

int main() {
//    cout;//全局流对象,输出数据到显示器
//    cin;
//    cerr;//标准错误，输出数据到显示器，没有缓冲区
//    clog;//标准日志，输出数据到显示器，有缓冲区
//    test01();
    test02();
    return 0;
}
