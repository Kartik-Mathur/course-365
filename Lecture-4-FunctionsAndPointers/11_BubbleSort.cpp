#include <iostream>
using namespace std;

void bubbleSort(int a[],int n){
	for(int i = 0 ; i < n - 1 ; i++){ 
		for(int j = 0 ; j < n - 1 - i ; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
			}
		}
	}

}

void print(int a[],int n){
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

}

int main(){

	int a[] = {5,4,3,1,2};
	int n = sizeof(a)/sizeof(int);

	print(a,n);
	bubbleSort(a,n);
	print(a,n);


/*
	

	
*/

	return 0;
}
















