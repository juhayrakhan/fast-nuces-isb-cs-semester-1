#include <iostream>
using namespace std;
int main(){
    cout<<"1d int array"<<endl;
    int num_1d[] = {1, 2, 3, 4, 5};
    cout<<num_1d<<endl; //address for first element(pointer to array)
    // 0x101
    cout<<&num_1d<<endl; //address for first element(pointer to pointer to array)
    // 0x101
    cout<<*num_1d<<endl; //1
    // 1
    cout<<(unsigned long long)(num_1d)<<endl;
    cout<<(unsigned long long)(num_1d+1)<<endl; // diff of 4 bytes
    cout<<(unsigned long long)(&num_1d)<<endl;
    cout<<(unsigned long long)(&num_1d+1)<<endl<<endl;
    // diff of 20 bytes bcz it's a pointer to pointer and adding 1
    // will inc by size * type_size of array: 5*4 = 20
    
    cout<<"2d int array"<<endl;
    int num_2d[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout<<num_2d<<endl; //address of first element (pointer to first row but stores address of first element)
    cout<<&num_2d<<endl; //address of first element (pointer to pointer to first row but stores address of first element)
    cout<<*num_2d<<endl; //address of first element (pointer to first element)
    cout<<**num_2d<<endl; //1
    cout<<(unsigned long long)(num_2d)<<endl;
    cout<<(unsigned long long)(num_2d + 1)<<endl; //diff of 12 bytes because we are adding 1 to a pointer to the first row and that row has 3 elements of in type
    cout<<(unsigned long long)(&num_2d)<<endl;
    cout<<(unsigned long long)(&num_2d + 1)<<endl; //diff of 36 bytes because we are adding 1 to a pointer to the whole 2d array and that array has 9 elements of in type
    cout<<(unsigned long long)(*num_2d + 1)<<endl; //first dereferencing and then adding traversed that specific row meaning this will return the address of second element of first row
    cout<<*(*num_2d + 1)<<endl; //dreferencing the above gives 2
    //adding a number without dereferencing the array first traverses among rows and dereferencing first traverses among columns of that specific row
    cout<<((num_2d + 1) + 2); // moves 1 row over and then moves 2 columns over so it should output 6
}