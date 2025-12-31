# include <iostream>
using namespace std;

int power (int val, int exp);
int length (int n);
bool is_palindrome(int num);
void print_palindromes(int start,int end);

int main(){

	int start; cout << "Start = "; cin >> start;
	int end; cout << "End = "; cin >> end;
	print_palindromes(start,end);
return 0;
}

int length (int n){
	int len=0;
	while(n){
		n /= 10;
		len++;
	}
	return len;
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
bool is_palindrome(int num){
	int len= length(num); bool check = true;
	for (int i=0,j=len-1;i<j;i++,j--){
		int numi=(num/power(10,i))%10, numj=(num/power(10,j))%10;
		if (numi!=numj) check=false;
	}
	return check;
}

void print_palindromes(int start, int end){
	for (int i=start; i<=end; i++)
		if (is_palindrome(i)) cout << i <<endl;
}
