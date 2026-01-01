#include <iostream>
using namespace std;
int main() {
   
    cout << "3. Find all numbers divisible by 7 and 5,\n   between n1 and n2 (inclusive).\n\n";
    int n1, n2; cout << "Number 1 = "; cin >> n1;
    cout << "Number 2 = "; cin >> n2; cout << endl;
    
    for(; n2>=n1; n2--){
        if(n2%5==0 || n2%7==0){
            cout << n2 << endl;
        }
    }

    return 0;
}