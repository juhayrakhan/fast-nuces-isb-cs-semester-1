# include <iostream>
using namespace std;
int main(){
	
	const int size = 5;
	int path1[size]={0}, path2[size]={0}, sum = 0, chosen;
	cout << "First Path:\n";
	for(int i=0; i<size; i++){
		cin >> path1[i];
	}
		
	cout << "Second Path:\n";
	for(int i=0; i<size; i++){
		cin >> path2[i];
	}
	
	cout << "Path 1 or 2? "; cin >> chosen;
	
	for(int i = 0; i<size; i++){
		if(path1[i]==path2[i]){
			if(path1[i+1]=path2[i+1]){
			chosen = 2;
			sum +=path1[i];
			}
			else if(path1[i+1] < path2[i+1]){
				chosen = 1;
				sum += path1[i];
			}
		}
		else{
			if(chosen==1){
				sum += path1[i];
			}
			else{
				sum += path2[i];
			}
		}
	}
	
	cout << "Total: " << sum << endl;
	
return 0;
}
