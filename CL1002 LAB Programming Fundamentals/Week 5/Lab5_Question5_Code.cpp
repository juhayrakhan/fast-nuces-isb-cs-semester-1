#include <iostream>
#include <iomanip>
using namespace std;

	// Write a program that will compute the total sales tax on a $95
	// purchase. Assume the state sales tax is 4 percent and the county sales tax is 2
	// percent. Display each tax and the total with two decimal places of precision.
	
int main() {
	double Purchase, County, State, Total;
	cout << "Input your Purchases: "<< endl;
	cin >> Purchase;
	County = Purchase * 0.02;
	State = Purchase * 0.04;
	Total = County + State;
	cout << "Your County Sales Tax is $" << fixed << setprecision(2) << County << endl;
	cout << "Your State Sales Tax is $" << setprecision(2) << State << endl;
	cout << "Your Total Sales Tax is $" << setprecision(2) << Total << endl;
	
	return 0;
}
