#include <iostream>
using namespace std;

int len(int n){
    int l = 0;
    while (n > 0){
        n /= 10; l++;
    }
    return l;
}

int digit(int n, int p){
    
    int l = len(n);
    p = l - p - 1;

    int x;
    for (int i = 0; i <= p; i++){
        x = n % 10;
        n /= 10;
    }
    return x;
}

bool pal(int n, int p){
    int l = len(n);
    if (p >= l/2) return true;

    if (digit(n, p) == digit(n, l - p - 1))
        return pal(n, p + 1);

    return false;
}

int main(){
    int n; cout << "N = "; cin >> n;

    if (pal(n, 0)) cout << "Palindrome";
    else cout << "No";

    return 0;
}