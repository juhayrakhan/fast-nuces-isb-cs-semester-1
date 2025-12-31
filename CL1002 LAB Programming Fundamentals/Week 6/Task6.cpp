//Write a C++ program to check the strength of a password.

//It take 3 inputs from user:
	// password length = <number>;
	// contains upper case = y/n
	// contains digit = y/n

//The program should display a message according to the following conditions:
	// If length is greater than or equal to 8 and conatins uppercase and contains digit : Strong
	// If length is greater than or equal to 8 and contains either an uppercase letter or a digit, or the length is greater than 15: Medium
	// Else : Weak

// Note: You can use at most three conditional branches.

# include <iostream>
using namespace std;
int main(){
    
    int length;
    char uppercase, digit;
    
    cout << "Length of Password: ";
    cin >> length ;
    cout << "Contains Uppercase? (y/n) ";
    cin >> uppercase;
    cout << "Contains Digit? (y/n) ";
    cin >> digit;
    
    if(length>=8 && uppercase=='y' && digit=='y'){
    	cout << "Password is Strong";}
    else if(length>15 || (length>=8 && (uppercase=='y' || digit=='y'))){
    	cout << "Password Medium";}
    else{
    	cout << "Password Weak";}
    cout << endl;
return 0;
}
