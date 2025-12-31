#include <iostream>
using namespace std;

int main(){

	int n, rows, stars, spaces; cout << "Enter Any Number: "; cin >> n;
	rows = n;
	cout << endl;
	for (rows; rows>0; rows--){
		stars = rows;
		for (stars; stars>0;stars--){
			cout << "*";
	    	}
	    	spaces = n - rows;
	    	spaces *=2;
	    	for (spaces; spaces>0;spaces--){
			cout << " ";
	    	}
	    	stars = rows;
	    	for (stars; stars>0;stars--){
			cout << "*";
	    	}
	    	cout << endl;
	}
	rows = 1;
	for (rows; rows<=n; rows++){
		stars = rows;
		for (stars; stars>0;stars--){
			cout << "*";
	    	}
	    	spaces = n - rows;
	    	spaces *=2;
	    	for (spaces; spaces>0;spaces--){
			cout << " ";
	    	}
	    	stars = rows;
	    	for (stars; stars>0;stars--){
			cout << "*";
	    	}
	    	cout << endl;
	}
	cout << endl;
	
return 0;
}
