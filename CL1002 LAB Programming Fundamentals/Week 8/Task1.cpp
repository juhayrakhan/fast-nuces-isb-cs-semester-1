# include <iostream>
using namespace std;
int main(){

	int n, XOR = 65;
	cout << "Enter a Numerical: "; cin >> n;
	while(n>0){
		n ^= XOR;
		cout << "Encrypted = " << n << endl;
		XOR ^= n;
		n ^= XOR;
		XOR ^= n;
		n ^= XOR;
		cout << "Decrypted = " << n << endl;
		XOR = 65;
		cout << "Enter Next Numerical: "; cin >> n;
		}	
	
	return 0;
}
