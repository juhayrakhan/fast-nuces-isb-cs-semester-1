// Write a function that finds the maximum element in an integer array using pointer
// arithmetic. Do not use array indexing; only pointer dereferencing and pointer arithmetic
// should be used.

// int findMax(int *arr, int n);

// - The function should return the value of the maximum element in the array.

#include <iostream>
using namespace std;

int findMax(int *arr, int n);

int main(){
    const int n=10;
    int arr[n]={9,4,3,67,21,89,2,7,4,1};
    cout << "Max =" << findMax(arr,n);
    return 0;
}

int findMax(int *arr, int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(*(arr+i)>max) max= *(arr+i);
    }
    return max;
}