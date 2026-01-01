#include <iostream>
using namespace std;
int main() {
    
    int n; cout << "N = "; cin >> n;
    for(int row = 0;row<n;row++){
        for(int col=n-row;col>0;col--){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}