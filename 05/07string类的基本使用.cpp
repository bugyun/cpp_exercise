//
// Created by 若云 on 2018/8/23.
//

#include <iostream>
#include <string>

using namespace std;

class Test {
public:
    Test(int a, char *name) {
        this->a = a;
        this->name = name;
    }

private:
    int a;
    string name;
};

int main() {

    string s1 = "123";
    string s2 = "adc";

    cout << s1 + s2 << endl;

    return 0;
}