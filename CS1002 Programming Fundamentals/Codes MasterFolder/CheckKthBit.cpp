#include <iostream>
using namespace std;

bool checkKthBit(int& n, int k){
    bool bit= (n>>k)&1;
    return bit;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    if(checkKthBit(n,k)) cout <<"Yes";
    else cout << "No";

    return 0;
}