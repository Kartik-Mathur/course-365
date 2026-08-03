#include <iostream>
using namespace std;

int main(){

	int a[100][100];
	int no = 1;
	int n, m;

	cin >> n >> m;
	
	for (int row = 0; row < n; ++row)
	{
		for (int col = 0; col < m ; ++col)
		{
			a[row][col] = no++;
		}
	}

	for (int row = 0; row < n; ++row)
	{
		for (int col = 0; col < m ; ++col)
		{
			cout << a[row][col] << ' ';
		}
		cout << endl;
	}

	for (int col = 0; col < m; ++col)
	{
		for (int row = 0; row < n ; ++row)
		{
			cout << a[row][col] << ' ';
		}
		cout << endl;
	}

	return 0;
}
















