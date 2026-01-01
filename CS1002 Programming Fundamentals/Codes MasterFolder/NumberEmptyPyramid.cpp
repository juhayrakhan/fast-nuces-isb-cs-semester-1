#include <iostream>
using namespace std;
int main() {

   int n; cout << "N = "; cin >> n;

   int eq=n/2;

   for(int row=0; row<n/2+n%2; row++)
       for (int col = 0; col<n; col++)

           if (col<=n-1-row-eq||col>=row+eq)
               cout << col+1 << " ";

           else cout << "  ";

       cout << endl;
    
    return 0;
}