// Write a function that reverses an array in place using only pointer arithmetic. Do not
// use array indices.

// void reverseArray(int *arr, int n);
// - The function should reverse the elements of the array arr of size n.

#include <iostream>
using namespace std;

void reverseArray(int* arr, int n);

int main(){
const int n=10;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    reverseArray(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

void reverseArray(int* arr, int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp = *(arr+i);
        *(arr+i)= *(arr+n-i-1);
        *(arr+n-i-1)= temp;
    }
}