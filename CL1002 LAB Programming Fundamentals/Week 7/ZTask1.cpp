// ERROR: Case cannot take logical operator, only bool, char or int. Use if-else instead.



#include <iostream>
using namespace std;
int main()
{
int temp = 3;
if (temp<0)
cout << "Temp is negative.\n";
else if(temp == 0)
cout << "Temp is zero.\n";
else if(temp > 0)
cout << "Temp is positive.\n";
return 0;
}

