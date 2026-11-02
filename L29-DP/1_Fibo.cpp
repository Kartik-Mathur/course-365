#include <iostream>
using namespace std;

int fibo(int n){ // O(2^N)
	if(n == 0 or n == 1){
		return n;
	}

	return fibo(n-1)+fibo(n-2);
}

int topDown(int n,int *dp){  // O(N)
	if(n == 0 or n == 1){
		return n;
	}

	if(dp[n] != -1){
		return dp[n]; // Agar pata hai toh return kardo...
	}

	dp[n] = topDown(n-1, dp)+topDown(n-2, dp);// nth index par nth fibonacci number store karlo
	return dp[n];
}

int bottomUp(int n){  // O(N)
	int *dp = new int[n+1];
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i-1]+dp[i-2];
	}

	return dp[n];
}

int main(){

	int n;
	cin>>n;
	int dp[10000];
	for (int i = 0; i < 10000; ++i)
	{
		dp[i] = -1; // -1 can never be a valid fibonacci number....
	}

	cout << topDown(n, dp) << endl;
	cout << bottomUp(n) << endl;
	cout << fibo(n) << endl;

	return 0;
}
















