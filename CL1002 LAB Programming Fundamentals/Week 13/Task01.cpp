#include <iostream>
using namespace std;

void Calculate_Payment(char scale, int days, int &Full, int &FullTotal);
void Calculate_Payment(int scale,int days, int hours, int &Daily, int &DailyTotal);
void Calculate_Payment(int hours, int scale, int &Hourly, int &HourlyTotal);

int main(){
	int Full=0, Daily=0, Hourly=0, FullTotal=0, DailyTotal=0, HourlyTotal=0;
	char type='\0';
	while(type!='0'){
		cout << "Enter Employee Type:\nF: Full Time    D:Daily    H:Hourly    0:Exit\n";
		cin >> type;
		switch(type){ default: cout << "Invalid Input"; return 0;
		case '0': break;
		case 'F': 
			char payscale; int days, months;
			cout << "Pay Scale in $ per day:     A:1000    B:2000    C:3000    D:4000:\n"; cin >> payscale;
			cout << "Number of Days worked in Month: "; cin >> days;
			Calculate_Payment(payscale,days,Full,FullTotal);
		break;
		case 'D': int scale, hours;
			cout << "Number of Days worked in Month: "; cin >> days;
			cout << "Number of Hours worked per Day: "; cin >> hours;
			cout << "Wage Payscale per Hour: "; cin >> scale;
			Calculate_Payment(days,hours,scale,Daily,DailyTotal);
		break;
		case 'H':
			cout << "Number of Hours worked in Month: "; cin >> hours;
			cout << "Wage Payscale per Hour: "; cin >> scale;
			Calculate_Payment(hours,scale, Hourly, HourlyTotal);
		break;
		}
	}
	cout << "Full Time Employees: " << Full << "    Total Payment: " << FullTotal << endl;
	cout << "Daily Employees: " << Daily << "    Total Payment: " <<  DailyTotal << endl;
	cout << "Hourly Employees: " << Hourly << "    Total Payment: " << HourlyTotal << endl << endl;
	return 0;
}

void Calculate_Payment(char scale, int days, int &Full, int &FullTotal){ // Full Time
	int payment;
	switch(scale){ default: cout << "Invalid Input!\n"; return;
	case 'A': payment = 1000*days; break;
	case 'B': payment = 2000*days; break;
	case 'C': payment = 3000*days; break;
	case 'D': payment = 4000*days; break;
	}
	Full++; FullTotal += payment;
}

void Calculate_Payment(int scale,int days, int hours, int &Daily, int &DailyTotal){ // Daily
	int payment;
	payment = days*hours*scale;
	Daily++; DailyTotal += payment;
}

void Calculate_Payment(int hours, int scale, int &Hourly, int &HourlyTotal){ // Hourly
	int payment;
	payment = hours*scale;
	Hourly++; HourlyTotal += payment;
}
