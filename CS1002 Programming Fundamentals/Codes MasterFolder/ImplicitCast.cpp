#include <iostream>
using namespace std;

// gives 25 on everything? Programiz, VsCode and Mingw64

int main(){ 

    float x1 = 2.4;
    float x2 = 2.3;

    if(x1 == 2.4) cout<<"1";
    if(x1 == 2.4f) cout<<"2";
    if(x1==int(2.4)) cout<<"3";
    if(x2 == 2.3) cout<<"4";
    if(x2 == 2.3f) cout<<"5";
    if(x2==int(2.3)) cout<<"3";
        
return 0;
}
