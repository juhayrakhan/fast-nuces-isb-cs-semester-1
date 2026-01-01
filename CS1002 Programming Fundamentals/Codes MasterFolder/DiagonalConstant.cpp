#include <iostream>
using namespace std;

// A diagonal-constant matrix is a square matrix in which each descending diagonal
// from left to right is constant with the same value.

// Write a C++ function that takes, as parameters a 2D matrix and its dimensions and determines,
// whether it is a diagonal-constant matrix or not by returning true or false.

bool isDiagonalConstant(int arr[4][4], int n){
    int k=n-1;
    while(k>=0){
        int prev=arr[k][0];
        for(int i=k,j=0;i<n;i++,j++){
            if(arr[i][j]!=prev) return 0;
        }
        k--;
    }
    k=1;
    while(k<n){
        int prev=arr[0][k];
        for(int i=0,j=k;j<n;i++,j++){
            if(arr[i][j]!=prev) return 0;
        }
        k++;
    }
    return 1;
}

int main(){
    const int size=4;
    int arr[size][size]={0,4,5,6,1,0,4,5,2,1,0,4,3,2,1,0};

    if(isDiagonalConstant(arr,size)) cout<<"DIagonal";
    else cout << "No";

    return 0;
}