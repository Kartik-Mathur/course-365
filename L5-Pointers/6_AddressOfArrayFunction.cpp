#include <iostream>
using namespace std;

// void printArray(int x[],int n){
void printArray(int *x,int n){
	// sizeof(x)/sizeof(int) kaam nhi krega.... kyu? because x is a variable pointer

	for (int i = 0; i < n; ++i)
	{
		cout << x[i] << ' ';
	}

	cout << endl;
}

int main(){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);

	printArray(a, n);

	cout << &a[4] - &a[0] << endl;


	return 0;
}
















