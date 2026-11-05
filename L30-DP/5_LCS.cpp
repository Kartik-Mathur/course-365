#include <iostream>
using namespace std;

int solve(string s1, string s2, int n,int m,int dp[][100]){
	if(n == 0 or m == 0){
		return 0;
	}

	if(dp[n][m] != -1){
		return dp[n][m];
	}

	if(s1[n-1] == s2[m-1]){
		return dp[n][m]=1 + solve(s1,s2,n-1,m-1,dp);
	}
	else{
		return dp[n][m]=max(solve(s1,s2,n,m-1,dp),solve(s1,s2,n-1,m,dp));
	}
}


int bottomUp(string s1, string s2){
	int dp[100][100] = {};
	int n = s1.size();
	int m = s2.size();
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m ; ++j)
		{
			if(s1[i-1] == s2[j-1]){
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m ; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[n][m];

}

int main(){
	string s1 = "abced";
	string s2 = "axbce";
	int dp[100][100];
	memset(dp, -1, sizeof(dp));
	cout << bottomUp(s1, s2) << endl;
	cout << solve(s1, s2, s1.size(), s2.size(), dp) << endl;

	return 0;
}
















