//
// Created by 若云 on 2018/9/12.
//
/**
 * 谓词是指普通函数或重载的operator()返回值是bool类型的函数对象（仿函数）。如果operator接受一个参数，那么叫做一元谓词，如果接受两个参数，
 * 那么叫做二元谓词，谓词可以作为一个判断式。
 *
 *
 */

#include <iostream>

using namespace std;

struct myfunc {
    bool operator()(int v) {}
};