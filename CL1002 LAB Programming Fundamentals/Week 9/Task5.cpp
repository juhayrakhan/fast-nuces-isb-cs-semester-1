#include <iostream>
using namespace std;

int main(){
	
	int column, row;
	cout << "Enter Any Number: "; cin >> row;
	column = row;
	for (row; row>0; row--){
	
		for (column; column>0;column--){
			cout << column << " ";
	    	}
	    	
	    	cout << endl;
	    	column = row-1;
	}
return 0;
}
