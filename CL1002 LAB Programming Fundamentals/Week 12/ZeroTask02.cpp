# include <iostream>
using namespace std;

int main(){

	const int size1=2, size2=3;
	int arr[size1][size2];
	cout << "Enter 6 values with spaces: ";
	for (int i=0;i<size1;i++){
		for (int j=0; j<size2;j++){
			cin >> arr[i][j];
		}
	}
	int arr2[size2][size1];
	for (int i=0;i<size1;i++){
		for (int j=0; j<size2;j++){
			arr2[j][i]=arr[i][j];
		}
	}
	cout << "Original: \n";
	for (int i=0;i<size1;i++){
		for (int j=0; j<size2;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Transpose: \n";
	for (int i=0;i<size2;i++){
		for (int j=0; j<size1;j++){
			cout << arr2[i][j]<< " ";
		}
		cout << endl;
	}
	
return 0;
}
