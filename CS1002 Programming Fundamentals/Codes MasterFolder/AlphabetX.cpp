#include <iostream>
using namespace std;

int main() {
    
    int n; cout<< "N: "; cin >>n; char ch = 'A';
    for(int row=0; row<n; row++){
        for (int col=0; col<n;col++){
            if(col==row||col==n-row-1){
                cout << static_cast<char>(ch+row)<< " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}