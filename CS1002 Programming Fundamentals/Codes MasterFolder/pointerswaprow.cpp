#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    
    int arr[10][10];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    
    int row1, row2;
    
    for(int j=0;j<c;j++){
        int temp=arr[row1][j];
        arr[row1][j]=arr[row2][j];
        arr[row2][j]=temp;
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << arr[i][j];
            if(j < c-1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}