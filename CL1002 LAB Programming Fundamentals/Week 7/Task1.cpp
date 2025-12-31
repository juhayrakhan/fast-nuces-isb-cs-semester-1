// Write Write a program to check whether a person can sit on the extreme rides in
// Joyland. The program should take input, the age and gender of the person.
// You can take M for male and F for female (Gender). If the person is male then ask whether
// his age is above 25 or below 25. If the age is below 25 then print “You can enjoy the
// rides” otherwise print “Sorry, these rides are not safe for you”.
// Also print his age in either case.If she is a female then ask whether she has health issues or
// not.You can take Y for yes and N for no (health issues). If she has health issues then print

// “Sorry, these rides are not safe for you” otherwise print “You can enjoy the rides”.
// Also print her age in either case.

#include <iostream>
using namespace std;
int main()
{
	cout << "What is your gender? F/M" << endl;
	char gender;
	int age;
	cin >> gender;
	if(gender == 'F'){
		cout << "Do you have any Health Issues?" << endl << "1 for Yes, 0 for No" << endl;
		int health;
		cin >> health;
		if(health==1)
			cout << "Sorry, these rides are not safe for you" << endl;
		else
			cout << "You can enjoy the rides." << endl;
		cout << "What is your age?" << endl;
		cin >> age;
		cout << "Age: " << age << endl;}
	else if (gender == 'M'){
		cout << "What is your age?" << endl;
		cin >> age;
		cout << (age>=25?
			"Sorry, these rides are not safe for you":
			"You can enjoy the rides.");
		cout << endl << "Age: " << age << endl;}
    return 0;
}

