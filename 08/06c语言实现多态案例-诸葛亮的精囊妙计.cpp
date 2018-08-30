//
// Created by 若云 on 2018/8/30.
//
#include <iostream>

using namespace std;

//-------------抽象层-----------------
//定义拆开锦囊方法的类型
typedef void(TIPS)(void);

//定义锦囊
struct tip {
    char from[64];//谁写的
    char to[64];//写个谁的
    //锦囊的内容
    TIPS *tp;//相当于抽象类 纯虚函数
};

//需要一个打开锦囊的架构函数
void open_tips(struct tip *tip_p) {
    cout << "打开锦囊" << endl;
    cout << "此锦囊是由" << endl;
    cout << "内容是" << endl;
    tip_p->tp();//此时就发生了多态的现象。
}

//提供一个创建一个锦囊的方法
struct tip *create_tip(char *from, char *to, TIPS *tp) {
    struct tip *temp = (struct tip *) malloc(sizeof(struct tip));
    if (temp == NULL) {
        return NULL;
    }
    strcpy(temp->from, from);
    strcpy(temp->to, to);
    //给一个回调函数赋值，一般称 注册回调函数
    temp->tp = tp;
}

void destory_tip(struct tip *tip_p) {


}

//---------------实现层-----------------
void tip1_func(void) {
    cout << "锦囊一" << endl;
}

void tip2_func(void) {
    cout << "锦囊二" << endl;
}

void tip3_func(void) {
    cout << "锦囊三" << endl;
}

int main() {
//创建3个锦囊
    struct tip *tip1 = create_tip("孔明", "赵云", tip1_func);
    struct tip *tip2 = create_tip("孔明", "赵云", tip2_func);
    struct tip *tip3 = create_tip("孔明", "赵云", tip3_func);
    //由赵云进行拆锦囊
    open_tips(tip1);

    open_tips(tip2);

    open_tips(tip3);

    destory_tip(tip1);
    destory_tip(tip2);
    destory_tip(tip3);
    return 0;
}

/**
 * 由于c语言没有面向对象
 * 所以，在写代码的时候没有封装继承多态。
 * 只能有指针来模拟多态。
 */

