#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n; cin >> n;
    int** arr= new int*[n];

    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++)
            arr[i][j]=rand()%257;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]<100) cout << 0;
            if(arr[i][j]<10) cout << 0;
            cout << arr[i][j]<<' ';
        }
        cout << endl;
    }

    int newsize; cin >> newsize;
    if(n%newsize!=0) return 0;

    int outsize=((n-newsize)/2)+1;
    int** output=new int*[outsize];
    for(int i=0;i<outsize;i++){
        output[i]=new int[outsize];
    }

    for(int i=0;i<n;i+=newsize){
        for(int j=0;j<n;j+=newsize){
            int max=arr[i][j];
            for(int k=i;k<newsize+i;k++){
                for(int l=j;l<newsize+j;l++){
                    if(arr[k][l]>max) max = arr[k][l];
                }
            }
            output[i/newsize][j/newsize]=max;
        }
    }

    for(int i=0;i<outsize;i++){
        for(int j=0;j<outsize;j++){
            cout << output[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}