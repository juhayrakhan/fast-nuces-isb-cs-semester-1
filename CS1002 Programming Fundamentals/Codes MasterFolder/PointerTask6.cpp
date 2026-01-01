#include <iostream>
using namespace std;

int **matrixMultiply(int **arr1, int rows1, int cols1, int **arr2, int rows2, int cols2) {
    
    if (cols1 != rows2) {
        cout << "Error: Number of columns in matrix 1 must equal number of rows in matrix 2.\n";
        return nullptr;
    }

    int **fin = new int*[rows1];
    for (int i = 0; i < rows1; i++) {
        fin[i] = new int[cols2]{0};
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                fin[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    return fin;
}

void freeMatrix(int **arr, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

int main() {
    int rows1 = 2, cols1 = 3;
    int rows2 = 3, cols2 = 2;

    int **arr1 = new int*[rows1];
    for (int i = 0; i < rows1; i++) arr1[i] = new int[cols1];
    int **arr2 = new int*[rows2];
    for (int i = 0; i < rows2; i++) arr2[i] = new int[cols2];

    int counter = 1;
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            arr1[i][j] = counter++;

    counter = 1;
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            arr2[i][j] = counter++;


    int **fin = matrixMultiply(arr1, rows1, cols1, arr2, rows2, cols2);


    if (fin != nullptr) {
        cout << "Resultant Matrix:\n";
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols2; j++) {
                cout << fin[i][j] << " ";
            }
            cout << endl;
        }
        freeMatrix(fin, rows1);
    }

    freeMatrix(arr1, rows1);
    freeMatrix(arr2, rows2);

    return 0;
}
