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

	for (int row = 0; row < n; ++row)
	{
		for (int col = 0; col < m ; ++col)
		{
			cout << a[row][col] << ' ';
		}
		cout << endl;
	}


	for (int k = n-1; k >= 0; --k)
	{
		int i = k, j = 0;

		while(i<n and j < m){
			cout << a[i][j] << ' ';
			i++;
			j++;
		}
		cout << endl;
	}

	for (int k = 1; k < m ; ++k)
	{
		int i = 0, j = k;
		while(i<n and j < m){
			cout << a[i][j] << ' ';
			i++;
			j++;
		}
		cout << endl;
	}


	return 0;
}
















