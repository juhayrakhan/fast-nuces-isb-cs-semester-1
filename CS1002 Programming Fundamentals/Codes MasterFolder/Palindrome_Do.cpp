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

int main(){

    int n; cout << "N = "; cin >> n;
    bool isPal=true; int i=0;

    do{
        if(digit(n,i)!=digit(n,len(n)-i-1))
            isPal=false;
        i++;
    } while(i<=len(n)/2);

    if(isPal) cout << "Palindrome";
    else cout << "No";

    return 0;
}