#include <iostream>
using namespace std;

int sumOfArray(int *a,int n){
	// base case
	if(n == 0){
		return 0;
	}
	// recursive case
	return a[0] + sumOfArray(a+1,n-1);
}

int sumOfArray1(int *a,int n){
	// base case
	if(n == 0){
		return 0;
	}
	// recursive case
	return a[n-1] + sumOfArray1(a,n-1);
}

int sumOfArray2(int *a,int n,int i){
	// base case
	if(i == n){
		return 0;
	}

	// recursive case
	return a[i] + sumOfArray2(a,n,i+1);
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif		

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);

	cout << sumOfArray(a,n)<<endl;
	cout << sumOfArray1(a,n)<<endl;
	cout << sumOfArray2(a,n,0)<<endl;

	return 0;
}
















