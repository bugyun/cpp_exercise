#include <iostream>


int main() {
    using namespace std;
    using std::cout;
    using std::endl;
    cout << "Hello, World!" << endl;
    return 0;
}

struct Student {
    char name[100];
    int age;
};

int test() {
    Student s1 = {"wang", 1};
    Student s2 = {"ni", 2};
    return 0;
}