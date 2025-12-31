#include <iostream>
using namespace std;

	// Write a program that reads an integer and prints its first 10 multiples
	// Example Intput: Enter a number: 5
	// Example Output: First 10 multiples:
	// 5,10,15,20,25,30,35,40,45,50
	
int main() {
	int Num;
	cout << "Input an integer: ";
	cin >> Num;
	cout << "First 10 Multiples of your Number: " << endl;
	cout << Num << ", " << Num*2 << ", " << Num*3 << ", " << Num*4 << ", " << Num*5 << ", ";
	cout << Num*6 << ", "<< Num*7 << ", "<< Num*8 << "," << Num*9 << ", "<< Num*10 << ","<< endl; 
}
