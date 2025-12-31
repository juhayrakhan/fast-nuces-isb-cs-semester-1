#include <iostream>
using namespace std;

int sumArray(int arr[], int index, int size);

int main() {
    
    int arr[10]; cout << "Enter 10 values with Spaces: ";
    for (int i=0;i<10;i++) cin >> arr[i];
    
    int n = 0; int *ptr = &n;
    *ptr = sumArray(arr, 0, 10);

    cout << "Sum = " << n << endl;
    
    return 0;
}

int sumArray(int arr[], int index, int size) {
    
    if (index == size) return 0;
    return arr[index] + sumArray(arr, index + 1, size);
    
}