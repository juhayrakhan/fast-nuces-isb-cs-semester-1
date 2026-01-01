#include <iostream>
using namespace std;

int* doSomething(int *p, int *q) {

    int *t = new int();

    *t = *p;
    *p = *q;
    *q = *t;

    return t;
}
int main() {

    int p = -10, q = 25;
    int *t = nullptr;

    t = doSomething(&p, &q);

    cout << "p=" << p << endl;
    cout << "q=" << q << endl;
    cout << "t=" << *t << endl;

    return 0;
}