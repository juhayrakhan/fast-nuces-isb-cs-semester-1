#include <iostream>
using namespace std;

void CountBits(int n){
    int count=0;
    while(n>0){
        if(n&1) count++;
        n>>=1;
    }
    cout << count;
}

int main() {
    int n;
    cin >> n;
    
    CountBits(n);
    
    return 0;
}