#include <iostream>
using namespace std;
int main() {
   
   int n; cout << "N = "; cin >> n;
   for(int row=0; row<n; row++){
       for(int col=0; col<row+1; col++){
           cout << col+row+1<< " ";
       }
       for(int col=n-row-1; col>0; col--){
           cout << col << " ";
       }
       cout << endl;
   }
   
    return 0;
}