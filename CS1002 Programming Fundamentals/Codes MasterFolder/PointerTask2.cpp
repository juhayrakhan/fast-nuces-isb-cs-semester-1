// Write a function that swaps the values of two integers using a pointer to pointer
// approach. You are allowed to pass the addresses of two integer variables using pointer to
// pointer.
// void swap(int **x, int **y);
// Test the function by creating two integer variables and printing their values before
// and after the swap.

#include <iostream>
using namespace std;

void swap(int **x, int **y);

int main(){
    int a=4, b=9;
    int* c = &a; int* d= &b;
    int** x= &c; int** y = &d;
    cout << "X points to " << *c << endl;
    cout << "Y points to " << *d << endl;

    swap(x,y);
    cout << "Now X points to " << *c << endl;
    cout << "Now Y points to " << *d << endl;
    return 0;
}

void swap(int **x, int **y){
    int *temp;
    temp = *x;
    *x = *y;
    *y = temp;
}