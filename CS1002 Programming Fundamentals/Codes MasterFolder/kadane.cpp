#include <iostream>
using namespace std;

int max(int a, int b){
    if (a > b) return a;
    else return b;
}

int maxSubArraySum(int arr[], int size) {

    int overallmax = arr[0];
    int curr = arr[0];

    for (int i = 1; i < size; i++) {
        curr = max(arr[i], curr + arr[i]);
        overallmax = max(overallmax, curr);
    }

    return overallmax;
}

int main() {
    int n=8;
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int max_sum = maxSubArraySum(a, n);
    cout << "Example 1: " << max_sum << endl;
    
    int m=5;
    int b[] = {-5, -2, -8, -1, -9};
    int max_sum_neg = maxSubArraySum(b, m);
    cout << "Example 2: " << max_sum_neg << endl;

    return 0;
}
