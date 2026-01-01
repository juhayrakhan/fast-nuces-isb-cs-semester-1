#include<iostream>
using namespace std;

int main() {
    
    int n; cout<<"N = "; cin>>n;
    
    for(int row = 0; row < n; row++) {
        int value = 1;
        for(int col = 0; col <= row; col++) {
            cout << value << " ";
            value = value * (row - col) / (col + 1);
        }
        cout << endl;
    }
    
    return 0;
}