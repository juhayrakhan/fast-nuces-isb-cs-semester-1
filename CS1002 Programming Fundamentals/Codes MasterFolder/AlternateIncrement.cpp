#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int size; cout<< "N: "; cin >>size;
    cout << endl;
    for (int i=0; i<=size; i++){
        for (int j=0; j<=size; j++){
            if(i>j){
                cout << "   ";
            }
            if (i<j){
                cout <<setw(3) <<(2*(j)-1)+i;
            }
        }
        cout << endl;
    }

    return 0;
}