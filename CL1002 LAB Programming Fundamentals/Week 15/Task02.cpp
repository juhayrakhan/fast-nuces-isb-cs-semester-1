// Write a program in C++, in which initialize dynamic array of user given size with
// random values and call function get_square to square their values. Use pointer notation
// (pointer athematic) to access and manipulate array.
// Prototype: int get_square(int* p, int size)

#include <iostream>
using namespace std;

int get_square(int* p, int size);

int main(){

	int size; cout << "Size = "; cin >> size;
	int* arr = new int[size];
	cout << "\nOriginal Array\n";
	for(int i =0; i<size; i++){
		cin >> *(arr+i);
	}
	cout << "\nNew Array\n";
	for(int i =0; i<size; i++){
		*(arr+i) = get_square(arr,i);
		cout << *(arr+i) << " ";
	}
	
	delete[]arr;
	arr=nullptr;
	
	cout << endl;

	return 0;
}

int get_square(int* p, int size){
	return *(p+size) * *(p+size);
}
