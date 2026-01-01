# include <iostream>
using namespace std;
int main(){
    
    int n; cout << "N = "; cin >>n;
    for(int row = 0; row<n; row++){
        for (int col = 0; col<n; col++){
            if(col==0||row==0||col==n-1||row==n-1) cout << "* ";
            else if(col%2==0&&((row>=col&&row<=n-col-n%2)||(row<=col&&row>n-col-n%2)))
                cout << "* ";
            else if (row%2==0&&((col>=row&&col<=n-row-n%2)||col<=row&&col>n-row-n%2))
                cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}