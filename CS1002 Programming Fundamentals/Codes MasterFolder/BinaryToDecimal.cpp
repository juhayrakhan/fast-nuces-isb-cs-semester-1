# include <iostream>
# include <cmath>
using namespace std;
int main() {
    int n, dec=0;
    cout << "N0 = "; cin >> n;
    for(int row =0; n!=-1; row++){
        if(n!=0&&n!=1){
            cout << "Invalid";
            return 0;
        }
        dec += (n==1?pow(2,row):0);
        cout << "N" << row + 1 << " = "; cin >> n;
    }
    cout << "Final Decimal Value = " << dec;
    
    return 0;
}