//
// Created by 若云 on 2018/8/9.
//
enum season {
    SPR = 0,
    SUM,
    AUT,
    WIN
};

int main() {
    season s = season::SUM;
    if (s == SUM) {

    }
    return 0;
}
/**
 * c 语言中枚举本质就是整型,枚举变量可以用任意整型赋值。
 * 而 c++中枚举变量, 只能用被枚举出来的元素初始化。
 */


