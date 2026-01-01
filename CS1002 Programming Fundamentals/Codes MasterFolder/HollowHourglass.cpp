#include <iostream>
using namespace std;

void printline(int n, char ch){
    if(n<=0) return;
    cout << ch;
    printline(n-1,ch);
}

void hourglass(int n, int o){
    if(n==o/2) printline(o,'*');
    cout << endl;
    printline(o/2-n+1,' ');
    if(n==1){
        cout << "*";
        return;
    }
    cout << '*';
    printline((2*n)-3,' ');
    cout << '*';
    hourglass(n-1,o);
    cout << endl;
    printline(o/2-n+1,' ');
    cout << '*';
    printline((2*n)-3,' ');
    cout << '*';
    if(n==o/2){
        cout << endl;
        printline(o,'*');
    }
}

int main() {
    int n;
    cin >> n;
    
    hourglass(n/2,n);
    
    return 0;
}