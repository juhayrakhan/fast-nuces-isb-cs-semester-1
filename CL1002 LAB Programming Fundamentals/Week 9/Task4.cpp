#include <iostream>
using namespace std;
int main(){

	int a, b; cout << "Num 1: "; cin >> a; cout << "Num 2: "; cin >> b; 
	int i, greater, lesser;
	if(a>b){greater = a; lesser = b;}
	else if (a<b){greater = b; lesser = a;}
	else if (a=b){cout << "Greatest Common Divisor is " << a << endl; return 0;}
	i = greater;
	do{
		if (greater%i==0){
			if (lesser%i==0){
				cout << "Greatest Factor is " << i << endl;
				break;
			}
		}
		i--;
	} while(i>0);	
	
return 0;
}
