# include <iostream>
using namespace std;

int main(){

	const int size = 5; 
	int arr[size][size];
	for (int i=0; i<size; i++){
		for  (int j=0; j<size; j++){
			cout << "Input Value " << (i*size)+j+1 << ": "; cin >> arr[i][j];
			while (arr[i][j]>=100||arr[i][j]<=1){
				cout << "Invalid, input a value between 1 and 100: ";
				cin >> arr[i][j];
			}
		}
	}
	cout << "\nArray in Straight Order: \n";
	for (int i=0; i<size; i++){
		for  (int j=0; j<size; j++){
			cout << arr[i][j] << " ";
		}
	}
	cout << "\nArray in Reverse Order: \n";
	for (int i=size-1; i>=0; i--){
		for  (int j=size-1; j>=0; j--){
			cout << arr[i][j] << " ";
		}
	}
	cout << endl;
	
return 0;
}
