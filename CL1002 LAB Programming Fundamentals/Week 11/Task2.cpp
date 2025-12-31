# include <iostream>
using namespace std;

int main(){

	const int size = 5; 
	int arr[size][size];
	for (int i=0; i<size; i++){
		for  (int j=0; j<size; j++){
			cout << "Input Value " << (i*size)+j+1 << ": "; cin >> arr[i][j];
		}
	}
	int sum = 0;
	for (int i=0; i<size; i++){
		for  (int j=0; j<size; j++){
			if(i%2&&j%2) sum += arr[i][j];	
		}
	}
	cout << "\nSum of Odd Elements = " << sum<< endl;
	
return 0;
}
