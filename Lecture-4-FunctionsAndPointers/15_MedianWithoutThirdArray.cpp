#include <iostream>
using namespace std;

float median(int a[],int n,int b[],int m){
	int i = 0, j = 0;
	int ps1 = (n+m+1)/2;

	int ps2 = ps1 + 1;
	int x,y;
	int cp = 1;
	// median toh hoga hi hoga pakka hai

	while(i < n and j < m){
		if(a[i] < b[j]){

			if(cp == ps1){
				x = a[i];
			}

			if(cp == ps2){
				y = a[i];
				break;
			}

			i++;
			cp++;
		}
		else{
			if(cp == ps1){
				x = b[j];
			}

			if(cp == ps2){
				y = b[j];
				break;
			}

			j++;
			cp++;
		}
	}


	if((n+m) % 2 == 0){
		return (x+y)/2.0;
	}
	else{
		return x;
	}

}

int main(){

	int a[] = {1,3,5,9};
	int n = sizeof(a)/sizeof(int);

	int b[] = {2,4,6};
	int m = sizeof(b)/sizeof(int);


	cout << median(a,n,b,m) << endl;



	return 0;
}
















