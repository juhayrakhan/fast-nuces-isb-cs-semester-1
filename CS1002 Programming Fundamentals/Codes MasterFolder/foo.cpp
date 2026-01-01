#include <iostream>
using namespace std;

void foo(float** ptr) {
    *ptr = new float;
    **ptr = 3.14f;
    cout << "Value from foo: " << **ptr << endl;
}
void foo2(float* ptr) {
    if (ptr) {
        (*ptr)++;
    }
    cout << "Value from foo2: " << (*ptr)++ << endl;
}
int main() {
float* myFloat;
foo(&myFloat);
if (myFloat) {
cout << "Value from main: " << *myFloat << endl;
}
foo2(myFloat);
cout << "Value from main: " << *myFloat << endl;
delete myFloat;
return 0;
}