#include <iostream>
using namespace std;

bool isSorted(int *a,int n){
	// base case
	if(n == 1 or n == 0){
		return true; // 1 elements hai array mei thus sorted, 0 hai toh bhi sorted
	}

	// recursive case
	bool isChotaSorted = isSorted(a+1, n-1); // Pure assumption
	if(a[0] <= a[1] && isChotaSorted == true){
		return true; // this means bada array is also sorted
	}
	else{
		return false; // bada array sorted nhi h
	}
}

bool isSorted2(int *a, int n){
	if(n == 1 or n == 0){
		return true;
	}

	bool isChotaSorted = isSorted2(a, n-1);

	if(a[n-2] <= a[n-1] && isChotaSorted == true){
		return true;
	}
	else{
		return false;
	}
}

bool isSorted3(int *a,int n,int i){
	if(i == n - 1){
		return true;
	}

	bool isChotaSorted = isSorted3(a,n,i+1);
	if(a[i] <= a[i+1] && isChotaSorted == true){
		return true;
	}
	else {
		return false;
	}
}

int main(){

	int a[] = {1, 2, 3, 4};
	int n = sizeof(a)/sizeof(int);

	if(isSorted3(a,n,0) == true){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}

	return 0;
}
















