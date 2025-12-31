# include <iostream>
using namespace std;

int main(){

	const int size = 5; 
	int vec1[size], vec2[size];
	for (int i=0; i<size; i++){
		cout << "Input Value " << i+1 << " of Vector 1: "; cin >> vec1[i];
	}
	cout << endl;
	for (int i=0; i<size; i++){
		cout << "Input Value " << i+1 << " of Vector 2: "; cin >> vec2[i];
	}
	cout << "\nVector 1: \n";
	for (int i=0; i<size; i++) cout << vec1[i] << " ";
	cout << "\nVector 2: \n";
	for (int i=0; i<size; i++) cout << vec2[i] << " ";
	cout << endl;
	int dot = 0;
	for (int i=0; i<size; i++) dot+= vec2[i]*vec1[i];
	cout << "\nDot Product = "<<dot;
	
	// assume position 0=i, 1=j, 2=k;
	
	int i = ((vec1[1]*vec2[2])-(vec1[2]*vec2[1]));
	int j = ((vec1[2]*vec2[0])-(vec1[0]*vec2[2]));
	int k = ((vec1[0]*vec2[1])-(vec1[1]*vec2[0]));

	cout << "\nCross Product = " << i << "i + " << j << "j + " << k << "k\n";
	
return 0;
}
