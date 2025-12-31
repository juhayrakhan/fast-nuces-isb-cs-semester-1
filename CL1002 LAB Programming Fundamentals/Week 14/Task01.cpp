#include <iostream>
using namespace std;

int power(int base, int exponent);

int main() {
    int base; cout << "Base: "; cin >> base;
    int exponent; cout << "Exponent: "; cin >> exponent;
    int val = power(base, exponent);
    cout << "Final Number: " << val << endl;
    return 0;
}

int power(int base, int exponent){
    if (exponent == 0) return 1;
    int val = power(base, exponent - 1);
    return base * val;
}
