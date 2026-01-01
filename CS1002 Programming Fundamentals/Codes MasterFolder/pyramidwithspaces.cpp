#include <iostream>
using namespace std;

int main() {
    
    int n; cout<< "N: "; cin >>n; char ch = 'A';
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
}