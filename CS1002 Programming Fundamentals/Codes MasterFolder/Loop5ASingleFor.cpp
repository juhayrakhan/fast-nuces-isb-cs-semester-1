#include <iostream>
using namespace std;
int main() {
    
    int n; cout << "N = "; cin >> n;
    for(int row = 0,col=0;row<n;){
            if(col<=row){
                cout << "*";
                col++;
            }
            else{
                row++;
                col=0;
                cout << endl;
            }
    }
    
    for(int row = n,col=0;row>=0;){
            if(col<=row){
                cout << "*";
                col++;
            }
            else{
                row--;
                col=0;
                cout << endl;
            }
    }
    return 0;
}