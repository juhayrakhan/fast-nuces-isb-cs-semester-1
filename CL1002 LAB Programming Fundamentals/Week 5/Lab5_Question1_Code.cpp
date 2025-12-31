#include <iostream>
using namespace std;
	// Write a program takes three numbers as input and apply arithmetic
        // operations of Addition, Subtraction, Multiplication, Division and Modulus
        // on those two numbers. 

int main() {

	int num_1,num_2,num_3;
        
	cout << "Input number 1: " ;
	cin >> num_1;	
	cout << "Input number 3: " ;
	cin >> num_2;	
	cout << "Input number 2: " ;
	cin >> num_3;	
	
	int Add = num_1+num_2+num_3;
	int Subtract = num_1-num_2-num_3;
	int Multiply = num_1*num_2*num_3;
	double Divide = static_cast<double>(num_1)/num_2/num_3;
	int Modulus = num_1%num_2%num_3;
	
	cout << "Addition: " << Add << endl;
	cout << "Subtraction: " << Subtract << endl;
	cout << "Multiplication: " << Multiply << endl;
	cout << "Division: " << Divide << endl;
	cout << "Modulus/Remainder: " << Modulus<< endl;
	
	return 0;
	}
	
	
