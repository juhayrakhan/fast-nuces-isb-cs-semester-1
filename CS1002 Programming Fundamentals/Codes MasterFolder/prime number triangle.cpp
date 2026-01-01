#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    
    int size; cout<< "N: "; cin >>size;
    int last=0;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if (i>=j){
                for (int k = last+1;;k++){
                    int check = 1;
                    switch(k){
                        case 1: check = 0; break;
                        case 2: check = 1; break;
                        default:
                        if (k % 2 == 0){check = 0;}
                        else{
                        for(int l = 3; l <= sqrt(k); l += 2){
                            if (k % l == 0){check=0;}
                        }}
                    }
                    if(check){
                        cout << setw(3)<< k;
                        last = k;
                        break;
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}