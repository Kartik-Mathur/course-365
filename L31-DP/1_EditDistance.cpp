#include <iostream>
using namespace std;

int solve(string s1, string s2, int n,int m){
	// Exponential time complexity
	if(n == 0){
		return m;
	}

	if(m == 0){
		return n;
	}

	if(s1[n-1] == s2[m-1]){
		return solve(s1,s2,n-1,m-1); // no cost added as last characters match
	}
	else{
		int op1 = solve(s1, s2, n, m-1); // insertion
		int op2 = solve(s1, s2, n-1, m); // deletion
		int op3 = solve(s1, s2, n-1, m-1); // updation

		return 1 + min(op1, min(op2,op3));
	}
}

int topDown(string s1, string s2, int n,int m, int dp[][100]){
	// O(n*m) time complexity
	if(n == 0){
		return m;
	}

	if(m == 0){
		return n;
	}

	if(dp[n][m]!=-1){
		return dp[n][m];
	}

	if(s1[n-1] == s2[m-1]){
		return dp[n][m]=topDown(s1,s2,n-1,m-1, dp); // no cost added as last characters match
	}
	else{
		int op1 = topDown(s1, s2, n, m-1, dp); // insertion
		int op2 = topDown(s1, s2, n-1, m, dp); // deletion
		int op3 = topDown(s1, s2, n-1, m-1, dp); // updation

		return dp[n][m]=1 + min(op1, min(op2,op3));
	}
}

int bottomUp(string s1, string s2){
	int dp[100][100];
	int n = s1.size(), m = s2.size();

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m ; ++j)
		{
			if(i == 0) dp[i][j] = j;
			else if(j == 0) dp[i][j] = i;
			else if(s1[i-1] == s2[j-1]){
				dp[i][j] = dp[i-1][j-1]; 
			}
			else{
				int op1 = dp[i][j-1]; // insertion
				int op2 = dp[i-1][j]; // deletion
				int op3 = dp[i-1][j-1]; // updation

				dp[i][j]=1 + min(op1, min(op2,op3));
			}
		}
	}

	return dp[n][m];
}

int main(){
	string s1 = "sunday";
	string s2 = "saturday";

	int dp[100][100];
	memset(dp, -1, sizeof(dp));

	cout << solve(s1, s2, s1.size(), s2.size()) << endl;
	cout << topDown(s1, s2, s1.size(), s2.size(), dp) << endl;
	cout << bottomUp(s1, s2) << endl;

	return 0;
}
















