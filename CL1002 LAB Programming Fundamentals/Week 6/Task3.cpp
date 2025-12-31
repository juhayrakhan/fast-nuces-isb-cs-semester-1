// Write a C++ program that takes a number as input and checks whether it is a
// multiple of 2, 3 or 5. For each case display the message: “<Number> is a multiple of
// <Divisor>.”

# include <iostream>
using namespace std;
int main(){
    
    
    int num;
    cin >> num;
    if(num%2==0){
    cout << num << " is a multiple of 2" << endl;}
    if(num%3==0){
    cout << num << " is a multiple of 3" << endl;}
    if(num%5==0){
    cout << num << " is a multiple of 5" << endl;}
    
return 0;
}
