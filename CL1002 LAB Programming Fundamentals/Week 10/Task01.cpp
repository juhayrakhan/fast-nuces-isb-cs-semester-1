# include <iostream>
using namespace std;
int main(){
	
	const int size = 5; int arr[size], find, count=0;
	for (int index = 0; index < size; index++){
		cout << "Number " << index+1 << ": "; cin >> arr[index];
		while (arr[index]>9 || arr[index]<0){
			cout << "Invalid: Reinput: "; cin >> arr[index];
		}
	}
	
	do{
		cout << "Enter Number to Find: "; cin >> find;

		for (int index = 0; index < size; index++){
			if(arr[index] == find){
				count += 1;
			}
		}
		
		cout << "Total " << count << " Copies Found.\n\n";
		count = 0;
	}while(find>0);
	

	
return 0;
}
