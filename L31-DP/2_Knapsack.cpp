#include <iostream>
using namespace std;

int solve(int *price, int *weight, int n,int cap){ // O(2^n)
	// base case
	if(n == 0 or cap == 0){
		return 0;
	}

	// recursive case
	int op1 = 0, op2 = 0;
	if(cap >= weight[n-1]){
		op1  = price[n-1] + solve(price, weight, n-1, cap - weight[n-1]);
	}
	op2 = 0 + solve(price, weight, n-1,cap);

	return max(op1, op2);
}

int topDown(int *price, int *weight, int n,int cap,int dp[][100]){ // O(n*cap)
	// base case
	if(n == 0 or cap == 0){
		return 0;
	}
	
	if(dp[n][cap] != -1){
		return dp[n][cap];
	}

	// recursive case
	int op1 = 0, op2 = 0;
	if(cap >= weight[n-1]){
		op1  = price[n-1] + topDown(price, weight, n-1, cap - weight[n-1], dp);
	}
	op2 = 0 + topDown(price, weight, n-1,cap, dp);

	return dp[n][cap] = max(op1, op2);
}

int bottomUp(int *price, int *weight, int n,int cap){
	int dp[100][100] = {};

	for (int N = 1; N <= n ; ++N)
	{
		for (int C = 1; C <= cap ; ++C)
		{
			int op1 = 0, op2 = 0;
			if(C>=weight[N-1]){
				op1 = price[N-1] + dp[N-1][C - weight[N-1]];
			}
			op2 = 0 + dp[N-1][C];

			dp[N][C] = max(op1,op2);
		}
	}

	return dp[n][cap];
}


int main(){

	int price[] = {4,2,5,3};
	int weight[] = {2,4,3,1};
	int n = sizeof(price)/sizeof(int);

	int cap = 5;
	int dp[100][100];
	memset(dp, -1, sizeof(dp));

	cout << bottomUp(price, weight, n, cap) << endl;
	cout << topDown(price, weight, n, cap, dp) << endl;
	cout << solve(price, weight, n, cap) << endl;

	return 0;
}
















