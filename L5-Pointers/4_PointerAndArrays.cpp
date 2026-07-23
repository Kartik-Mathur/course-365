#include <iostream>
using namespace std;

int main(){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);


	int *x = a; // as a is address of 0th index bucket of array

	for (int i = 0; i < n; ++i)
	{
		// cout << *(a+i) << " ";
		cout << a[i] << ' '; // a[i] == *(a+i)
	}

	cout << endl;


	for (int i = 0; i < n; ++i)
	{
		cout << *(x+i) << " ";
	}

	cout << endl;

		for (int i = 0; i < n; ++i)
	{
		cout << x[i] << " ";
	}

	cout << endl;

	return 0;
}
















