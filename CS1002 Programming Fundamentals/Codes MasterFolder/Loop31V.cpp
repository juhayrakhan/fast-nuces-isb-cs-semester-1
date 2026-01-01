#include <iostream>
using namespace std;

int main() {
    
    int size; cout<< "N: "; cin >>size;
    cout << endl;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if( i==size-(2*(j-(size/2)+1))||
                i==size-(2*((size/2)-j))){
                cout << "*";
            }
            else{
                cout << "-";
            }
            
        }
        cout << endl;
    }

    return 0;
}