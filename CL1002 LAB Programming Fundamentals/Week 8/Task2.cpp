# include <iostream>
using namespace std;
int main(){
	
	int n, two=1; cout << "Input a Number: "; cin >> n;
	while (two<=(n/2)){
		two*=2;
		}
	if (two == n){cout << "n is a power of 2\n";}
	else cout << "n is not a power of 2\n";
	return 0;
}
