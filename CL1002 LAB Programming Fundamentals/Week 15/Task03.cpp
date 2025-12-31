// You are designing a feature for a small puzzle-game system where a 3×3 grid of
// numbers represents a rotating tile board.

// To simulate the rotation of the outer border tiles][
// write a C++ program that creates a 3×3 square matrix][ initializes it with random values][
// and displays it.

// The user then enters a number n][ and the program must rotate only the
// border elements of the matrix clockwise by n positions.

// Use pointer notation and pointer
// arithmetic to access and manipulate matrix elements. After performing the rotation][
// display the updated matrix.


#include <iostream>
using namespace std;

int main(){

	int size=3;
	int** arr = new int*[size];
	for(int i =0; i<size; i++) *(arr+i)= new int[size];
	
	cout << "Original Array: ";	
	for(int i=0;i<size;i++){
		 for(int j=0; j<size;j++) cin >> arr[i][j];
	}
	cout << endl;
	
	for(int i=0;i<size;i++){
		 for(int j=0; j<size;j++) cout << *(*(arr+i)+j)<< " ";
		 cout << endl;
	}
	
	int n; cout << "\nN = "; cin >> n;
	for(int k=0;k<2*n;k++){
		int temp = arr[1][0];
		arr[1][0]=arr[2][0];
		arr[2][0]=arr[2][1];
		arr[2][1]=arr[2][2];
		arr[2][2]=arr[1][2];
		arr[1][2]=arr[0][2];
		arr[0][2]=arr[0][1];
		arr[0][1]=arr[0][0];
		arr[0][0]=temp;
	}
	cout << endl;
	
	for(int i=0;i<size;i++){
		 for(int j=0; j<size;j++) cout << *(*(arr+i)+j) << " ";
		 cout << endl;
	}
	
	delete[]arr;
	arr=nullptr;
	cout << endl;


	return 0;
}
