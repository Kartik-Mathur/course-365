#include <iostream>
using namespace std;

int main(){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a)/sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n ; ++j)
		{
			int sum = 0;

			for (int k = i; k <= j; ++k)
			{
				cout << a[k] << ' ';
				sum += a[k];
			}

			cout << ", Sum : " << sum << endl;
		}
	}

	return 0;
}
















