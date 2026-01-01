#include <iostream>
using namespace std;
int main() {
   
    cout << "2. Print the Factorial of Input 'n'.\n\nNumber = ";
    unsigned long long int n; cin >> n;
    unsigned long long int fact = 1;
    for(int temp = n; temp >0; temp--){
        fact *= temp;
            }
    
    cout << "\n"<< n << "! = " << fact << endl;
    

    return 0;
}