#include <iostream>
using namespace std;

// Develop a C++ program to convert a given floating-point number representing a
// currency value in rupees into its English phrase representation.
// Your program should handle values up to one lac (100,000).
// Following are the guidelines for implementing the currency conversion in C++:
// Accept a non-negative floating-point number as input.
// If more than 2 decimal places then round off to two decimal places.
// For examplerepresent 12345.67 as
// "twelve thousand three hundred forty-five Rupees and sixty-seven Paisa."

void checkLac(float n){
    if(n==100000.0f){
        cout << "One Lac "; return;
    }
}

void check10to19(int n){
    switch(n){
        case 0: cout << "Ten "; break;
        case 1: cout << "Eleven "; break;
        case 2: cout << "Twelve "; break;
        case 3: cout << "Thirteen "; break;
        case 4: cout << "Fourteen "; break;
        case 5: cout << "Fifteen "; break;
        case 6: cout << "Sixteen "; break;
        case 7: cout << "Seventeen "; break;
        case 8: cout << "Eighteen "; break;
        case 9: cout << "Nineteen ";
    }
}

void check0to1(int n){
    switch(n){
            case 0: break;
            case 1: cout << "One ";
    }
}

void check2to9(int n){
    if(n<=1) return;
    switch(n){
        case 2: cout << "Two "; break;
        case 3: cout << "Three "; break;
        case 4: cout << "Four "; break;
        case 5: cout << "Five "; break;
        case 6: cout << "Six "; break;
        case 7: cout << "Seven "; break;
        case 8: cout << "Eight "; break;
        case 9: cout << "Nine ";
    }
}

int main(){ 

    float n; cout << "N = "; cin >> n;
    checkLac(n);
    int temp = n/10000;
    if(temp%10!=0){
        temp = n/1000;
        switch((int(n)/10000)%10){
        case 1:
            check10to19(temp%10); break;
        case 2:
            cout << "Twenty "; check0to1(temp%10); check2to9(temp%10); break;
        case 3:
            cout << "Thirty "; check0to1(temp%10); check2to9(temp%10); break;
        case 4:
            cout << "Forty "; check0to1(temp%10); check2to9(temp%10); break;
        case 5:
            cout << "Fifty "; check0to1(temp%10); check2to9(temp%10); break;
        case 6:
            cout << "Sixty "; check0to1(temp%10); check2to9(temp%10);  break;
        case 7:
            cout << "Seventy "; check0to1(temp%10); check2to9(temp%10); break;
        case 8:
            cout << "Eighty "; check0to1(temp%10); check2to9(temp%10); break;
        case 9:
            cout << "Ninety "; check0to1(temp%10); check2to9(temp%10);
        }
        cout << "Thousand ";
    }
    temp = n/100;
    if(temp%10!=0){
        check0to1(temp%10);
        check2to9(temp%10);
        cout << "Hundred ";
    }
    temp = n/10;
    if(temp%10!=0){
        cout << "And ";
        temp = n;
        switch((int(n)/10)%10){
        case 1:
            check10to19(temp%10); break;
        case 2:
            cout << "Twenty "; check0to1(temp%10); check2to9(temp%10); break;
        case 3:
            cout << "Thirty "; check0to1(temp%10); check2to9(temp%10); break;
        case 4:
            cout << "Forty "; check0to1(temp%10); check2to9(temp%10); break;
        case 5:
            cout << "Fifty "; check0to1(temp%10); check2to9(temp%10); break;
        case 6:
            cout << "Sixty "; check0to1(temp%10); check2to9(temp%10);  break;
        case 7:
            cout << "Seventy "; check0to1(temp%10); check2to9(temp%10); break;
        case 8:
            cout << "Eighty "; check0to1(temp%10); check2to9(temp%10); break;
        case 9:
            cout << "Ninety "; check0to1(temp%10); check2to9(temp%10);
        }
    }
    temp=n;
    check0to1(temp%10); check2to9(temp%10);
    if(n!=0)cout << "Rupees";
    temp/=100000;
    if(temp<1.0f&&temp>0.0f){
        cout << " and ";
        n*=100;
        temp=n/10;
        if(temp%10!=0){
            cout << "And ";
            temp = n;
            switch((int(n)/10)%10){
            case 0:
                cout << "and "; check0to1(temp%10); check2to9(temp%10); break;
            case 1:
                check10to19(temp%10); break;
            case 2:
                cout << "Twenty "; check0to1(temp%10); check2to9(temp%10); break;
            case 3:
                cout << "Thirty "; check0to1(temp%10); check2to9(temp%10); break;
            case 4:
                cout << "Forty "; check0to1(temp%10); check2to9(temp%10); break;
            case 5:
                cout << "Fifty "; check0to1(temp%10); check2to9(temp%10); break;
            case 6:
                cout << "Sixty "; check0to1(temp%10); check2to9(temp%10);  break;
            case 7:
                cout << "Seventy "; check0to1(temp%10); check2to9(temp%10); break;
            case 8:
                cout << "Eighty "; check0to1(temp%10); check2to9(temp%10); break;
            case 9:
                cout << "Ninety "; check0to1(temp%10); check2to9(temp%10);
            }
        }       
        cout << "Paisa." << endl;
    }
    else if(n!=0) cout << "." << endl;
return 0;
}
