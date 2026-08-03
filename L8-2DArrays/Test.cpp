#include <iostream>
using namespace std;

int main(){

	int a[100][100];
	int no = 1;
	int n = 15, m = 15;
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m ; ++j)
		{
			// cin>>a[i][j];
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

	return 0;
}
















