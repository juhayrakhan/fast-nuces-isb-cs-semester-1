#include <iostream>
using namespace std;

int main() {
    
    int n; cout<< "N: "; cin >>n; char ch = 'A';
    // without spaces
    for(int row=0; row<n; row++){
        for (int col=n-row-1; col>0;col--){
            cout << " ";
        }
        for (int col=0; col<2*n;col++){
            if(col<(2*row)+1){
                cout << "*";
            }
        }
        cout << endl;
    }
    // spaces pyramid;
    for(int row=0; row<n; row++){
        for (int col=0; col<n;col++){
            if(col > n-row-2 && col < n+row){
                cout << "* ";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}