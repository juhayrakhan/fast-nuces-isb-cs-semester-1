#include <iostream>
using namespace std;

int sum(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int solve(int n, int* arr){
    int solve=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(sum(arr[i])==sum(arr[j])) solve++;
        }
    }
    return solve;
}

int main() {
    
    int nums[100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    
    cout << solve(n,nums);
    
    return 0;
}
