#include <iostream>
using namespace std;
int main() {
    
    int n; cout << "N = "; cin >> n;
    for(int col = 0,temp=1;temp<=n;){
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