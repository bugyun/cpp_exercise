//
// Created by 若云 on 2018/8/13.
//
#include <iostream>

using namespace std;

struct teacher {
    int id;
    char name[64];
};

//指针来进行开发
int get_mem(struct teacher **tpp) {
    teacher *tp = NULL;
    tp = (teacher *) malloc(sizeof(teacher));
    if (tp == NULL) {
        return -1;
    }
    tp->id = 100;
    strcpy(tp->name, "lili");
    *tpp = tp;
    return 0;
}

void free_teacher(teacher **tpp) {
    if (tpp == NULL) {
        return;
    }
    teacher *tp = *tpp;
    if (tp != NULL) {
        free(tp);
        *tpp = NULL;
    }
}

int pointTest() {
    teacher *tp = NULL;
    //使用指针来进行开发
    get_mem(&tp);
    cout << "id=" << tp->id << ",name = " << tp->name << endl;    //id=100,name = lili
    free_teacher(&tp);
    return 0;
}

//通过引用来进行开发
int get_mem_quote(teacher *&tp) {
    tp = (teacher *) malloc(sizeof(teacher));
    if (tp == NULL) {
        return -1;
    }
    tp->id = 300;
    strcpy(tp->name, "wang5");
    return 0;
}


void free_teacher_quote(teacher *&tp) {
    if (tp == NULL) {
        return;
    }
    free(tp);
    tp = NULL;
}

void quoteTest() {
    teacher *tp = NULL;
    get_mem_quote(tp);
    cout << "id=" << tp->id << ",name = " << tp->name << endl;    //id=300,name = wang5
    free_teacher_quote(tp);
}


int main(void) {
    pointTest();//使用指针传递参数
    quoteTest();//使用引用传递参数
    return 0;
}

