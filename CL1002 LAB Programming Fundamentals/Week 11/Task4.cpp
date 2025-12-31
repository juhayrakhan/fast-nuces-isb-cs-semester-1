# include <iostream>
using namespace std;

int main(){
	
	const int size = 3; 
	int arr[size][size];
	for (int i=0; i<size; i++){
		for  (int j=0; j<size; j++){
			cout << "Input Value " << (i*size)+j+1 << ": ";
			cin >> arr[i][j];
		}
	}
	cout << "\nArray: \n";
	for (int i=0; i<size; i++){
		for  (int j=0; j<size; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int sum=0, prevsum=sum;
	for (int i=0; i<size; i++)
		for  (int j=0; j<size; j++)
			if(i==j){
			sum +=arr[i][j];
			}
	prevsum=sum;
	sum=0;
	for (int i=0; i<size; i++)
		for  (int j=0; j<size; j++)
			if(i==size-1-j){
			sum+=arr[i][j];
			}
	if(sum!=prevsum){
		cout << "\nNot a Magic Square\n";
		return 0;
	}
	sum=0;
	for (int i=0; i<size; i++){
		for  (int j=0; j<size; j++){
		sum+=arr[i][j];
		}
		if(sum!=prevsum){
			cout << "\nNot a Magic Square\n";
			return 0;
		}
		sum=0;
	}
	for (int i=0; i<size; i++){
		for  (int j=0; j<size; j++){
		sum+=arr[i][j];
		}
		if(sum!=prevsum){
			cout << "\nNot a Magic Square\n";
			return 0;
		}
		sum=0;
	}
	cout << "\n\nIt's a Magic Square!!\n";
	cout << endl;
return 0;
}
