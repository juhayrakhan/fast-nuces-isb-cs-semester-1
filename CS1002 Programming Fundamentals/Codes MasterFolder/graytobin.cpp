#include <iostream>
using namespace std;

int toGray(int n) {
    return n ^ (n >> 1);
}

int toBinary(int n) {
    int result = n;
    while (n > 0) {
        n >>= 1;
        result ^= n;
    }
    return result;
}

int main() {
    int type, n;
    cin >> type >> n;

    if (type == 1)
        cout << toGray(n);
    else if (type == 2)
        cout << toBinary(n);

    return 0;
}