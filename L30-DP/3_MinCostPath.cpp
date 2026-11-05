#include <iostream>
using namespace std;

int solve(int cost[][4],int n,int m,int dp[][100]){
	if(n == 0 and m == 0){
		return cost[n][m];
	}

	if(n < 0 || m < 0){
		return INT_MAX;
	}

	int op1 = solve(cost, n-1,m,dp);
	int op2 = solve(cost, n, m-1, dp);

	return min(op1,op2)+cost[n][m];
}

int main(){

	int cost[][4]={
		{1,1,4,2},
		{5,1,1,3},
		{9,6,1,1},
		{4,7,8,1},
	};

	int dp[100][100] = {};
	int n = 4, m = 4;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m ; ++j)
		{
			if(i == 0 and j == 0){
				dp[i][j] = cost[i][j];
			}
			else{
				dp[i][j] = min(
							(i-1>=0?dp[i-1][j]:INT_MAX), 
							(j-1>=0?dp[i][j-1]:INT_MAX)) + 
							cost[i][j];
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m ; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Min Cost: "<<dp[n-1][m-1]<<endl;
	cout << "Min Cost: "<<solve(cost, n-1, m-1,dp)<<endl;


	return 0;
}
















