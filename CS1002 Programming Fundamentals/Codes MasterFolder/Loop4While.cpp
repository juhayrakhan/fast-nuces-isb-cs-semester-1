#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib> 

int main() {
    
    srand(time(0));
    int num = rand()%10;
    cout << "4. Guess a number between 1 to 9.\n\nGuess = ";
    int guess; cin >> guess;
    while(guess != num){
        cout << "Incorrect, try again!\n";
        cin >> guess;
    }
    cout << "Correct! You win!";
    return 0;
}
