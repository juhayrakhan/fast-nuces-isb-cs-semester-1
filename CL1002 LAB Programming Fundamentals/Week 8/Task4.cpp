# include <iostream>
using namespace std;
int main(){
	
	char user; int comp, count=1, uscore=0, cscore=0;
	while(count<=3){
		cout << "\nr: Rock     p: Paper     c: Scissors\nChoose: "; cin >> user;
		cout << "Enter a Random Number: "; cin >> comp;
		comp %=3;
		switch(comp){
		case 0:
			if(user=='r') cout << "\n----------Tie -_-\n";
			else if (user=='p'){cout << "\n----------You Win!\n"; uscore+=1;}
			else if (user=='c'){cout << "\n----------You Lose :(\n"; cscore+=1;}
			break;
		case 1:
			if(user=='p') cout << "\n----------Tie -_-\n";
			else if (user=='c'){cout << "\n----------You Win!\n"; uscore+=1;}
			else if (user=='r'){cout << "\n----------You Lose :(\n"; cscore+=1;}
			break;
		case 2:
			if(user=='c') cout << "----------Tie -_- \n";
			else if (user=='r'){cout << "----------You Win!\n"; uscore+=1;}
			else if (user=='p'){cout << "----------You Lose :(\n"; cscore+=1;}}
		if ((count==3) && (uscore==cscore)){count -=1;}
		count +=1;
		}
		
	if(uscore>cscore){cout << "\n\nYou Win the Game!!!\n";}
	else{cout << "\n\nThe Computer Wins the Game!!!\n";}
	cout << "Your Points: " << uscore << "\tComputer Points: "<<cscore<<endl;
	
	return 0;
}
