# include <iostream>
using namespace std;
int main(){

	int size;
	cout << "Number of Warehouses: "; cin >> size; int arr[size];
	
	for (int i = 0; i < size; i++){
		cout << "Bags at W" << i+1 << ": ";
		cin >> arr[i];
	} 
	
	int max = 0;
	for (int i = 0; i < size; i++){
		
		int sum = 0, check = arr[i];
		
		for(int j = i; (j >= 0 && arr[j] >= check); j--){
			sum += check;
		}
		
		for(int j = i+1; (j < size && arr[j] >= check); j++){
			sum += check;
		}
		
		if(sum>max){
			max = sum;
		}
		
	}
	
	cout << "Max: " << max << endl;
	
	
return 0;
}
