#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
Write a recursive function [int count(int n)] that takes in a non-negative integer 'n '
and returns the number of ways to write 'n' as the sum of 1, 3, and 4.
*/

int count(int n) {
    if (n == 0) return 1;
    else if (n < 0) return 0;
    else return count(n - 1) + count(n - 3) + count(n - 4);
}

int main(){
    int n;cin>>n;
    cout << count(n);
}