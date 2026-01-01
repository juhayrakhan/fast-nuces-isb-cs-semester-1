#include <iostream>
using namespace std;
int main() {
   
   // constraint: only even numbers
   int n; cout << "N = "; cin >> n; int eq=n/2;
   for(int row=0; row<n; row++){
       if(row==0||row==n-1){
           for(int col=0; col<n-1; col++){
               cout << "*";
           }
       }
       else {
           for(int col=0;col<n-1;col++){
            if(col==n/2-1){
                cout << "|";}
            else if(row==col+(eq)){cout << "\\";}
            else if(col==row+eq-1){cout << "\\";}
            else if(col==n-1-(row+eq)){cout << "/";}
            else if(row==n-col+eq-2){cout << "/";}
            else{cout<< " ";}
            }    
       }
       cout << endl;
   }
   
    return 0;
}