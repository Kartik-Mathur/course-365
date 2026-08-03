#include <iostream>
using namespace std;

int main(){

	int a[100][100];
	int no = 1;
	
	int n, m;
	cin >> n >> m;
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m ; ++j)
		{
			a[i][j] = no++;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m ; ++j)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	// Wave print logic

	for (int col = 0; col < m ; ++col)
	{
		if(col%2 == 0){
			// row ka loop from [0, n-1]
			for (int row = 0; row < n ; ++row)
			{
				cout << a[row][col] <<' ';
			}
		}
		else{
			// row ka loop from [n-1, 0]
			for (int row = n-1; row >= 0; --row)
			{
				cout << a[row][col] <<' ';
			}
		}
	}

	cout << endl;

	return 0;
}
















