//
// Created by 若云 on 2018/9/10.
//
#include <iostream>
#include <string>

using namespace std;


/**
 * template <class T1,class T2> struct pair.
 */

void test() {
    pair<string, int> pair(string("name", 20));
    cout << pair.first << endl;
    cout << pair.second << endl;

    pair<string, int> pair1 = make_pair("name", 20);

}
