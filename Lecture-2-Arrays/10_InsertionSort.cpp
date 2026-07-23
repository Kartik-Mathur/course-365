#include <iostream>
using namespace std;

int main(){

	int a[] = {4, 2, 3, 1, 0};
	int n = sizeof(a)/sizeof(int), j;

	for (int i = 1; i < n; ++i)
	{
		int x = a[i];

		for(j = i -1 ; j >= 0 and a[j] > x; j--){
			a[j+1] = a[j];
		}

		a[j+1] = x;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";g
	}

	cout << endl;


	return 0;
}
















