//
// Created by 若云 on 2018/8/13.
//

/**
 * 重载规则
 * 1,函数名相同。
 * 2,参数个数不同,参数的类型不同,参数顺序不同,均可构成重载。
 * 3,返回值类型不同则不可以构成重载。
 */
void func(int a); //ok
void func(char a); //ok
void func(char a,int b); //ok
void func(int a, char b); //ok
char func(int a); //与第⼀一个函数有冲突



/**
 *  重载底层实现(name mangling)
    C++利用 name mangling(倾轧)技术,来改名函数名,区分参数不同的同 名函数。
    实现原理:用 v c i f l d 表示 void char int float long double 及其引 用。
 */

void func(char a);                  // func_c(char a)
void func(char a, int b, double c); //func_cid(char a, int b, double c)


