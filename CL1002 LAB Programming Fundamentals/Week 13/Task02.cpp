#include <iostream>
using namespace std;

void Updated_Matrix(int arr[5][5]);
void Updated_Matrix(int val, int arr[5][5], int updater[2][2]);

int main(){
	
	const int size=5; int arr[size][size]; int updater[2][2];
	
	cout << "Enter Numbers with spaces: "; 
	for (int row=0;row<size;row++) for (int col=0;col<size;col++) cin >> arr[row][col];
	
	cout << "Enter X1,Y1,X2,Y2: "; int invalid=true;
	while (invalid){
		cin >> updater[0][0] >> updater[0][1] >> updater[1][0] >> updater[1][1];
		if ((updater[0][0]==(updater[0][1]-1))&&(updater[1][0]==(updater[1][1]-1))) invalid = false;
		else cout << "Reinput for accurate 2x2 Region: ";
	}
	
	int val; cout << "Enter Value to Increment By: ";cin >> val;
	
	int opt; cout << "1: Output Matrix    2: Increment Chosen area with Value\nInput Option: ";
	cin >> opt;
	switch(opt){ default: cout << "Invalid Input\n"; return 0;
	case 1: Updated_Matrix(arr);
	case 2: Updated_Matrix(val,arr,updater);
		cout << "\nNew Matrix: \n";
		Updated_Matrix(arr);
	}
	
	return 0;
}

void Updated_Matrix(int arr[5][5]){
	for (int row=0;row<5;row++){
		for (int col=0;col<5;col++) cout << arr[row][col] << " ";
		cout << endl;
	}
}
void Updated_Matrix(int val, int arr[5][5], int updater[2][2]){
	arr[updater[0][0]][updater[0][1]] += val;
	arr[updater[0][0]][updater[1][1]] += val;
	arr[updater[1][0]][updater[0][1]] += val;
	arr[updater[1][0]][updater[1][1]] += val;
}
