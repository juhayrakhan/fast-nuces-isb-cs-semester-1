#include <iostream>
using namespace std;

int** Rotate90(int n, int arr[10][10]){
    
}

int main() {
    int n;
    n=3; // cin >> n;
    
    int matrix[10][10]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    /*
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    */
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j]<<' ';
        }
        cout << endl;
    }
    cout << endl;

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j]<<' ';
        }
        cout << endl;
    }

    return 0;
}