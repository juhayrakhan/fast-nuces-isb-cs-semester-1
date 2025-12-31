# include <iostream>
using namespace std;

int isPositive(int n);

int main(){

	const int size1=5,size2=2;
	int stocks[size1][size2];
	for (int j=0; j<size2;j++){
		cout << "Enter Values of Stock " << j+1 << " with spaces: ";
		for (int i=0;i<size1;i++){
			int n; cin >> n; 
			stocks[i][j]=isPositive(n);
		}
	}
	bool up1 = true, up2 = true; int len1=0,len2=0, p1=0,p2=0, a1=0, a2=0;
	for (int i=1; i<size1; i++){
	
		if(stocks[i][0]<stocks[i-1][0]){
			len1=0; up1 = false;
		}
		else{	len1++; p1=i; }
		
		if(stocks[i][1]<stocks[i-1][0]){
			len2=0; up2 = false;
		}
		else{	len2++; p2=i; }
		
		a1 += stocks[i][0]; a2 += stocks[i][1];
	}
	
	a1/=5; a2 /=5;
	
	if (up1&&(!up2)) cout << "Stock 1 is increasing!\n";
	else if ((!up1)&&up2) cout << "Stock 2 is increasing!\n";
	else if((!up1)&&(!up2)){
		if(len1>len2) cout << "\nStock 1 has longer increasing trend";
		else if(len1<len2) cout << "\nStock 2 has longer increasing trend";
		else{
			cout << "\nBoth Stocks increased for same period";
			if(p2>p1) cout << "\n Stock 2 was increasing most recently";
			else if(p2<p1) cout << "\n Stock 1 was increasing most recently";
			else cout << "\n Stock 1 was increasing most recently";
		}
	}
	else{
		if(a1>a2) cout << "\nStock 1 has a higher average";
		else if(a1<a2) cout << "\nStock 2 has a higher average";
		else cout << "\nBoth Stocks are performing Equally";
	}
	cout << endl;
return 0;
}

int isPositive(int n){
	while(n<0){
		cout << "Not a Positive Number; Reinput: ";
		cin >> n;
	}
	return n;
}
