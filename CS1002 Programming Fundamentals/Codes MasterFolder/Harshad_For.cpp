#include <iostream>
using namespace std;

// Write a program that determines whether an input number is a Harshad number (for number base 10).
// A Harshad number “is an integer that is divisible by the sum of its digits”

int main(){

    int n; cout << "N = "; cin >> n;
    int har=0;

    int l = 0; int t=n;
    while (t > 0){
        t /= 10; l++;
    }
    t=n;
    for(int i=0;i<l;i++){
        int p = l - i - 1; int x;
        for (int j = 0; j <= p; j++){
            x = t % 10;
            t /= 10;
        }
        har+=x;
    }

    if(n%har==0) cout << "Harshad!";
    else cout << "No";

    return 0;
}