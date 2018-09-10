//
// Created by 若云 on 2018/9/8.
//
#include <iostream>
#include <string>

using namespace std;

void test01() {
    string s1;
    string s2(10, 'a');
    string s3("abcdef");
    string s4(s3);

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
}

void test02() {

    string s1;
    string s2("app");
    s1 = "sdsds";
    cout << s1 << endl;
    s1 = s2;
    cout << s1 << endl;
    s1 = 'a';
    cout << s1 << endl;
    s1.assign("jkl");
    cout << s1 << endl;
}

//取值操作
void test03() {
    string s1 = "asdfghjkl";
    //重载[]操作符
    for (int i = 0; i < s1.size(); ++i) {
        cout << s1[i] << " ";
    }
    cout << endl;

    //at成员函数
    for (int j = 0; j < s1.size(); ++j) {
        cout << s1.at(j) << " ";
    }
    cout << endl;
    //区别：[]方式 如果访问越界，直接挂了
    //at 方式 访问越界 抛异常out_of_range
}

//拼接操作
void test04() {
    string s = "adbc";
    string s2 = "111";
    s += "adbc";
    cout << s << endl;

    s += s2;
    cout << s2 << endl;

    string s3 = "2222";

    s2.append(s3);
    cout << s2 << endl;

    string s4 = s2 + s3;
    cout << s4 << endl;
}

void test05() {
    string s = "adsdsd";
    int pos = s.find("sd");
    cout << "pos : " << pos << endl;
}

void test06(){
//    compare 比较
//replace   替换
// substr  截取
// insert 插入
// erase 删除
//
}


int main() {
//    test01();
//    test02();
//    test03();

    test04();
    return 0;
}
