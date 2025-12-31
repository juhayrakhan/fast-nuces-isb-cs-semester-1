# include <iostream>
using namespace std;

int power (int val, int exp);
int length (int n);

int main(){

	int num; cout << "Num = "; cin >> num;
	
	int sum=0, temp1, temp2=num, len = length(num);
	for (int i=0;i<len;i++){
		temp1 = temp2 % 10;
		sum += power(temp1,len);
		temp2 /= 10;
	}
	if (sum==num) cout << "Armstrong Number\n";
	else cout << "Not an Armstrong Number\n";
	
return 0;
}

int power (int val, int exp){
	int num = val;
	if (!exp) return 1;
	while (exp!=1){
		val *= num;
		exp--;
	}
	return val;
}

int length (int n){
	int len=0;
	while(n){
		n /= 10;
		len++;
	}
	return len;
}
