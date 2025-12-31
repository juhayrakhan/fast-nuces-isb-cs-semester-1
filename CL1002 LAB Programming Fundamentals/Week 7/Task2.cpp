// Write a program that takes input a character from the user and tells whether it is a
// digit or alphabet. If the user enters any character other than digit or alphabet then the
// program should give error “Invalid Input”. The program should cater for both uppercase
// and lowercase letters.
// Note: You are allowed to use switch-case only

#include <iostream>
using namespace std;
int main()
{
	char input;
	cout << "Enter a Character: ";
	cin >> input;
	switch(input){
		case 'A' ... 'Z': case 'a' ... 'z':
			cout << "Alphabet" << endl;
			break;
		case '0' ... '9':
			cout << "Digit" << endl;
			break;
		default:
			cout << "Invalid Output" << endl;}
	return 0;
}
