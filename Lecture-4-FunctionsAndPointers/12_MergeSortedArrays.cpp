#include <iostream>
using namespace std;

void mergeSorted(int a[],int n,int b[],int m){
	int i = n - 1, j = m - 1, k = n+m-1;

	while(i>=0 and j>=0){
		if(b[j] > a[i]){
			a[k] = b[j];
			k--;
			j--;
		}
		else{
			a[k] = a[i];
			k--;
			i--;
		}
	}

	// Outside loop
	while(j>=0){
		a[k] = b[j];
		k--;
		j--;
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


	int a[9] = {1,2,4,6,7};
	int n = 5;

	int b[] = {3,5,8,9};
	int m = sizeof(b)/sizeof(int);

	mergeSorted(a,n,b,m);

	print(a,n+m);


	return 0;
}
















