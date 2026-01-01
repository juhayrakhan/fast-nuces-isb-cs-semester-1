// Write a program that dynamically allocates memory for a 2D array of integers. The
// program should also populate the array with values, and then free the allocated memory.

// int **create2DArray(int rows, int cols);
// void fill2DArray(int **arr, int rows, int cols);
// void free2DArray(int **arr, int rows);

// - create2DArray should dynamically allocate memory for the array. - fill2DArray
// should fill the array with values (for example, set arr[i][j] = i * j). - free2DArray
// should free the allocated memory.

#include <iostream>
using namespace std;

int **create2DArray(int rows, int cols);
void fill2DArray(int **arr, int rows, int cols);
void free2DArray(int **arr, int rows);

int main(){

    int rows=5, cols=8;
    int** arr = create2DArray(rows,cols);
    fill2DArray(arr,rows,cols);
    // Print the array
    cout << "2D Array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    free2DArray(arr,rows);
    return 0;
}
int **create2DArray(int rows, int cols){
    int **arr = new int*[rows];
    for(int i=0;i<rows;i++){
        arr[i]=new int[cols];
    }
    return arr;
}
void fill2DArray(int **arr, int rows, int cols){
    for(int i=0;i<rows;i++) for(int j=0;j<cols;j++){
        *(*(arr+i)+j)=i+j;
    }
}
void free2DArray(int **arr, int rows){
    for(int i=0;i<rows;i++) delete[] arr[i];
    
    delete[] arr;
}