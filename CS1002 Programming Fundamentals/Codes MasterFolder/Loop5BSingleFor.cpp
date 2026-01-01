#include <iostream>
using namespace std;
int main() {
    
    int n; cout << "N = "; cin >> n;
    for(int col = n;n>0;){
        cout << "*";
        col--;
        if (col % n == 0){
            n--;
            cout << endl;
            col = n;
        }
    }
    
    return 0;
}