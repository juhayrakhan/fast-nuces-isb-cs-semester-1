// Write a C++ program that takes a number as input and checks whether it is a
// multiple of 2, 3 or 5. For each case display the message: “<Number> is a multiple of
// <Divisor>.”

# include <iostream>
using namespace std;
int main(){
    
    
    int num;
   cin >> num;
    
   if(num<0){
   	cout << num << " is a negative number" << endl;}
   if(num>=0&&num%2==0){
   	cout << num << " is an even positive number" << endl;}
   if(num>=0&&num%2!=0){
   	cout << num << " is an odd positive number" << endl;}
    
    
return 0;
}
