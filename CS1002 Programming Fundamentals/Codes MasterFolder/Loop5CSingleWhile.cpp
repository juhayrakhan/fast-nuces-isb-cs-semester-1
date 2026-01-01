#include <iostream>
using namespace std;
int main() {
    
    int n; cout << "N = "; cin >> n;
    int col = 0, temp = 1;
    while(temp<=n){
        cout << "*";
        col++;
        if (col % temp == 0){
            temp++;
            cout << endl;
            col = 0;
        }
    }
    
    
    return 0;
}