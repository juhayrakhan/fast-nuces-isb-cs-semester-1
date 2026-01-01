// Write a program in C++. It takes matrix size (row, col) and create a dynamic
// matrix.

// Then take input from user for matrix and find number which is smallest in row
// and simultaneously largest in column. If no such number found it display a message for
// not found.


#include <iostream>
using namespace std;

int main(){

	int rows,cols; cout << "Row and Column: "; cin >> rows >> cols;
	int** arr = new int*[rows];
	for(int i =0; i<rows; i++) *(arr+i)= new int[cols];
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin >> arr[i][j];	// change to cin
		}
	}
	
	bool maxexists=1; int min=0;
	for(int i=0;i<rows;i++){
		min = *(*(arr+i)+0); int point;
		for(int j=0;j<cols;j++) if(*(*(arr+i)+j)<min){
			min = *(*(arr+i)+j); point=j;
		}
		for(int j=0;j<rows;j++) if(*(*(arr+i)+(j+point))>min){
			maxexists=0;
		}
		if(maxexists) break;
	}
	
	if(maxexists) cout << "Exists and Value = " << min << endl;
	else cout << "Does not Exist\n";

	delete[]arr;
	arr=nullptr;
	cout << endl;
	
	return 0;
}
