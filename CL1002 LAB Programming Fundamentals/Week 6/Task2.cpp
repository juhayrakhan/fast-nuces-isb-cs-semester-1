// Write a C++ program that takes two numbers as input, determines which number
// is greater, and displays one of the following messages:
	// No1 is greater than No2
	// No1 is not greater than No2
# include <iostream>
using namespace std;
int main(){
    
    
    int No1, No2;
    cout << "Input No. 1: ";
    cin >> No1;
    cout << "Input No. 2: ";
    cin >> No2;
    if(No1>No2){
    	cout << No1 << " is greater than " << No2 << endl;}
    else{
	cout << No1 << " is not greater than " << No2 << endl;}    
    
    
return 0;
}
