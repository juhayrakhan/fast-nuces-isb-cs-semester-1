#include <iostream>
using namespace std;
int main() {
   
    cout << "2. Print the Factorial of Input 'n'.\n\nNumber = ";
    unsigned long long int n; cin >> n;
    unsigned long long int fact = 1, temp = n;
    
    do{
        fact *= temp;
        temp -= 1;
    }while(temp >0);
    
    cout << "\n"<< n << "! = " << fact << endl;
    

    return 0;
}