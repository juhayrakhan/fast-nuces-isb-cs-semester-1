#include <iostream>
using namespace std;
int main()
{
	cout << "\nMAIN MENU:\n1. Student Fee Calculation\n2. Faculty Salary Bonus\n3. Event Ticket Booking\n4. Exit\n\nOption Chosen: ";
	int input;
	cin >> input;
	switch(input){
		case 1:
			char course;
			int credits;
			double amount;
			cout << "What is Your Course? U/P (Undergraduate/Postgraduate): ";
			cin >> course;
			cout << "What are your Credit Hours? ";
			cin >> credits;
			switch(course){
				case 'U':
					amount = credits*2000;
					break;
				case 'P':
					amount = credits*3000;}
			amount = (credits>20?amount*0.9:amount);
			cout << "Your Fee is " << amount << endl;
			break;
		case 2:
			int type, years;
			double salary;
			cout << "\nWhat is Your Faculty Position?\n1. Professor\n2. Assistant Professor\n3. Lecturer\n\nOption Chosen: ";
			cin >> type;
			switch(type){
				case 1: salary = 100000;break;
				case 2: salary = 70000;break;
				case 3: salary = 50000;break;}
			cout << "\n What are your Years of Service? ";
			cin >> years;
			salary = (years>=10? salary*1.2: (years>=5?salary*1.1:salary*1.05));
			cout << "Salary: " << salary << endl;
			break;
		case 3:
			int age;
			double price;
			price = 500.0;
			cout << "What is your Age? ";
			cin >> age;
			price = (age<12?price*0.5:(age>=60?price*0.7:price));
			cout << "Final Ticket Price: " << price << endl;
			break;
		case 4:
			cout << "Exiting...\n...\n";}
	return 0;
}
