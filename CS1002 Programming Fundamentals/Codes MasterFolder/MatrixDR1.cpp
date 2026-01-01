#include <iostream>
using namespace std;

// this won't show any error in mingw64 and vscode
// however on programiz it says 'floating point exception'

int main(){ 

    int a=0, b = 2; 
    int x[5] = { 1, 2, 3, 4, 5 }; 
    a = 5 * 4 + x[--b] - (9 / b); 
    cout << a;
    
return 0;
}
