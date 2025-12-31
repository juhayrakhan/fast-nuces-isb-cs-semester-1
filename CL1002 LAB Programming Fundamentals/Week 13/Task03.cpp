#include <iostream>
using namespace std;

void rotate(int arr[2][2], int rot){
	while(rot>0){
		int temp = arr[0][0];
		arr[0][0]=arr[1][0];
		arr[1][0]=arr[1][1];
		arr[1][1]=arr[0][1];
		arr[0][1]=temp;
		rot--;
	}
}

int main(){
	
	int arr[2][2], rot, totalrot=10;
	cout << "Enter Numbers with Spaces: ";
	for(int i=0;i<2;i++) for(int j=0;j<2;j++) cin >> arr[i][j];
	while(1){
		int rot; cout << "Enter Rotations: "; cin >> rot; totalrot-=rot;
		if (totalrot<0){
			rotate(arr,totalrot+rot);
		}
		else rotate(arr,rot);
		cout << "Rotated:\n";
		for(int i=0;i<2;i++){
			for(int j=0; j<2;j++){
				cout << arr[i][j]<< " ";
			}
			cout << endl;
		}
		if (totalrot<0){
			cout << "Total Rotations Allowed Complete.\n";
			break;
		}
	}
	
	return 0;
}
