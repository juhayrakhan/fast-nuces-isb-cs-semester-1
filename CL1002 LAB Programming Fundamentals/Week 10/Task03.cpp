# include <iostream>
using namespace std;
int main(){

	const int size = 8;
	char name[size] = "Juhayra"; int count = 0;
	for (int i = 0; i<size; i++){
		if (name[i] == 'A' || name[i] == 'a'){
			count ++;
		}	
	}
	
	cout << "Name: ";
	for (int i = 0; i<size; i++){
		cout << name[i];
	}
	cout << "\nNumber of A's: " << count << endl;
return 0;
}
