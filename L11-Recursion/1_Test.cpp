#include <iostream>
using namespace std;

int first7(int *a,int n,int i){
	if(i == n){
		return -1;
	}

	if(a[i] == 7){
		return i;
	}

	int indx = first7(a,n,i+1);

	return indx;
}

int last7(int *a,int n){
	if(n == 0){
		return -1;
	}

	if(a[n-1] == 7){
		return n-1;
	}

	int indx = last7(a,n-1);

	return indx;
}


void all7(int *a,int n,int i){
	if(i == n){
		return;
	}

	if(a[i] == 7){
		// Merko ith index par milla meine print kar dia, return nhi krenge...
		cout << i << ' ';
	}

	// Now go and ask the recursion to print all indexes in smaller array..
	all7(a,n,i+1);
}

int main(){

	int a[] = {1, 2, 3, 4, 7, 3, 7, 8, 5};
	int n = sizeof(a)/sizeof(int);

	int ans = first7(a,n,0);
	cout << ans << endl;
	cout << last7(a,n) << endl;

	all7(a,n,0);

	return 0;
}
















