#include <iostream>
using namespace std;

void printStars(int count);
void printSpaces(int spaces);
void printTop(int mid, int row);
void printBottom(int mid, int row);

int main() {
    
    int n; cout << "Num = "; cin >> n;
    int mid = (n + 1) / 2;

    printTop(mid, 1);
    printBottom(mid - 1, mid - 1);

    return 0;
}

void printStars(int count){
    if (count == 0) return;
    cout << "*";
    printStars(count - 1);
}

void printSpaces(int spaces){
    if (spaces == 0) return;
    cout << " ";
    printSpaces(spaces - 1);
}

void printTop(int mid, int row){
    if (row > mid) return;

    printSpaces(mid - row);
    printStars(2 * row - 1);
    cout << endl;

    printTop(mid, row + 1);
}

void printBottom(int mid, int row){
    if (row == 0) return;

    printSpaces(mid - row + 1);
    printStars(2 * row - 1);
    cout << endl;

    printBottom(mid, row - 1);
}