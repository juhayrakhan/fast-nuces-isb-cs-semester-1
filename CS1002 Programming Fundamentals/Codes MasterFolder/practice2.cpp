#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int updated(int** menus, int* sizes, int n) {
    int goodCount[100] = {0};   // count of good prices per menu
    double avg[100] = {0};

    // compute averages
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < sizes[i]; j++)
            sum += menus[i][j];
        avg[i] = (double)sum / sizes[i];
    }

    // find max item index
    int maxItems = 0;
    for (int i = 0; i < n; i++)
        if (sizes[i] > maxItems) maxItems = sizes[i];

    // for each item index
    for (int j = 0; j < maxItems; j++) {
        int maxPrice = -1;

        // find maximum price at item j
        for (int i = 0; i < n; i++)
            if (j < sizes[i] && menus[i][j] > maxPrice)
                maxPrice = menus[i][j];

        // count good prices
        for (int i = 0; i < n; i++)
            if (j < sizes[i] && menus[i][j] == maxPrice)
                goodCount[i]++;
    }

    // choose most updated
    int best = 0;
    for (int i = 1; i < n; i++) {
        if (goodCount[i] > goodCount[best])
            best = i;
        else if (goodCount[i] == goodCount[best] && avg[i] > avg[best])
            best = i;
    }

    return best + 1; // 1-based index
}

int main() {
    
    srand(time(0));
    int menucount;
    cin >> menucount;
    int** menus = new int*[menucount];
    int* menusizes= new int[menucount];
    for(int i=0;i<menucount;i++){
        int val;
        cin >> val; // cin >> val;
        menusizes[i]=val;
        menus[i]= new int[val];
        for(int j=0;j<val;j++){
            menus[i][j]=rand()%30+1;
        }
    }
    
    cout << endl;
    for(int i=0;i<menucount;i++){
        cout << "Menu " << i+1 << ": ";
        for(int j=0;j<menusizes[i];j++){
            if(menus[i][j]<10) cout << '0';
            cout << menus[i][j] << ' ';
        }
        cout << endl;
    }
    
    cout << "\nMost Updated is Menu " << updated(menus, menusizes, menucount)<<endl<<endl;
    
    return 0;
}