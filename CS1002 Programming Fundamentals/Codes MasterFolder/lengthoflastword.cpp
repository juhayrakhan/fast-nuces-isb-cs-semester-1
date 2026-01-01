#include <iostream>
using namespace std;

int len(char* arr, int x){
    bool check=false; int i=x;

    for(;arr[i]!=' '&&i>0;i--);

    int length=0;i++;
    while(arr[i]!='\0'){
        length++;
        i++;
    }

    return length;
}

int main() {
    
    char arr[100]={'\0'};
    cin.getline(arr,100-1);

    cout << len(arr,100);
    
    return 0;
}