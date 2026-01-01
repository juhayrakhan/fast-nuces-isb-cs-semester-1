// You are designing a storage manager for a program that maintains several dynamic
// arrays of different sizes. Initially, you create a dynamic array named root of size 3 which
// point to other dynamic arrays whose size is provided by the user. After filling the first
// three arrays, the user may choose to add more. Each time the user decides to add another
// array, the root array must grow by 1. Continue asking the user whether they want to create
// another array, and expand the root array each time the limit is reached.


#include <iostream>
using namespace std;

int main(){

	int rows=3;
	int* colsizes= new int[rows];
	cout << "Enter first three sizes: ";
	for(int i=0;i<3;i++){
		cin >> colsizes[i];
	}

	int** arr= new int*[rows];
	for(int i=0;i<rows;i++){
		arr[i]=new int[colsizes[i]];
	}
	
	cout << "Enter Values: ";
	for(int i=0;i<rows;i++){
		for(int j=0;j <colsizes[i];j++)
			cin >> arr[i][j];
	}
	int cont;
	cout << "Continue? Enter 1 if yes, 0 if no: "; cin >> cont;
	while(cont){
	
		int nextsize; cout << "Size of Next Array: "; cin >> nextsize;
		
		int* newarr = new int[++rows];
		
		for(int i=0; i<rows-1;i++)	newarr[i]=colsizes[i];
		
		delete[] colsizes;
		colsizes=newarr;
		colsizes[rows-1]=nextsize;
		
		int** newarrr = new int*[rows];
		for(int i=0; i<rows-1;i++)	newarrr[i] = arr[i];
		
		
		delete[] arr;
		arr=newarrr;
		arr[rows-1]=new int[colsizes[rows-1]];
		
		
		cout << "Enter Values: ";
		for(int j=0;j<colsizes[rows-1];j++)
			cin >> arr[rows-1][j];
	
		cout << "Continue? Enter 1 if yes, 0 if no: "; cin >> cont;
		
	}
	
	cout << "Your Arrays:\n";
	
	for(int i=0;i<rows;i++){
		for(int j=0;j <colsizes[i];j++) cout << arr[i][j]<< " ";
		cout << endl;
	}
	
	return 0;
}