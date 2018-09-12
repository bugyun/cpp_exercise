//
// Created by 若云 on 2018/9/12.
//
#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

class Worker {
public:
    string name;
    string tele;
    int age;
    int salary;
};


void test() {
    vector<Worker> vWorker;
    multimap<int, Worker> workerGroup;
    //创建员工
    create_worker(vWorker);
    //员工分组
    worker_by_group(vWorker, workerGroup);
}

//创建员工
void create_worker(vector<Worker> &vWorker) {
    string seedName = "ABCDE";
    for (int i = 0; i < 5; i++) {
        Worker worker;
        worker.name = "员工";
        worker.name += seedName[i];

        worker.age = rand() % 10 + 20;
        worker.tele = "010-88888888";
        worker.salary = rand() % 10000 + 10000;
        vWorker.push_back(worker);
    }
}

//员工分组
void worker_by_group(vector<Worker> &vWorker, multimap<int, Worker> &workerGroup) {


}

int main() {


    return 0;
}
