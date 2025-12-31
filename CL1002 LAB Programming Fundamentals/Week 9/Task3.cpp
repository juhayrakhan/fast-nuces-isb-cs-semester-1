#include <iostream>
using namespace std;

int main(){
	
	int n; bool check=0; cout << "Enter Num 1: "; cin >> n;
	while (n>0){
		for(int i=2; i<(n-1); i++){
			if (n%i==0){
				cout << "Not a Prime Number\nNext Number:";
				check = 1;
				break;}
		}
		if(check==0){cout << "Prime Number\nNext Number: ";}
		cin >> n;
		check = 0;
    	}
    	cout << "Negative Number Detected\n";
    	
return 0;
}


