#include <iostream>
using namespace std;

// int sumOfArray(int arr[5],int n){

int sumOfArray(int arr[],int n){
	int ans = 0;

	for (int i = 0; i < n; ++i)
	{
		ans += arr[i];
	}

	return ans;
}

int main(){

	int a[5] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);


	cout << sumOfArray(a, n) <<endl;

	return 0;
}
















