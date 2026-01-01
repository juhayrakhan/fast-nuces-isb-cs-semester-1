#include <iostream>
using namespace std;
int main(){
    
    // int a=2;
    // int* val= &a;
    // cout << val << endl;
    // cout << &val << endl;

    // char* name = new char[8];
    char name[8]= "Juhayra";
    cout << &name << endl;
    cout << name << endl;
    // ABOVE 2 ONLY DIFFERENT FOR CHAR*
    cout << *name << endl;

    // char** names = new char* [5];
    // (char*) names[i] = new char[10];

    char names[5][10] = { "Omar", "Ibtasaam", "Maaz", "Aryan", "Rayyan"};
    cout<<static_cast<char>(*( *(names + 2) + 3))<<endl; // names[2][3];
    cout<<*(&names)<<endl;
    cout<<&names<<endl;
    cout<<names<<endl; // &names[0];
    cout<<*names<<endl; // names[0];
    cout<<*(*(names))<<endl<<endl;
    

    int nums[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12},{13, 14, 15}};
    cout<<nums<<endl;
    cout<<(nums+1)<<endl;
    cout<<**(nums+1)<<endl;
    cout<<&nums<<endl;
    cout<<*(&nums)<<endl;
    cout<<*nums<<endl;
    cout<<*( *nums)<<endl;

    // 1. 0x101
    // 2. 0x104
    // 3. 0x107

    // 0x101 1. 0x101 1
    // 0x101 1. 0x102
    // 0x101 1. 0x103

    // 0x104 1. 0x104
    // 0x104 1. 0x105
    
    //  int nums[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12},{13, 14, 15}};
    int (*ptr)[3] = &nums[0];
    // int *ptr[3] = &nums[0];
    
    cout<<*( *(ptr+3) + 1)<<endl;

    return 0;
}