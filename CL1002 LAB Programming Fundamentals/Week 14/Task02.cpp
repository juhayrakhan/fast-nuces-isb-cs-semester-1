#include <iostream>
using namespace std;

int printEven(int newstart, int end);

int main() {
    
    int start; cout << "Start: "; cin >> start;
    int end; cout << "End: "; cin >> end;

    cout << "Even numbers between " << start << " and " << end << ":\n" << printEven(start, end);

    return 0;
}

int printEven(int newstart, int end){
    
    if ((newstart == end)||((newstart==end-1)&&(end%2==1))) return end;
    
    if (newstart % 2 == 0) cout << newstart << " ";

    return printEven(++newstart, end);
}
