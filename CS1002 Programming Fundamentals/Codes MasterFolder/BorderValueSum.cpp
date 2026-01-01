#include <iostream>
using namespace std;

/*
Write a C program that calculates the sum of the elements along the
border of a given square matrix of size n x n.
The program should:
    - Take an input from the user to create a 2D array/matrix.
    - Calculate the sum of the elements along the border (Including corners).
    - Display the calculated sum to the user.

Input: 1 2 3 4 5 6 7 8 9
Process: (1+2+3)+(1+4+7)+(7+8+9) + (3+6+9)
Expected Output: Sum: 60
*/

int Sum(int** arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= arr[0][i];
        sum+= arr[n-1][i];
        sum+= arr[i][0];
        sum+= arr[i][n-1];
    }
    return sum;
}

int main(){
    int n; cout << "N = "; cin >> n;
    cout << "Enter Values with spaces: ";
    int** arr= new int*[n];
    for(int i=0;i<n;i++){
        arr[i]= new int[n];
        for(int j=0;j<n;j++) cin >> arr[i][j];
    }

    cout << "Sum: " << Sum(arr,n);

}