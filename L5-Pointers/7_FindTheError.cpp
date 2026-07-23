#include <iostream>
using namespace std;

int sum(int *a,int n){

	// a jis bhi index ko point karega vo humesha 0th index hoga

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += a[i];
	}

	return ans;
}

int main(){

	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(a)/sizeof(int);

	cout << sum(a,n) <<g endl;

	cout << sum(a+5,n-5) << endl;

	return 0;
}
















