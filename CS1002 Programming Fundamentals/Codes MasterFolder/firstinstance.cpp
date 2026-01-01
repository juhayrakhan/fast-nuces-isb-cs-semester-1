#include <iostream>
using namespace std;

int len(char arr[100]){
    int l = 0;
    while (arr[l] != '\0'&&(l!=99||arr[l+1]!='\0')){
        l++;
    }
    return l;
}

int first(char* haystack, char* needle) {
    int hlen = len(haystack);
    int nlen = len(needle);

    if (nlen == 0 || nlen > hlen) return -1;

    for (int i = 0; i <= hlen - nlen; i++) {
        
        bool match = true;

        for (int j = 0; j < nlen; j++) {
            if (haystack[i + j] != needle[j]) {
                match = false;
                break;
            }
        }

        if (match) return i;
    }
    return -1;
}

int main() {
    int x=100;
    char* haystack  = new char[x];
    char* needle    = new char[x];
    cin.getline(haystack,x);
    cin.getline(needle,x);
    cout << first(haystack, needle);

    delete[] haystack;
    delete[] needle;
    
    return 0;
}