#include <iostream>
using namespace std;

int main(){

	int a[] = {1, 2, 3, -4, -5};
	int n = sizeof(a)/sizeof(int);

	int ans = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		ans = max(ans, a[i]);
	}

	cout << ans << endl;

	// cout << "INT_MIN    : "<<INT_MIN << endl;
	// cout << "INT_MIN - 1: "<<INT_MIN - 1 << endl;
	// cout << "INT_MAX + 1: "<<INT_MAX + 1 << endl;

	return 0;
}
















