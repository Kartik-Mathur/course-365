#include <iostream>
using namespace std;

void print(int *a,int n,int i = 0){
	if(i == n){
		return;
	}

	a[i] += 10;
	print(a, n, i+1);
}

int main(){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);

	print(a, n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}


	return 0;
}
















