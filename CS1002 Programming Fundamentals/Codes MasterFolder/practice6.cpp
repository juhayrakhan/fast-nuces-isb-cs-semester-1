#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/*
    - row x column grid.
    - Each block contains either
        • 1 : a security officer is present, or
        • 0 : no security officer is present.

1. Columns where every block in the column contains 0.
2. Rows where every block in the row contains 0.
3. The largest square consisting only of 1 ’s
    (if several squares tie for maximum size, you may show any one of them).
4. Display elements of grid in clockwise spiral order (Right, Down, Left, Up).

• For tasks 1 & 2, output the exact indices of the qualifying rows or columns.
• For tasks 3, output the top-left and bottom-right coordinates of the square (row-start,
col-start) to (row-end, col-end).
*/

int main(){

    srand(time(0));
    int r, c; cin >> r >> c;
    bool** arr= new bool*[r];
    for(int i=0;i<r;i++){
        arr[i]= new bool[c];
        for(int j=0;j<c;j++) arr[i][j]= rand()%2;
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    for(int k=0;k<(r/2)+r%2;k++){
        if(k==r/2&&r%2){
            cout << arr[k][k];
            continue;
        }
        for(int i = k; i < c-k; i++) cout << arr[k][i] <<' ';
        for(int j=1+k;j<r-1-k;j++) cout << arr[j][c-1-k] << ' ';
        for(int i = k; i < c-k; i++) cout << arr[r-1-k][c-i-1] <<' ';
        for(int j=1+k;j<r-k-1;j++) cout << arr[r-j-1][k] << ' ';
    }

    return 0;
}