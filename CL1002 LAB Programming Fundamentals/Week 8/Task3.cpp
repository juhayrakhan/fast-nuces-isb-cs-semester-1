# include <iostream>
using namespace std;
int main(){
	
	int n, og, temp=0;
	cin >> n; og = n;
	while (n > 0){
        temp = ((temp << 1) | (n & 1));
        n >>= 1;
        }
        if(temp == og) cout << "Number is a Palindrome\n";
        else cout << "Number is not a Palindrome\n";
	
	return 0;
}
