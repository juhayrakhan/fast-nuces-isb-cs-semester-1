// Write a program that calculates the monthly income tax based on the following rules:

	// Income <= 50,000: No tax
	// Income between 50,001 and 60,000: 10% tax
	// Income between 60,001 and 80,000: 20% tax + additional 5000 fee
	// Income between 80,001 and 100,000: 30% tax + additional 20000 fee
	// Income > 100,000: 40% tax + additional 25,000 fee + 5% luxury surcharge.
	
// Input: An integer representing income.
// Output: The final tax amount.

# include <iostream>
using namespace std;
int main(){
    
    
    int Income;
    double Tax;
    cin >> Income;
    if(Income<=50000){
    	Tax = 0;}
    else if(Income <= 60000){
	Tax = (Income*0.1);}
    else if(Income <=80000){
    	Tax = (Income*0.2)+5000;}
    else if(Income <=100000){
    	Tax = (Income*0.3)+20000;}
    else{
    	Tax = (Income*0.4)+25000+(Income*0.05);}
   cout << "Your Income is " << Income << endl << "and your Tax Amount is " << Tax << endl;
    
    
return 0;
}
