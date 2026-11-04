#include <iostream>
using namespace std;

int wine(int *a,int l,int r,int day){
	// base case
	if(l>r){
		return 0;
	}

	// recursive case
	int op1 = a[l]*day + wine(a,l+1,r,day+1);
	int op2 = a[r]*day + wine(a,l,r-1,day+1);

	return max(op1,op2);
}

int topDown(int *a,int l,int r,int day,int dp[][100]){
	// base case
	if(l>r){
		return 0;
	}

	if(dp[l][r]!=-1){
		return dp[l][r];
	}

	// recursive case
	int op1 = a[l]*day + topDown(a,l+1,r,day+1, dp);
	int op2 = a[r]*day + topDown(a,l,r-1,day+1, dp);

	return dp[l][r]=max(op1,op2);
}

int bottomUp(int *a,int n){
	int dp[100][100] = {};

	for (int i = n-1; i >= 0; --i)
	{
		for (int j = i; j < n ; ++j)
		{
			int day = n - (j - i);
			int op1 = a[i]*day + (i+1<n ? dp[i+1][j] : 0);
			int op2 = a[j]*day + (j-1>=0? dp[i][j-1] : 0);

			dp[i][j] = max(op1, op2);
		}
	}

	return dp[0][n-1];
}

int main(){

	int a[] = {2,3,5,1,4};
	int n = sizeof(a)/sizeof(int);
	int dp[100][100];
	memset(dp, -1,sizeof (dp));
	cout << bottomUp(a,n)<<endl;
	cout << topDown(a,0,n-1,1, dp)<<endl;
	cout << wine(a,0,n-1,1)<<endl;

	return 0;
}
















