//
// Created by 若云 on 2018/8/9.
//

#include <iostream>

//自定义一个命名空间
namespace spaceA {
    int g_a = 10;
}

using namespace std;

int main(void) {

    cout << spaceA::g_a << endl();

    return 0;
}

//---------------------

/**
 * 1.引入的时候要注意引入全路径
 */
namespace spaceB {
    int a = 20;
    namespace spaceC {
        struct Teacher {
            int id;
            char name[64];
        };
    }

    namespace spaceD {
        struct Teacher {
            int id;
            char name[64];
        };
    }
}


void method1() {
    //1.直接使用
    spaceB::spaceC::Teacher t1;
    //2.命名空间
    using spaceB::spaceC::Teacher;
    Teacher t2;
    //3.
    using namespace spaceB::spaceC::Teacher;
    Teacher t3;

    t3.id = 12;
    t3.name = {"zhang"};
}