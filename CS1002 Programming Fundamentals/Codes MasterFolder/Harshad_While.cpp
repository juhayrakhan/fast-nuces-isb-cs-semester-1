#include <iostream>
using namespace std;

// Write a program that determines whether an input number is a Harshad number (for number base 10).
// A Harshad number “is an integer that is divisible by the sum of its digits”

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

int main(){

    int n; cout << "N = "; cin >> n;
    int har=0;
    for(int i=0;i<len(n);i++){
        har+=digit(n,i);
    }

    if(n%har==0) cout << "Harshad!";
    else cout << "No";

    return 0;
}