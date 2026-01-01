// Write a function that finds the sum of elements in an integer array using pointer
// arithmetic. Do not use array indexing. You are only allowed to use pointer dereferencing
// and pointer arithmetic.

#include <iostream>
using namespace std;

int sum(int* arr, int n);

int main(){
    const int n=10;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    cout << endl << sum(arr, n) << endl;
    return 0;
}

int sum(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += *(arr+i);
    }
    return sum;
}