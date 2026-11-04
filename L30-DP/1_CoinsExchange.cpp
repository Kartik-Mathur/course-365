#include <iostream>
using namespace std;

int minCoins(int amount, int *deno, int n){
	// base case
	if(amount == 0){
		return 0; 
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if(amount >= deno[i]){
			int ca = minCoins(amount - deno[i], deno, n);
			if(ca != INT_MAX){
				ans = min(ans, ca + 1);
			}
		}
	}

	return ans;
}

int topDown(int amount, int *deno, int n,int *dp){
	// base case
	if(amount == 0){
		return 0; 
	}

	if(dp[amount] != -1){
		return dp[amount];
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if(amount >= deno[i]){
			int ca = topDown(amount - deno[i], deno, n, dp);
			if(ca != INT_MAX){
				ans = min(ans, ca + 1);
			}
		}
	}

	return dp[amount] = ans;
}

int bottomUp(int amount,int *deno, int n){
	int dp[10000];
	dp[0] = 0;

	for (int i = 1; i <= amount; ++i)
	{
		int ans = INT_MAX;
		for (int j = 0; j < n ; ++j)
		{
			if(i >= deno[j]){
				int ca = dp[i-deno[j]];
				if(ca != INT_MAX){
					ans = min(ans, ca + 1);
				}
			}
		}

		dp[i] = ans;
	}

	return dp[amount];
}

int main(){

	int deno[] = {1, 7, 10};
	int n = sizeof(deno)/sizeof(int);
	int amount;
	cin>>amount;
	int dp[10000];
	memset(dp, -1 ,sizeof(dp));
	cout << bottomUp(amount, deno, n) << endl;
	cout << topDown(amount, deno, n, dp) << endl;
	cout << minCoins(amount, deno, n) << endl;

	return 0;
}
















