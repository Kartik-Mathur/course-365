#include <iostream>
#include <climits>
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


	// Finding the maximum sum row
	int row_ans, row_maxSum = INT_MIN;
	for (int row = 0; row < n; ++row)
	{
		int ans = 0;
		for (int col = 0; col < m ; ++col)
		{
			ans += a[row][col];
		}

		if(ans > row_maxSum){
			row_maxSum = ans;
			row_ans = row;
		}
	}


	// Finding the maximum sum col
	int col_ans, col_maxSum = INT_MIN;
	for (int col = 0; col < m ; ++col)
	{
		int ans = 0;
		for (int row = 0; row < n ; ++row)
		{
			ans += a[row][col];
		}

		if(ans > col_maxSum){
			col_maxSum = ans;
			col_ans = col;
		}
	}

	if(row_maxSum > col_maxSum){
		cout << "Row max sum: "<<row_maxSum<<", row: "<<row_ans << endl;
	}
	else{
		cout << "Col max sum: "<<col_maxSum<<", col: "<<col_ans << endl;
	}

	return 0;
}
















