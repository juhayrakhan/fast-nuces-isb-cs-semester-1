#include <iostream>
using namespace std;

int main() {
    
    int n; cout<< "N: "; cin >>n;
    for(int row=0; row<n; row++){
        char ch = 'A';
        for (int col=0; col<row;col++){
            cout << " ";
        }
        for (int col=n-row; col>0;col--){
            cout << ch++ << " ";
        }
        cout << endl;
    }
    for(int row=1; row<n; row++){
        char ch = 'A';
        for (int col=n-row-1; col>0;col--){
            cout << " ";
        }
        for (int col=0; col<=row;col++){
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}