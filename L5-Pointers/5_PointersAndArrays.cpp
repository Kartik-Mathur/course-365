#include <iostream>
using namespace std;

int main(){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);


	// a = a + 1; // not allowed
	cout << sizeof(a) <<endl;

	int *x = a ;
	int *y = a + 1;
	cout << sizeof(x) << endl;

	cout << *x << endl;
	cout << *(x+1) << endl;
	cout << *(y) << endl;

	return 0;
}
















