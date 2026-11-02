#include <iostream>
#include <cstring>
using namespace std;

int topDown(int n, int *dp){
	if(n == 1){
		return 0; // because 1 se 1 tak jaane ke ways 0 hi honge
	}

	if(dp[n] != -1){
		return dp[n]; // agar pehle se calculated hai toh return kardo..
	}

	int op1 = INT_MAX, op2 = INT_MAX, op3 = INT_MAX;
	if(n % 3 == 0){
		op1 = topDown(n/3, dp);
	}

	if(n%2 == 0){
		op2 = topDown(n/2, dp);
	}

	op3 = topDown(n-1, dp);
	return dp[n] = min(op1, min(op2, op3)) + 1;

	// int ans = min(op1, min(op2, op3)) + 1;
	// dp[n] = ans; // return karne se pehle store karlo
	// return ans;
}

int bottomUp(int n){ // O(N)
	int dp[10000];
	dp[1] = 0;

	for (int i = 2; i <= n; ++i)
	{
		int op1 = INT_MAX, op2 = INT_MAX, op3 = INT_MAX;

		if(i%3 == 0){
			op1 = dp[i/3];
		}
		if(i%2 == 0){
			op2 = dp[i/2];
		}
		op3 = dp[i-1];
		dp[i] = min(op1, min(op2, op3)) + 1;;
	}

	return dp[n];
}

int main(){

	int n;
	cin>>n;
	int dp[10000];
	memset(dp, -1, sizeof(dp)); // Inbuilt function -> cstring headerfile
	
	cout<<topDown(n, dp) << endl;
	cout<<bottomUp(n) << endl;

	return 0;
}
















