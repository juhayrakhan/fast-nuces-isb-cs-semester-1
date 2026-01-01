#include <iostream>
using namespace std;

int main() {
    
    int size; cout<< "N: "; cin >>size;
    cout << endl;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if(i==size/2    &&(
            j>=size/3     &&
            j<=2*size/3   )){
                cout << "*";
                continue;
            }
            
            if( i==2*(j-(size/2))||
                i==2*((size/2)-j)){
                cout << "*";
            }
            else{
                cout << " ";
            }
            
        }
        cout << endl;
    }

    return 0;
}