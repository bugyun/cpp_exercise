//
// Created by 若云 on 2018/8/9.
//
int main(void) {
    int a, b;
    int &r = a;
    int &r = b; //错误,不可更改原有的引⽤用关系
    float &rr = b; //错误,引⽤用类型不匹配 cout<<&a<<&r<<endl;
    // 变量与引⽤用具有相>同的地址。
    int &ra = r; //可对引⽤用更次引⽤用,表⽰示 a 变量有两个别名,分别是 r 和 ra
    return 0;
}


/**
 * 别名相当远 [type] *const a;
 * int a=10;
 * int &r = a;
 * r 就相当于   int *const a;
 *
 * 1)引用在C++中的内部实现是一个常指针
 *      Type& name <===> Type* const name
 */

