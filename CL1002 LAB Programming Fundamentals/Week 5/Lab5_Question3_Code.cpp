#include <iostream>
using namespace std;

	// Take a person’s age in years and calculate:
	// 1. Equivalent age in months.
	// 2. Equivalent age in days.
	// 3. Equivalent age in hours.
	// Hint: Assume 1 year = 365 days
	
int main() {
	
	int Age, Month, Year, Day, Hour;
	cout << "Input Your Age: ";
	cin >> Age;
	Month = Age * 12;
	Day = Age * 365;
	Hour = Day * 24;
	cout << "Your Age in Months: " << Month << endl;
	cout << "Your Age in Days: " << Day << endl;
	cout << "Your Age in Hours: " << Hour << endl;
	return 0;
	}
