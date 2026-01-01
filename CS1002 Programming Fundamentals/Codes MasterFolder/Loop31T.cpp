#include <iostream>
using namespace std;

int main() {
    
    int size; cout<< "N: "; cin >>size;
    cout << endl;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if( i==0){
                    cout << "*";
                    continue;
            }
            if(j==size/2){
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