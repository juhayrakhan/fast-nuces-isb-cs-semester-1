#include <iostream>
using namespace std;
int main() {
   
    cout << "1. Check if n is a Harshad number.\nA Harshad number is an integer that is divisible by the sum of its digits\n\nNumber = ";
    int n; cin >> n;
    int sum = 0, temp = n;
    while (temp >0){
        sum += temp%10;
        temp /= 10;
            }
    cout << "Sum of Digits = " << sum << endl;
    cout << n << " % " << sum << " = " << n%sum << endl;
    if (n%sum==0){cout << "\nNumber is a Harshad Number!\n";}
    else{cout << "\nNumber is not a Harshad Number!\n";}
    

    return 0;
}