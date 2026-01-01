#include <iostream>
using namespace std;

int len(char arr[100]){
    int l = 0;
    while (arr[l] != '\0'&&(l!=99||arr[l+1]!='\0')){
        l++;
    }
    return l;
}

void toLower(char arr[100]){
    for(int i=0;i<len(arr);i++){
        if(arr[i]>96 && arr[i]<123) arr[i] -=32;
    }
}

int main(){

    char arr[100]={'\0'};
    cin.getline(arr,100);
    toLower(arr);
    bool isPal=true; int i=0;
    while(i<=len(arr)/2){
        if(arr[i]!=arr[len(arr)-i-1]){
            isPal=false;
            break;
        }
        i++;
    }
    if(isPal) cout << "Palindrome";
    else cout << "No";

    return 0;
}