#include <iostream>
using namespace std;

int main(){

	int dp[100][100];

	int n,m;
	cin>>n>>m;

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m ; ++j)
		{
			if(i == 0 or j == 0){
				dp[i][j] = 1;
			}
			else{
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
			}
		}
	}

	cout << dp[n][m] << endl;

	return 0;
}
















