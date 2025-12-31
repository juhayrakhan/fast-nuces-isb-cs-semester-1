#include <iostream>
using namespace std;

	// Write a C++ program that takes a Decimal number (e.g., 1011) as input
	// and converts it into its decimal form. Print the decimal value.
	// Hint: 2^0 + ….+ 2^n (Decimal to decimal conversion)
	
int main() {

	int Num, Decimal;
	cout << "Input your Binary Number: ";
	cin >> Num;
	
	Decimal = Num % 10;
	Decimal = Decimal + (Num/10)%10*2;
	Decimal = Decimal + (Num/100)%10*4;
	Decimal = Decimal + (Num/1000)*8;
	
	cout << "Your Decimal Number is " << Decimal << endl; 
	
	return 0;
}
